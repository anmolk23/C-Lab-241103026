#include <stdio.h>
int main()
{
    char *str1 = "Dhoni";
    char *str2 = "Kohli";
    char *str3 = "Rohit";
    char *str4 = "Bumrah";
    char *str5 = "Bhuvi";

    char *str[] = {str1, str2, str3, str4, str5};

  for (int i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}
