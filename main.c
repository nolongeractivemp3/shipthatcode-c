#include <stdio.h>
#include <string.h>

#define MAX_LINES 60
#define LINE_SIZE 256

/* given: read one line of stdin into dst without its newline */
static void read_line(char *dst) {
  if (fgets(dst, LINE_SIZE, stdin) == NULL) {
    dst[0] = '\0';
    return;
  }
  size_t k = strlen(dst);
  if (k > 0 && dst[k - 1] == '\n') {
    dst[k - 1] = '\0';
  }
}

/* given: read a count line, then that many text lines */
static int read_batch(char batch[][LINE_SIZE]) {
  char head[LINE_SIZE];
  read_line(head);
  int count = 0;
  sscanf(head, "%d", &count);
  if (count < 0)
    count = 0;
  if (count > MAX_LINES)
    count = MAX_LINES;
  for (int i = 0; i < count; i++) {
    read_line(batch[i]);
  }
  return count;
}

int main(void) {
  static char morning[MAX_LINES][LINE_SIZE];
  static char evening[MAX_LINES][LINE_SIZE];
  int n_morning = read_batch(morning);
  int n_evening = read_batch(evening);
  const char *path = "/tmp/diary.txt";

  /* TODO 1: create the file at `path`, check for NULL, write each of the
     n_morning lines in morning[] on its own line, then close it. */
  FILE *fp = fopen(path, "w");
  if (fp == NULL) {            /* the ONLY failure report you get */
      perror(path);   /* prints: /tmp/scores.txt: Permission denied */
      return 2;
  }
  for (int i =0; i < n_morning; i++) {
      fprintf(fp, "%s\n", morning[i]);   /* printf with a stream in front */
  }
  fclose(fp);
  /* TODO 2: open the same file again so that the n_evening lines in
     evening[] are added after the morning lines, check for NULL,
     write them, then close it. */
  FILE *fps = fopen(path, "a");
  if (fps == NULL) {            /* the ONLY failure report you get */
      perror(path);   /* prints: /tmp/scores.txt: Permission denied */
      return 2;
  }
  for (int i =0; i < n_evening; i++) {
      fprintf(fps, "%s\n", evening[i]);   /* printf with a stream in front */
  }
  fclose(fps);
  /* TODO 3: open the file for reading, check for NULL, and print every
     line in it as <number>:<text> (numbered from 1, no newline inside
     the text), close it, then print the total as below. */
  int total = 0;
  char buf[128];
  FILE *r = fopen(path, "r");   /* w NOT closed yet */
  while (fgets(buf, sizeof buf, r) != NULL) {
      total ++;
      printf("%d:%s",total, buf);
  }
  fclose(r);
  (void)n_morning;
  (void)n_evening;
  (void)path;
  printf("lines: %d\n", total);
  return 0;
}
