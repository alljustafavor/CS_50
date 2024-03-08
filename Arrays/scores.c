#include <stdio.h>
#include <cs50.h>

int main(void)
{
  float average(int lenght, int array[]);
  int n;
  do {
    n = get_int("Num of Scores: ");
  }
  while (n < 1);

  int scores[n];

  for (int i = 0; i < n; i++)
  {
    scores[i] = get_int("Score: ");
  }
  
  float avg = average(n, scores);
  printf("Average: %.2f%\n", avg);
  
}

float average(int length, int array[])
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return sum / (float) length;
}
