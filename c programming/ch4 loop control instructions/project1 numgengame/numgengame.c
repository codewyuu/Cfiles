#include<stdio.h>
#include<stdlib.h>  //all these are header files and the functions that we use like printf,scanf comes from these

int main(){
    int number;
    number=rand(); /*this gives us random number but wil show warning adn will not generate
     different number without using the time.h header file*/
     printf("the number is %d", number);
     return 0; 
}


//P R O J E C T - 1
/*Q. we will write a program that generates a random number and askes the player to guess it. if the player's guess is higher than
the actual number, the program displays "lower the number please". similarly if the user guess is too low, the program prints
"higher number please."
when the user gusses the correct number the program displays the number of gusses the player has used to get that number.

HINTS: use loops, use a random number generator*/

#include<stdio.h>
#include<stdlib.h>  //all these are header files and the functions that we use like printf, scanf comes from these
#include<time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100+1; //now the random numbers will be in between 0 to 100 but i don't really need 0 so i'll add 1 to it.
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("higher number please\n");
        }
        else{
            printf("you guesse it in %d attempts.\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);

     return 0; 
}