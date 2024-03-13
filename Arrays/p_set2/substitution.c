#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string transform_to_new_str(string text, string key);

int main(int argc, string argv[])
{
    string key, input_str, updated_str;

    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must contain only alphabetic characters.\n");
            return 1;
        }
    }

 
    for (int i = 0; i < 26; i++)
    {
        for (int j = i + 1; j < 26; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Key must not contain duplicate characters.\n");
                return 1;
            }
        }
    }

    key = argv[1];

    printf("plaintext: ");
    input_str = get_string("");

    updated_str = transform_to_new_str(input_str, key);

    printf("ciphertext: %s\n", updated_str);

    return 0;
}

string transform_to_new_str(string text, string key)
{
    char start_arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char tranfromed_str_arr[strlen(text)];

    for (int j = 0, len = strlen(text); j < len; j++)
    {
        if (isalpha(text[j]))
        {
            char c = tolower(text[j]);
            for (int k = 0; k < 26; k++)
            {
                if (c == start_arr[k])
                {
                    if (isupper(text[j]))
                    {
                        tranfromed_str_arr[j] = toupper(key[k]);
                    }
                    else
                    {
                        tranfromed_str_arr[j] = key[k];
                    }
                    
                }
            }
        }
        else
        {
            tranfromed_str_arr[j] = text[j]; 
        }
    }

    tranfromed_str_arr[strlen(text)] = '\0'; 

    return strdup(tranfromed_str_arr); 
}

