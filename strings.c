#include <stdio.h>

int main()
{

    char str[20];

    printf("Enter your name: ");

    // scanf("%s", str);
    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    return 0;
}