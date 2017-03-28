#include <stdio.h>

int add(int a, int b){
  return a+b;
}

int main(int argc, char **argv){
  printf("%i\n", add(5, 2));
  return 0;
}
