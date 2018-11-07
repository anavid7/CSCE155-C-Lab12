#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stringSuffix(char *input, int startingIndex);

int main(int argc, char **argv) {
  if(argc != 2) {
    printf("Please enter a word\n");
  }

  char *input = (char *) malloc(sizeof(char) * 50);
  input = argv[1];
  int startingIndex = 0;

  stringSuffix(input, startingIndex);
}

void stringSuffix(char *input, int startingIndex) {
  int i;
  int size = strlen(input);
  if(startingIndex == size) {
    return;
  }

  for(i = startingIndex; i < size; i++) {
    printf("%c", input[i]);
  }
  printf("\n");
  startingIndex++;
  stringSuffix(input, startingIndex);
}
