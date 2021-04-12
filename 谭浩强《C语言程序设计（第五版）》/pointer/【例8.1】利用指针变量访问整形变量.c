#include <stdio.h>
int main()
{
    //定义整形变量a,b并初始化
    int a=100,b=10;
    //定义指向整形变量的指针变量pointer_1,pointer_2
    int *pointer_1,*pointer_2;
    //把变量a的地址赋给指针变量pointer_1
    pointer_1 = & a;
    //把变量b的地址赋给指针变量pointer_2
    pointer_2 = & b;
    //输出变量a,b的值
    printf("a=%d,b=%d\n",a,b);
    //输出变量a,b的值
    printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2);
    return 0;
}
