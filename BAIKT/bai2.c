#include <stdio.h>

int main(){
int a[1000],pre[100001],i,n,k,max;
printf("Nhap so n: ");
scanf("%d",&n);
for (i=0;i<=n;i++){
printf("Nhap so a[%d] = ",i);
scanf("%d",&a[i]);
}
for (i=0;i<=n;i++){
    printf("So a[%d] = %d\n",i,a[i]);
if ( i== 0) pre[0]=a[0];
max = pre[0];
pre[i]=pre[i-1]+a[i];
}
max = pre[0];

printf(" ",max);

}