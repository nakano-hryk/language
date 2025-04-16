#include <stdio.h>

extern float area(float r);

int main()
{
  float s;
  s = area(5.0);
  printf("%f\n", s);
}
