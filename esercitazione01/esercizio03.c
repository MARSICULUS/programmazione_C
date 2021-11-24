#include <stdio.h>

int len(char str[], int i)
{
    if(str[i] == '\0')
        return 0;
    return 1 + len(str, i + 1);
}

int len_iterativa(char str[], int i)
{
    int count = 0;
    while(str[i] != '\0')
        {
            count++;
            i++;
        }

    return count;
}

int main()
{
    char stringa[7] = {'G', 'i', 'u', 'l', 'i', 'o'};
    printf("%d\n", len(stringa, 0));
    printf("%d\n", len_iterativa(stringa, 0));

    return 0;
}