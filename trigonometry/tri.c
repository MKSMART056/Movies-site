
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


int main() 
{/*
    double angleInDegrees2;
    double angleInDegrees1;
    double angleInDegrees;
    printf(" \t\t\t\t sin: ");
    scanf("%lf" ,&angleInDegrees);
     printf(" \t\t\t\t cosine: ");
    scanf("%lf" ,&angleInDegrees2);
    printf(" \t\t\t\t tan: ");
    scanf("%lf" ,&angleInDegrees1);
    double angleInRadians2 = angleInDegrees2 * (M_PI / 180.0); // Convert degrees to radians
    double angleInRadians = angleInDegrees * (M_PI / 180.0); // Convert degrees to radians
    double angleInRadians1 = angleInDegrees1 * (M_PI / 180.0); // Convert degrees to radians



    // Trigonometric calculations
    double sine = sin(angleInRadians);
    double cosine =cos(angleInRadians2);
    printf("sine of %.2f degrees: %.4f\n",angleInDegrees, sine);
    printf("Cosine of %.2f degrees: %.4f\n",angleInDegrees2, cosine);
    
    double tangent = tan(angleInRadians1);
    if (angleInDegrees1 == 90 || angleInDegrees1 == 270) {
    printf("Tangent of %.2f degrees is undefined.\n", angleInDegrees1);
} else {
    printf("Tangent of %.2f degrees: %.4f\n", angleInDegrees1, tangent);
}  */  


float p;
float v;
float i;
float factor;
printf("Enter voltage value: ");
scanf("%f",&v);

printf("Enter current value: ");
scanf("%f",&i);

printf("enter the File or Tita: ");
scanf("%f",&factor);
 
double angle = factor * (M_PI / 180.0); // Convert degrees to radians
double cosine = cos(angle);
p=v*i*cosine;
printf("power: %f Watts",p);









    return 0;
}
