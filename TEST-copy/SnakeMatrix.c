//蛇形矩阵
//用数字标记几种走位
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int c = 1, k = 1;
    int i = 0, j = 0;
    a[0][0] = 1;
    while (k < n * n)
    {
        k++;
        if (c == 1) //下
        {
            i++; //c==1对应的变化
            a[i][j] = k;
            if (j == 0)
                c = 2; //右上
            else if (j == n - 1)
                c = 4; //左下
        }
        else if (c == 2) //右上
        {
            i--;
            j++;
            a[i][j] = k;
            if (i == 0 && j != n - 1)
                c = 3; //右
            else if (j == n - 1)
                c = 1; //下
            else
                c = 2; //右上
        }
        else if (c == 3) //右
        {
            j++;
            a[i][j] = k;
            if (i == 0)
                c = 4;
            else if (i == n - 1)
                c = 2;
        }
        else if (c == 4) //左下
        {
            i++;
            j--;
            a[i][j] = k;
            if (j == 0 && i != n - 1)
                c = 1;
            else if (i == n - 1)
                c = 3;
            else
                c = 4;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
            if (j == n - 1)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}