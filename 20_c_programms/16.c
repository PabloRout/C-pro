/*Write a program which takes the radius of a circle as input from the user, passes it to
 another function that computes the area and the circumference of the circle
 and displays. the value of area and circumference from the main() function.*/

#include <stdio.h>
void circle(float , float*, float *);
int main() 
{
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circle(radius, &area, &circumference);
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n",
     circumference);
return 0;
}
void circle(float radius, float *area, float *circumference) 
{
    *area = 3.14 * radius * radius;
    *circumference = 2 * 3.14 * radius;
}
