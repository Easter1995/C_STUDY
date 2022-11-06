//二进制转化为十进制的函数
int convert(int n)
{
    if(n==0||n==1)
        return n;
    else
        return n%10+convert(n/10)*2;
}

//将非负十进制整数n转换成二进制形式，并返回该二进制数的位数
int countBinary(int n)
{
	if(n!=0&&n!=1)
        return countBinary((int)(n/2))+1;
	else
        return 1;
}