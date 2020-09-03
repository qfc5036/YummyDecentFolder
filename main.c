#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
int main(void) {
  char *temperature =readline("Enter temperature in celsius: ");
  double newtemp = atof(temperature)*1.8 +32;
  double temp = atof(temperature);
  printf ("%f° in celsius is equivalent to %f° Fahrenheit.\n", temp, newtemp);
  return 0;
}