
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


void findSuffix(char* word, int n) {

  int size = strlen(word);
  char* newWord = (char*) malloc(sizeof(char) * (strlen(word) + 2));
  while (size >= n) {
    newWord[size] == word[size];
    size--;
  }
  printf("%s\n", newWord);
  n++;
  }


int main(int argc, char **argv) {

findSuffix(argv[1], 0);

}
