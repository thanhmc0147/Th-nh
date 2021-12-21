#include <stdio.h>
#include <stdbool.h>
void nhap(int a[],int n)
{
int i;
for ( i=0;i<=n;i++){
printf("So a[%d] = ",i);
scanf("%d",&a[i]);
}
}
void xuat(int a[],int n)
{
    int i;
    for (i=0;i<=n;i++){
        printf("%4d ",a[i]);
    }
}
bool checkSHT(int n){
int sum = 0,i;
for(i=0;i<=n/2;i++)
{
if(n%i==0) sum += i;
}
if ( sum ==n)  return true;
else return false;
}
void sapxep(int a[],int n)
{ 
int nn;
    int i,j;
    for (i=0;i<n-1;i++)
    {
if(checkSHT(a[i])==true)
{
for (j=i+1;j<n;j++)
{
    if (checkSHT(a[j]) == true && a[i] > a[j]){
        nn=a[i];
        a[i]=a[j];
        a[j]=nn;
    }
}
}

    }
    }
int main()
{
    int a[1000];
    int n,i;
do{
printf("nhap so n: ");
scanf("%d",&n);
}while (n<0);
nhap(a,n);
printf("Mang duoc nhap la : ");
xuat(a,n);
sapxep(a,n);
printf("\n SX: ");
xuat(a,n);
}