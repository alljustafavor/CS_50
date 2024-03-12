#include <ctype.h>
#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <strings.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
  string input = get_string("Text: ");
  
  int L = count_letters(input);
  int W = count_words(input);
  int S = count_sentences(input); 
  printf("Letters: %i\n", L);
  printf("Words: %i\n", W);
  printf("Sentences: %i\n", S);
  
  int index = round(0.0588 * ((float)L / W * 100.0) - 0.296 * ((float)S / W * 100.0) - 15.8);


  if (index > 16)
  {
    printf("Grade 16+\n");
  }
  else if (index <= 1)
  {
    printf("Before Grade 1\n");
  }
  else 
  {
    printf("Grade %i\n", (int)round(index));   }
}


int count_letters(string text)
{
  int letter_count = 0;

  for (int i = 0; text[i] != '\0'; i++)
  {

    if (isalpha(text[i]))
    {
      letter_count++;
    }
  }
  return letter_count;
}


int count_words(string text)
{
  int word_count = 0;
  bool in_word = false; 
  
  for (int i = 0; text[i] != '\0'; i++)
  {

    if (isalpha(text[i]))
    {
      in_word = true;
    }
    else if (text[i] == '\'' && in_word)
    {
      in_word = true;
    }
    else if (isspace(text[i]) || ispunct(text[i])) 
    {
      if (in_word)
      {
        word_count++;
      }
      in_word = false;
    }
  }
  return word_count;
}


int count_sentences(string text)
{
  int count = 0;

  for (int i = 0; text[i] != '\0'; i++)
  {

    if (text[i] == '.' || text[i] == '?' || text[i] == '!')
    {
      count++;
    }
  }
  return count;
}
