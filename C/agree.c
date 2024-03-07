#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int on_off = 1;

  while (on_off)
  {
    char res = get_char("Do you Agree to the TOS? (y/N)");

    if (res == 'Y' || res == 'y' )
    {
      printf("Argeed.\n");
      on_off = 0;
    }
    else if (res == 'N' || res == 'n' )
    {
      printf("Not agreed.\n");
      on_off = 0;
    }

  }

}
