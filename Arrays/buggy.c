#include <stdio.h>
#include <cs50.h>

int print_column(int height);
int height;

int main(void)
{
  do {
  height = get_int("Height: ");
  }
  while (height < 1);

  print_column(height);
}

int print_column(int height)
{

  for (int i = 0; i < height; i++) {
    printf("#\n");
  }
}
