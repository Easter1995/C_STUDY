//用递归实现sinx的泰勒展开
#include<stdio.h>
#include<math.h>
double item_an(double,int);
double taylor(double,int);
double sum(int);
int main()
{
    int n;
    double x;
    double sin_s,an;

    scanf("%lf",&x);
    //从第一项开始算
    sin_s=taylor(x,1);
    printf("sin(%lf)=%lf\n",x,sin_s);
    return 0;
}
double taylor(double x,int n)
{
    double p;
    p=item_an(x,n);
    //控制精度
    if(fabs(p)<1e-8)
        return p;
    else
    {
        //如果精度不够，p就等于第n项之后的一项
        //用p来储存最后的加和
        p=p+taylor(x,n+1);
        return p;
    }
}
double item_an(double x,int n)
{
    return (pow(-1,n+1)*pow(x,2*n-1))/sum(2*n-1);
}
double sum(int x)
{
    if(x==1)
        return x;
    return x*sum(x-1);
}