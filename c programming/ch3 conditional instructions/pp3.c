/*Q write a program to find out whether a student is pass or fail;
if it requires total 40% and at least 33% in each subject to pass
assure 3 subjects and take marks as an input from the user.*/

#include<stdio.h>
int main(){
   int physics, chemistry, maths;
   float total;
   printf("enter your physics marks\n");
   scanf("%d", &physics);
   printf("enter your chemistry marks\n");
   scanf("%d", &chemistry);
   printf("enter your maths marks\n");
   scanf("%d", &maths);

   total=(physics+chemistry+maths)/3;

   if((total<40)||physics<33|| chemistry<33||maths<33){
      printf("your total percentage is %f and you failed\n", total);
   }
   else{
      printf("your total percentage is %f and you have passed\n", total);
   }
   return 0; 
}
--------------------------------------------------------------------------------------------------------------
/*Q. calculate income tax paid by an employee to the govt. as per the slabs mentioned below.

income slab        tax 
2.5L-5.0L           5%
5.0L-10.0L         20%
above 10.0L        30%

note that thero is no tax below 2.5L, take income amount as an imput from the user.*/

#include<stdio.h>
int main(){
   float tax=0, income;
   printf("enter your income\n");
   scanf("%f", &income);

   if(income>=250000 && income<=500000){
      tax=0.05*(income-250000); /* here we are subtracting 250000 from income because people whose income
       is equal or less than 250000 are tax free but if their income is more than that then they 5% tax will be applied on the amount after 2.5L*/
   }
   if(income>=500000 && income<=1000000){
      tax=tax+0.5*(income-250000);
   }
   if(income>1000000){
      tax=tax+0.3*(income-250000);
   }
   printf("your net income tax to be paid by 26th of this month is %f\n", tax);
   return 0;
}

//Q. W.A.P to find whether a year entered by the user is a leap year or not, take year as an input from the user.

#include<stdio.h>
int main(){
   int year;
   printf("enter the year\n");
   scanf("%d", &year);

   if((year%4==0 && year%100!=0)|| year%400==0){ // a year is considered a leap year if it is divisible by 4 and not divisible by 100, or if it is divisible by 400. 
      printf("%d is a leap year\n", year);
   }
   else{
      printf("%d not a leap year\n", year); 
   }
   return 0;
}

//Q. write a program to determine whether a character entered by the user is lowercase or not

#include<stdio.h>
int main(){
   char ch;
   //in ascii table, a to z lies from 97-122
   printf("enter the character\n");
   scanf("%c", &ch);

   if(ch>=97 && ch<=122){
      printf("it is lower case");
   }
   else{
      printf("it is not lower case");
   }
   return 0;
}

//Q. write a program to find greatest of four numbers entered by the user?

#include<stdio.h>
int main(){
   int a, b, c, d;
   printf("enter the value of a\n");
   scanf("%d", &a);
   printf("enter the value of b\n");
   scanf("%d", &b);
   printf("enter the value of c\n");
   scanf("%d", &c);
   printf("enter the value of d\n");
   scanf("%d", &d);

   if((a>b) && (a>c) && (a>d)){
      printf("a is greatest of the four numbers.\n");
   }
   if((b>a) && (b>c) && (b>d)){
      printf("b is the greatest of the four numbers.\n");
   }
   if((c>a) &&(c>b) &&(c>d)){
      printf("c is the greatest of the four numbers\n");
   }
   if((d>a) && (d>b) && (d>c)){
      printf("d is the greatest of the four numbers\n");
   }
   return 0;
}
