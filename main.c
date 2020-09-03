//Author: Qiaoxu Cui qfc5036@psu.edu
//Collaborator: Zhili Hu zjh5625@psu.edu 
//Collaborator: Isabel Vera Ikv5018@psu.edu 
//Collaborator: Shufang Huang sbh5655@psu.edu 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
int main(void) {
  char *temperature =readline("Enter temperature in celsius: ");
  double newtemp = atof(temperature)*1.8 +32;
  double temp = atof(temperature);
  printf ("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, newtemp);
  return 0;
}