#include <stdio.h>

int main()
{ 
  // Problem: What is the output for different values of score (90, 75, 50)?
  int score = 75; // Try changing this to 90 or 50 and guess the output
  printf("Block 2: ");
  if (score >= 90)
  {
    printf("Grade A\n");
  }
  else if (score >= 80)
  {
    printf("Grade B\n");
  }
  else if (score >= 70)
  {
    printf("You passed\n");
  }
  else
  {
    printf("You failed\n");
  }
}