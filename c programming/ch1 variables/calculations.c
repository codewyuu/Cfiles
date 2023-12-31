//CREATE A PROGRAM TO ADD TWO NUMBERS IN C
#include <stdio.h>
int main(){
    int a = 10;
    int b = 59;
    printf("the sum of a and b is %d \n", a + b);
    return 0;
}
//nice!

//similarly for subtraction, multiplication:
#include <stdio.h>
int main(){
    int a = 10;
    int b = 59;
    printf("the difference of a and b is %d \n", b - a);
    return 0;
}

#include <stdio.h>
int main(){
    int a = 10;
    int b = 59;
    printf("the product of a and b is %d \n", a * b);
    return 0;
}

//now using the float data type
#include <stdio.h>
int main(){
    float a = 10.0;
    float b = 5.9;
    printf("the product of a and b is %f \n", a * b);
    return 0;
}

#include <stdio.h>
int main(){
    int a = 10;
    int b = 59;
    printf("the sum of a and b is %f \n", a + b); //NOTE:here the code won't work because %f is mainly used for float data type and for int data type we use %d, %f storing all real numbers also doesn't means that it can store integers
    return 0;
}
//i've coded multiple programs here so to run them first select each one of it using the cursor.

#include <stdio.h>
int main(){
    int a = 90;
    int b = 9;
    printf(" on dividing a by b it gives us %d \n", a / b);
    return 0;
}

/* (a)now if i want to limit the decimal place to which the compiler gives me the output,
then we just need to put '.' before %f so that if i want to to limit the decimal place to just 2 digits then
i need to type '%.2f'
for 3 decimal places, %.3f
for 4 decimal places, %.4f and so on.

(b) now by default the compiler gives the output to the 6th place of decimal, but for an instance
if i want the output to the 7,8 or even 9th place then i just need to type
%.7f, %.8f, %.9f respectively*/

//example for (a)
//for 2th place to the decimal
#include <stdio.h>
int main(){
    float a = 10.0;
    float b = 5.9;
    printf("the product a and b is %.2f \n", a * b);
    return 0;
}

//example for (b)
//for 7th place to the decimal
#include <stdio.h>
int main(){
    float a = 10.0;
    float b = 5.9;
    printf("the product of a and b is %.7f \n", a * b);
    return 0;
}
