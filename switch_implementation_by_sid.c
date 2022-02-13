#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, m, n, mul, a, b, c;
    char choice;
    char name[100];
    printf("\nEnter e to exit\n");

label:
    printf("\nEnter a alphabet of your choice: ");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'm':
        printf("Enter a number for the multiplication table:\n ");
        scanf("%d", &n);
        for (i = 1; i <= 10; i++)
        {
            mul = n * i;
            printf("%d x %d = %d \n", n, i, mul);
        }
        goto label;

    case 'n':
        printf("\nEnter your name: ");
        scanf("%s", name);
        printf("\n your name is: %s ", name);
        goto label;

    case 'f':
        printf("Adding two numbers, Enter two inputs: ");
        scanf("%d %d", &a, &b);

        c = add(a, b);
        printf("\nthe Sum is: %d", c);
        goto label;

    case 'e':
        exit(0);
    }
    goto label;
    return 0;
}

int add(int x, int y)
{
    return x + y;
}