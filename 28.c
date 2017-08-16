#include <stdio.h>

const double F_TO_CELS_ONE_EIGHT = 1.8;
const double F_TO_CELS_THIRTYTWO = 32.0;
const double C_TO_KELVIN = 273.16;

void Temperatures(double f_temp);

int main(void){

double f_temp;
char quit;
while (quit != "q"){
printf("Enter temperature in Fahrenheit (q to quit):
");
quit = getchar();
scanf("%lf", &f_temp);
Temperatures(f_temp);
}
printf("\nbye!");
return 0;
}
