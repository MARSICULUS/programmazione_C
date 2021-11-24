#include <stdio.h>

int len(char str[], int i)
{
    if(str[i] == '\0')
        return 0;
    return 1 + len(str, i + 1);
}



int main()
{
    char stringa[7] = {'G', 'i', 'u', 'l', 'i', 'o'};
    printf("%d\n", len(stringa, 0));

    return 0;
}