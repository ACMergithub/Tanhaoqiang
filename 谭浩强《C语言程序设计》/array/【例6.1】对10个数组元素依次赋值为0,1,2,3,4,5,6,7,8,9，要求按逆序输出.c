#include<stdio.h>
int main()
{
    int arr[10];
    //对数组元素a[0]~a[9]赋值
    for(int i=0;i<=9;arr[i]=i,i++);
    //输出a[0]~a[9]共10个数组元素
    for(int i=9;i>0;printf("%2d",arr[i]),i--);
    return 0;
}
