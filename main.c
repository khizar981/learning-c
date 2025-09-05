#include <stdio.h>

int main() {
  int mysecretNumber = 98 ;//my scret number
    int guess;//guess for guessing a number
   do {
       printf("Enter a number: ");
       scanf("%d",&guess);
       if
       (guess == mysecretNumber)
          { printf("your guess is correct!\n");}
       else
          { printf("your guess is wrong!\n");}

       if (guess < mysecretNumber) {
           printf("hint: guess is to low\n");}
          else
          {printf("guess is to high\n");}
   }
       while (guess != mysecretNumber);



    return 0;
}