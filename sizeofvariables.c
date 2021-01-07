#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'b';
  float c = 34.229;
  double d = 342.298;
  short int e = 72;
  long double f = 65.888;


  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

 // print value and size of a char variable
  printf("char b value: %c and size: %c bytes\n", b, sizeof(b));

 // print value and size of a float variable
  printf("float c value: %f and size: %f bytes\n", c, sizeof(c));

 // print value and size of a double variable
  printf("double d value: %f and size: %f bytes\n", d, sizeof(d));

 // print value and size of a modified int variable
  printf("short int e value: %d and size: %d bytes\n", e, sizeof(e));

 // print value and size of a modified float variable
  printf("long double f value: %f and size: %f bytes\n", f, sizeof(f));
}

