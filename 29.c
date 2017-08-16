#include <stdio.h>
int main()
{
    int n, e, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(e=1; e <= n; ++e)
    {
        sum += e;   
    }

    printf("Sum = %d",sum);

    return 0;
}
