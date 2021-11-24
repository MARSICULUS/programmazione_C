#include <stdio.h>

int len(char str[], int i)
{
    if(str[i] == '\0')
        return 0;
    return 1 + len(str, i + 1);
}

int palindroma(char* str)
{
    int flag = 1;
    int len_str = len(str, 0);
    
    for(int i = 0; i < len_str; i++)
    {
        if(str[i] != str[len_str - i - 1])
            flag = 0;
    }

    return flag;
}

int main(void)
{
    char stringa[7] = {'a', 'i', 'l', 'l', 'i', 'a'};
    if(palindroma(stringa))
        printf("la stringa è palindroma\n");
    else
        printf("la stringa non è palindroma\n");

    return 0;
}