#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
  int on_off = 1;
  int row;
  int col;

  while (on_off)
  {
    row = get_int("Rows: ");
    col = get_int("Col: ");
    if (row < 2 && col < 2) on_off = 1;
    else
     on_off = 0;
  }

  for(int i = 0; i < row; i++)
  { 
    for (int j = 0; j < col; j++)
    {
      printf("#");
    }
    printf("\n");
  }

}
