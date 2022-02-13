#include <stdio.h>
#include <stdlib.h>

int mul(int a, int b)
{
    return (a * b);
}

int main()
{
    int num, n, i, a, b, z;
    char name[20];
label:
    printf("\n\nSelect your case from listed things ==> ");
    printf("\n \n1. multiplacation \n2. name print \n3. function implementation \n4.exit");

    printf("\nenter your case: ");
    scanf("%d", &num);

    switch (num)
    {

    case 1:

        printf("Enter an integer: ");
        scanf("%d", &n);
        for (i = 1; i <= 10; ++i)
        {
            printf("%d * %d = %d \n", n, i, n * i);
        }
        goto label;

    case 2:
        printf("\nenter your name: ");
        scanf("%s", &name);
        printf("\nyour name is %s", name);
        goto label;

    case 3:
        printf("\nmultiplacation of two number using function");
        printf("\nenter 1st numbers: ");
        scanf("%d", &a);

        printf("\nenter 2nd numbers: ");
        scanf("%d", &b);

        z = mul(a, b);
        printf("the multiply is %d", z);
        goto label;

    case 4:
        exit(0);

    default:

        printf("Error! operator is not correct");
    }
}
