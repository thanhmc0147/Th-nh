#include <stdio.h>

void nhap(int a[], int  n)
{
     do{
        printf("Nhap so n: ");
        scanf("%d",n);
    }while(n<=0);
int i;
for (i=0;i<=n;i++)
{
    printf("Nhap so a[%d] = ",i);
    scanf("%d",&a[i]);
}

}
void xuat(int a[], int n)
{
    int i;
    for (i=0;i<=n;i++)
    {
        printf("%4d",a[i]);
    }
}
void SX(int a[], int n)
{
    int tmp;
int i,j;
for (i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if ( a[i]>a[j]){
        a[i]=tmp;
        a[i]=a[j];
        a[j]=tmp;
        }
    }
}

}
void checkHVi(int a[], int b[], int na, int nb)
{
    if ( na != nb)
    { 
         printf("Ko phai hoan vi");
         return;
    }
    SX(a,na);
    SX(b,nb);
    int i,n;
    for ( i=0;i<=na;i++)
    {
        if ( a[i]!= b[i])
        {
            printf("Khong phai H.Vi");
        }
    }
    printf("La Hoan Vi");
    return;
    
}
int main()
{
    int a[100], b[100];
    int na , nb,n ;
    nhap(a,na);
    xuat(a,na);
    nhap(b,nb);
    xuat(b,nb);
    checkHVi(a,b,na,nb);
    printf("SX");
    SX(a,na);
    xuat(a,na);
    printf("SX");
    SX(b,nb);
    xuat(b,nb);
    return 0;
}