#include <stdio.h>

void nhap(float a[], int n)
{
int i;
for (i=0;i<=n;i++)
{
    printf("Nhap so a[%d] = ",i);
    scanf("%f",&a[i]);
    }
}
void xuat(float a[], int n)
{
int i;
for ( i=0;i<=n;i++)
{
    printf(" %4.2f",a[i]);
}
}
void SX(float a[], int n)
{
int i,j;
float tmp;
for (i=0;i<=n;i++)
{
        for(j=i+1;j<=n;j++){
            if( a[i]>a[j] && a[i]>0 && a[j]>0){
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int main()
{
float a[100];
int n;
do{
printf("Nhap so n : ");
scanf("%d",&n);

}while(n<=0);
nhap(a,n);
xuat(a,n);

SX(a,n);
printf("\nMang sap xep :) ");
xuat(a,n);

}