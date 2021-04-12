#include <stdio.h>
//定义printf_star函数 
void printf_star()
{
	printf("******************\n");
}

//定义printf_message函数
void printf_message()
{
    printf("How do you do!\n");
}

int main()
{
	//声明printf_star函数 
	void printf_star();
	//声明printf_message函数 
	void printf_message();
	//调用printf_star函数 
	printf_star();
	//调用printf_message函数 
	printf_message();
	//调用printf_star函数
	printf_star();
	return 0; 
}
