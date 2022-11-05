#include<stdio.h>
void printFactor(int,int);
int isPrime(int);
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        printFactor(i,1);
    return 0;
}
int isPrime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
void printFactor(int n,int a)
{
	if(n!=1&&a==1)
        printf("%d=",n);
	if(n==1&&a==1)
        printf("1=1\n");
	a++;
	if(isPrime(n))
		printf("%d\n",n);
	else
	{
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0&&isPrime(i))
			{
				printf("%d*",i);
				printFactor(n/i,a);
                break;
			}
		}
	}
}
