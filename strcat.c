#include <stdio.h>

void my_strcat(char des[], const char src[]) {
  int i = 0, j = 0;

  while (des[i] != '\0')
    i += 1;
  while (src[j] != '\0') {
    des[i + j] = src[j];
    j += 1;
  }
  des[i + j] = '\0';
}

int main() {
  char des[1000];
  char src[100];
  des[0] = 0;
  for (int i = 0; i < 2; ++i) {
    printf("src: ");
    scanf("%s", src);
    my_strcat(des, src);
  }

  printf("%s", des);   

  return 0;
}
