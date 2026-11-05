#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, length;

    printf("Enter a string: ");
    scanf("%99s", str);

    length = strlen(str);
    printf("Length using strlen() = %d\n", length);

    while (str[i] != '\0')
    {
        i++;
    }

    printf("Length without string function = %d\n", i);

    return 0;
}
