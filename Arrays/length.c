#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int string_length(string s);

  string name = get_string("Name: ");
  length = string_length(name);
  return length;
}

int string_length(string s)
{
  int n = 0;
  while(s[n] != '\0')
  {
    n++;
  }
  return n;

}
