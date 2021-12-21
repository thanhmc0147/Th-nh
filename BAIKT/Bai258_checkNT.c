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
bool checkNT(long long n){

   bool prime[n+1];
   int i;
   for(i=2;i<=n;i++){
       prime[i]=true;
   }
   int p;
   if(n <2){
       return false;
   }
   for ( p =2; p*p<=n;p++){
       if ( prime[p]==true)
       {
           int i;
           for (i=2*p;i<=n;i+=p)
           {
               prime[i]=false;
           }

       }
   }
   if (prime[n]==true)
   {
       return true;
   }
       return false;
}
void sapxep(int a[],long long n)
{ 
int nn;
    int i,j;
    for (i=0;i<n-1;i++)
    {
if(checkNT(a[i])==true)
{
for (j=i+1;j<n;j++)
{
    if (checkNT(a[j]) == true && a[i] > a[j]){
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
    long long n,i;
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