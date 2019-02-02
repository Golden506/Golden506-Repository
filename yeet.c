#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
int i;
string input;
int length;

input = get_string("Input string to be translated: ");
length = strlen(input);
  for(i = 0;i < length;i++)
    {
        if(isupper (input[i]))
        {
            input[i] = input[i] + 32;
        }
        if(input[i] == 'a')
        {
            printf("y");
            printf("e");
            printf("e");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'b')
        {
            printf("y");
            printf("e");
            printf("a");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'c')
        {
            printf("y");
            printf("e");
            printf("o");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'd')
        {
            printf("y");
            printf("o");
            printf("o");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'e')
        {
            printf("y");
            printf("a");
            printf("a");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'f')
        {
            printf("y");
            printf("i");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'g')
        {
            printf("y");
            printf("i");
            printf("o");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'h')
        {
            printf("y");
            printf("o");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'i')
        {
            printf("y");
            printf("e");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'j')
        {
            printf("y");
            printf("a");
            printf("o");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'k')
        {
            printf("y");
            printf("o");
            printf("m");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'l')
        {
            printf("y");
            printf("a");
            printf("m");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'm')
        {
            printf("y");
            printf("i");
            printf("m");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'n')
        {
            printf("y");
            printf("a");
            printf("i");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'o')
        {
            printf("y");
            printf("e");
            printf("l");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'p')
        {
            printf("y");
            printf("a");
            printf("l");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'q')
        {
            printf("y");
            printf("i");
            printf("l");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'r')
        {
            printf("y");
            printf("i");
            printf("a");
            printf("t");
            printf(" ");
        }
        if(input[i] == 's')
        {
            printf("y");
            printf("o");
            printf("r");
            printf("t");
            printf(" ");
        }
        if(input[i] == 't')
        {
            printf("y");
            printf("e");
            printf("r");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'u')
        {
            printf("y");
            printf("i");
            printf("r");
            printf("t");
            printf(" ");
        }
        if(input[i] == 'v')
        {
            printf("y");
            printf("o");
            printf("t");
            printf("e");
            printf(" ");
        }
        if(input[i] == 'x')
        {
            printf("y");
            printf("e");
            printf("t");
            printf("e");
            printf(" ");
        }
        if(input[i] == 'y')
        {
            printf("y");
            printf("a");
            printf("t");
            printf("e");
            printf(" ");
        }
        if(input[i] == 'z')
        {
            printf("y");
            printf("i");
            printf("i");
            printf("i");
            printf(" ");

        }

    }
    printf("\n");
}
