//pactice paper 1 lol

//write a c program to calculate an area of a rectangle.

#include<stdio.h>
int main(){
    float a, b;
    printf("The length of the rectangle is =\n");
    scanf("%f", &a);
    printf("The breadth of the rectangle is =\n");
    scanf("%f", &b);
    printf("the area of the rectangle = %.2f\n", a*b);
    return 0;
}

----------------------------------------------------------------------------------------------------------------
//write a c program to find the area area of a circle
#include<stdio.h>
int main(){
    float pi, radius;
    printf("the value of pi =\n");
    scanf("%f", &pi);
    printf("the radius of the circle is =\n");
    scanf("%f", &radius);
    printf("the area of the circle is= %.2f \n", pi*radius*radius);
    return 0;
}

--------------------------------------------------------------------------------------------------------------
//program to find the volume of a cylinder
#include<stdio.h>
int main(){
    float pi, r, h;
    printf("the value of pi you wanna use =\n");
    scanf("%f", &pi);
    printf("the value of r =\n");
    scanf("%f", &r);
    printf("the height of the cylinder is =\n");
    scanf("%f", &h);
    printf("the volume of the cylinder is %.2f \n", pi*r*r*h);
    return 0;
}

------------------------------------------------------------------------------------------------------------
//convert celsius to fahrenheit

#include<stdio.h>
int main(){
    float a=1.8;
    int b=32;
    float celsius;
    printf("temperature in celsius =\n");
    scanf("%f", &celsius);
    printf("the temperature in fahrenheit= %.2f \n", (celsius*a)+b);
    return 0;
}

//OR
#include<stdio.h>
int main(){
    float celsius;
    printf("temperature in celsius =\n");
    scanf("%f", &celsius);
    printf("the temperature in fahrenheit=%.2f \n", (celsius*9/5)+32);
    return 0;
}

-------------------------------------------------------------------------------------------------------------
//finding out simple interest

#include<stdio.h>
int main(){
    float principle, time, rate;
    printf("principle amount =\n");
    scanf("%f", &principle);
    printf("time = \n");
    scanf("%f", &time);
    printf("rate =\n");
    scanf("%f", &rate);
    printf("the simple interest =%.2f\n", principle*time*rate/100);
    return 0;
}