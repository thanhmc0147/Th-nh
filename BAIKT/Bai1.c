#include <stdio.h>

void nhap(int a[], int n)
{
    int i;
    for (i=0;i<=n;i++){
        printf("Nhap so a%d = ",i);
       scanf("%d",&a[i]);
    }
}
void xuat(int a[], int n)
{
    int i;
    for(i=0;i<=n;i++){
printf("%d  ",a[i]);
    }
}
void sapxep(int a[], int n){
    int tmp;
    int i,j;
    int k;
do{
        printf("Nhap so k la dau '+' voi dau '-' = (n-1-k) : ");
        scanf("%d",&k);
}while (n<k);
    for( i=0;i<=n;i++)
        for( j=0;j<=i;j++){
            if(a[j]<a[i]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    printf("\nMang sau khi sap xep:\n");
            for (i=0;i<=k;i++){
            printf("%d",a[i]);
            printf("+");
            }
            for (i=n;i>k;i--){
            printf("-");
            printf("%d",a[i]);
            }

}
      // printf("%d +",a[i]);
       // }
  //  for (i=k+1;i<n-1-k;i++){
  //  printf("%d -",a[i]);
  //  break;
//}
//}
void KQ(int a[],int kq[],int b[], int n)
{
    int i,k;

            for (i=0;i<=k;i++){
           kq[i]=a[i]+b[i];
            }
            for (i=n;i>k;i--){
           kq[i]-=a[i]+b[i];
            }

}
int main(){
int n,k;
int a[100],kq[100],b[100];
do{
printf("Nhap so phan tu n: ");
scanf("%d",&n);
}while (n<0);
nhap(a,n);
xuat(a,n);
sapxep(a,n); 
KQ(a,kq,b,n);

}