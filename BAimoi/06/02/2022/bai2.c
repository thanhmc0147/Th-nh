#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Nhap so n = ");
    scanf("%d",&n);
    float S;
    S= 2;
    int i;
    for (i=0;i<=n;i++)
    {
        S += 1.0 /((2*i) + 1);
    }
    printf("Gia tri S(n) = 1 + 1/2 + 1/2 + ... + 1/(2n+1) = %.3f ",S);
    return 0;
}