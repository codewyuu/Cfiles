#include<stdio.h>
int main(){
    int x,y,z,k;
    printf("enter the value of x \n");
    scanf("%d", &x);
    printf("enter the value of y \n");
    scanf("%d", &y);
    printf("enter the value of z \n");
    scanf("%d", &z);
    printf("enter the value of k \n");
    scanf("%d", &k);
    printf("the value of the expression 3x/y-z+k is %d\n", 3*x/y-z+k);
    return 0;
}