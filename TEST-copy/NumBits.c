#include<stdio.h>
#include<math.h>
int main(){
    int arr[10]={0};
    //可以直接让10个元素全部是0
    int bit,num,counter;
    
    printf("Please enter the number:\n");
    scanf("%d",&num);
    for (long i=10;;i*=10)
    {
        int b=num/i;
        counter++;
        if(b==0){
            printf("%d: %d bits\n",num,counter);
            break;
        }
    }
    
    int a=fabs(num);
    while(a>0){
        arr[a%10]++;
        //要求的数字对应数组的下标，出现数组元素值就+1
        a/=10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]!=0){
            printf("%d: %d\n",i,arr[i]);
        }
    }
    return 0;
}