//KHAIROOL AZRIL (A181527)
#include<stdio.h>
void main()
{

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    printf("Fibonacci Series: 0, 1");

    while ( b < n ){

        int c = a+b;
        a = b;
        b = c;
        if (c<=n)
            printf(", %d", c);

    }
}