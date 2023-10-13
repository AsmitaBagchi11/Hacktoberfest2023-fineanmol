#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;

    printf("\na=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);

    printf("\nBefore swapping:");
    printf("\na=%d",a);
    printf("\nb=%d",b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping:");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;
}
