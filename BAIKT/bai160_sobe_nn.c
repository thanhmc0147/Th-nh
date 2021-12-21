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
    printf("Mang so vua nhap gom:\n ");
    for (i=0;i<=n;i++){
printf (" %4.2f ",a[i]);
    }
}
float timkiem(float a[],int n)
{ 
    int i,nn,j;
    for ( i=0;i<=n;i++){
    if(a[i]<0 && a[i]> -1){
        nn=a[i];
        for(j=0;j<=n;j++){
            if ( nn < a[j] && a[j]<0 && a[j]> -1){
                nn =a[j];
            }
        }
        
    }


    }
    return nn;
}
int main(){
        int n;
    float a[2000];
do{
    printf("Nhap so phan tu n: ");
scanf("%d",&n);
    }while (n<=0);
    nhapmang(a,n);
    xuat(a,n);
 printf("SO nn: %.2f",timkiem(a,n));
}
