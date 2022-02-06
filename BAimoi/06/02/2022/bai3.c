#include <stdio.h>

struct Phanso
{
    int tu;
    int mau;
};
struct Phanso nhap()
{
    struct Phanso p;
    printf("Nhap tu so: ");
    scanf("%d",&p.tu);

    do{
        printf("Nhap mau so: ");
        scanf("%d",&p.mau);
    }while (p.mau<=0);
return p;
}
int ucln(int a, int b)
{
    while ( a!= b)
    {
        if (a>b)
        {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
struct Phanso rutG(struct Phanso p)
{
    if(p.tu!=0){
        int u= ucln(p.tu,p.mau);
        p.tu /= u;
        p.mau /= u;
    }
    return p;
}
int mc(int a, int b)
{
    int u = ucln(a,b);
    return (a*b)/u;
}
struct Phanso cong(struct Phanso a, struct Phanso b)
{
    struct Phanso tong;
    tong.mau = mc(a.mau,b.mau);
    tong.tu = tong.mau/a.mau*a.tu + tong.mau/b.mau*b.tu;
    tong = rutG(tong);
    return tong;

}
int main()
{
    printf("nhap phan so p, q: \n ");
    struct Phanso p = nhap();
    struct Phanso q = nhap();
    struct Phanso kq = cong(p,q);
    p= rutG(p);
    printf("Phan so Rut gon p: %d/%d",p.tu,p.mau);
    q= rutG(q);
    printf("\nPhan so Rut gon q:%d/%d",q.tu,q.mau);
    printf("\n %d/%d + %d/%d = %d/%d",p.tu,p.mau,q.tu,q.mau,kq.tu,kq.mau);
    return 0;
}