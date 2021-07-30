#include <stdio.h>

void triPattern()
{
    int i, j;
    for (i = 0; i = 5; i++)
    {
        printf("\n");
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
    }
}
void rev_triPattern()
{
    int i, j;
    for (i = 5; i > 0; i--)
    {
        printf("\n");
        for (j = 0; j < i; j++)
            printf("%c", '*');
    }
}
int main()
{
    int choice;
    printf("enter 0 for triangular star pattern and 1 for rever triangular star pattern");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        triPattern();
        break;
    case 1:
        rev_triPattern();
        break;

    default:
        printf("choose correct option");
        break;
    }
    return 0;
}
