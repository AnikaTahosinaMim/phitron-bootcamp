#include <stdio.h>
int main()
{
    int n, n2;
    scanf("%d %d", &n, &n2);
    if (n % n2 == 0 || n2 % n == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    };

    return 0;
}