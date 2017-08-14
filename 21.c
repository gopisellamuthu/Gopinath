#include <stdio.h>
int main()
{
    int i, n, s1 = 0, s2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", s1);
        nextTerm = s1 + s2;
        s1 = s2;
        s2 = nextTerm;
    }
    return 0;
}
