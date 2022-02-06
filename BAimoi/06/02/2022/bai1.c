#include <stdio.h>

void nhap(int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("Nhap so a[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void xuat(int a[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
}
int tinh(int a[], int n,int x)
{
    int S=a[0];
    int i;
    for(i=1;i<n;i++)
    {
        S += a[i]*x ;
        x--;
    }
    return S;
}
int main()
{
    int a[100];
    int n;
    int x;
    do
    {
        printf("Nhap so n: ");
        scanf("%d",&n);
    } while (n<=0);
    x=n;
/*   do{
    printf("Nhap so x= ");
    scanf("%d",&x);
    } while(x!=n || x<=0);*/
    nhap(a,n);
    xuat(a,n);
    printf("\nGia tri bieu thuc a0 + a1*x1 + ... + a[%d]*x(%d) = %d",n-1,n-1,tinh(a,n,x));
}