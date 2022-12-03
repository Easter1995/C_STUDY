//PTA  
//打印菱形，每一行结尾要用\0结束
#include <stdio.h>
#include <stdlib.h>
char **create1(int n);
void create2(char **strPtr, int n);
void fill(char **strPtr, int n);
int main()
{
    int n, i, j;
    char **strPtr;
    scanf("%d", &n);
    strPtr = create1(n * 2 + 1);
    create2(strPtr, n * 2 + 1);
    fill(strPtr, n);
    for (i = 0; i < 2 * n + 1; i++)
        printf("%s\n", strPtr[i]);
    for (i = 0; i < n * 2 + 1; i++)
        free(strPtr[i]);
    free(strPtr);
    return 0;
}
char **create1(int n)
{
    char **a;
    a=malloc(sizeof(char*)*n);
    return a;
}
void create2(char **strPtr, int n)
{
    int i;
    for(i=0;i<n;i++)
        strPtr[i]=malloc(sizeof(char)*(n+1));
}
void fill(char **strPtr, int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n+i+1;j++)
        {
            if(i==0&&j==n)
                strPtr[i][j]='X';
            else if(j==n-i&&i>0)
                strPtr[i][j]='/';
            else if(j==n+i&&i>0)
                strPtr[i][j]='\\';
            else
                strPtr[i][j]=' ';
            if(j==n+i+1)
                strPtr[i][j]='\0';
        }
    }
    for(j=0;j<=2*n+1;j++)
    {
        if(j==0||j==2*n)
            strPtr[n][j]='X';
        else
            strPtr[n][j]=' ';
        if(j==2*n+1)
            strPtr[n][j]='\0';
    }
    for(i=n+1,k=1;i<=2*n;i++,k++)
    {
        for(j=0;j<=2*n-k+1;j++)
        {
            if(i==2*n&&j==n)
                strPtr[i][j]='X';
            else if(j==k&&i<2*n)
                strPtr[i][j]='\\';
            else if(j==2*n-k&&i<2*n)
                strPtr[i][j]='/';
            else
                strPtr[i][j]=' ';
            if(j==2*n-k+1)
                strPtr[i][j]='\0';
        }
    }
}