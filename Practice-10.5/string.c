#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001], b[1001];
    int i, temp = 0;

    scanf("%s", a);

    // Copy the original string to another string
    strcpy(b, a);

    // Reverse the first string
    for (i = 0; i < strlen(a) / 2; i++)
    {
        temp = a[i];
        a[i] = a[strlen(a) - i - 1];
        a[strlen(a) - i - 1] = temp;
    }

    // Check if all the characters of the reversed string are equal to all the characters of the original string
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] != b[i])
        {
            printf("The reversed string is not equal to the original string.\n");
            return 0;
        }
    }

    // If the loop completes without finding a difference, the reversed string is equal to the original string
    printf("The reversed string is equal to the original string.\n");

    // Print the reversed string
    for (i = 0; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}
