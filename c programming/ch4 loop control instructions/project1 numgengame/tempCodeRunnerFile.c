#include<stdio.h>
#include<stdlib.h>  //all these are header files and the functions that we use like printf,scanf comes from these

int main(){
    int number;
    number=rand(); /*this gives us random number but wil show warning adn will not generate
     different number without using the time.h header file*/
     printf("the number is %d", number);
     return number; 
}