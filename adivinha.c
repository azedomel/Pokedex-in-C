#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  printf("-------------------------\n");
  printf("Welcome to guessing game!\n");
  printf("-------------------------\n\n");

  srand(time(0));
  int secretnumber = rand() % 100;
  int guess;
  int attempt = 1;
  double points = 1000;

  int guessed = 0;
  int numbertries;

  for(int i = 1; i <= numbertries; i++) {
  printf("\nTry %d\n", attempt);
  printf("What's your guess?\n");
  scanf("%d", &guess);
  printf("\nYour guess was %d\n\n", guess);

  if (guess < 0) {
    printf("\nYou can't guess negative numbers!\n");
    continue;
  }
  guessed = (guess == secretnumber);
  int higher = guess > secretnumber;

  if(guessed) {
    break;
  }
  else if (higher){
    printf("\nYour guess was higher than the secret number!\n");
  }
  else {
    printf("\nYour guess was lower than the secret number!\n");
  }
  attempt++;

  double pointslot = abs(guess - secretnumber) / 2.0;

  points = points - pointslot;
  }
  printf("----------\n");
  printf("Game over!\n");
  
  if (guessed) {
    printf("You won!\n");
    printf("----------\n");
    printf("Total points: %.0f\n", points);
    printf("\nYou guessed in %d attempts!\n", attempt);
  }
  else {
  }
  return 0;
}
