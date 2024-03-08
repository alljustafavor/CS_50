#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int change_owed;
  int count;

  do 
  {
    change_owed = get_int("Change owed: ");
  }
  while(change_owed < 0);

  
  while (change_owed > 0)
  {
    if (change_owed >= 25)
    {
      count += 1;
      change_owed -= 25;
    }
    else if (change_owed >= 10)
    {
      count += 1;
      change_owed -= 10;
    }
    else if (change_owed >= 5)
    {
      count += 1;
      change_owed -= 5;
    }
    else 
    {
      count += 1;
      change_owed -= 1;
    } 
  }
  printf("%i\n", count);
}
