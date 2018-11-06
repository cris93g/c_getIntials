#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");
    char intials[4];
    for (int i = 0; i < strlen(name); i++)
    {
        if (isupper(name[i]))
        {
            intials[counter] = name[i];
            counter++;
        }
    }
    intials[counter] = "\0";
    print("%s\n", intials);
}