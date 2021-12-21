#include <stdio.h>

void nhapmang(float a[],int n)
{
int i;
for ( i=0;i<=n;i++){
    printf("So a[%d]= ",i);
    scanf("%f",&a[i]);
}
}
void xuat(float a[],int n)
{
    int i;
    for (i=0;i<=n;i++){
printf (" %4.1f ",a[i]);
    }
}
void sapxep(float a[],int n)
{ 
    float nn;
    int i,j;
    for ( i=1;i<=n;i+=2){
        for(j=i;j<n+1;j+=2){
            if ( a[i] > a[j]){
                nn =a[i];
                a[i]=a[j];
                a[j]=nn;
            }
        }
        }
    }
int main(){
        int n;
    float a[2000];
do{
    printf("Nhap so phan tu n: ");
scanf("%d",&n);
    }while (n<=0);
    nhapmang(a,n);
    printf("Mang vua duoc nhap la : \n");
    xuat(a,n);
    sapxep(a,n);
    printf("\nMang sau khi sap xep tai vi tri le : \n");
    xuat(a,n);
}
