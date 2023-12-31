#include<stdio.h>
int main(){
   int a, b, c, d;
   printf("enter the value of a\n");
   scanf("%d", &a);
   printf("enter the value of b\n");
   scanf("%d", &b);
   printf("enter the value of c\n");
   scanf("%d", &c);
   printf("enter the value of b\n");
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