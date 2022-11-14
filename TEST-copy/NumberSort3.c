//判断B是否为A的连续子序列
#include <stdio.h>
int main()
{
    int a[1000]={0}, b[1000]={0}, c[1000]={0};
    int m = -1, n = -1;
    int i;
    int k = 0, d = 1;
    while (a[m] != -1)
    {
        m++;
        scanf("%d", &a[m]);
    }
    while (b[n] != -1)
    {
        n++;
        scanf("%d", &b[n]);
    }
    for (i = 0; i < m; i++)//找到“开头”
    {
        if (a[i] == b[0])
        {
            c[k] = i;//k表示有几个开头，c[k]表示开头在a[]中的位置
            k++;
        }
    }
    while (k != 0)
    {
        d = 0;
        k--;
        for (i = 0; i < n; i++)
        {
            if (a[c[k] + i] != b[i])//出错一次就d++
                d++;
        }
        if (d == 0)
            break;
    }
    if (d == 0)
        printf("ListB is the sub sequence of ListA.\n");
    else
        printf("ListB is not the sub sequence of ListA.\n");
    return 0;
}