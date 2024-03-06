#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x = get_int("Whats x?");
  int y = get_int("Whats y?");

  if (x < y)
  {
    printf("%i is greater than %i\n", y, x);
  }
  else if (x > y)
  {
    printf("%i is greater than %i\n", x, y);
  }
  else 
  {
    printf("%i is equal to %i\n", x, y);
  }
}
