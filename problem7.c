#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *s1;
  size_t i;
  unsigned count = 0;
  size_t num1 = 1000000;
  const unsigned target = 10001;

  s1 = calloc(num1, sizeof *s1);
  for (i = 2; i < n; i++) {
    if (!s1[i]) {
      size_t j;

      count++;
      if (count == target) {
    //    printf("%lu\n", i);
        break;
      }
      for (j = i*2; j < n; j += i) {
        s1[j] = 1;
      }
    }
  }
  //free(sieve);

  return 0;
}
