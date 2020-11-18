#include <stdio.h>/*预处理器*/
//#include <limits.h>/*整数类型*/
//#include <float.h>/*浮点类型*/

extern int a, b;
extern int c;
extern float f;
int func();
int main() {/*入口主函数*/
	/*变量声明方式1
	  type variable_list;
	
	int	i, j, k;
	char c, ch;
	float f, salary;
	double d;
	*/
	
	/* 变量声明方式2
	   type variable_name = value;
	   int d=3,f=5;
	 */
	/* 定义变量*/
	int a, b;
	int c;
	float f;
	 /*实际初始化*/
	a = 10;
	b = 20;
	c = a + b;
	printf("value of c:%d \n",c);
	f = 70.0 / 3.0;
	printf("value of f :%f \n",f);
	printf("变量");/*输出函数*/
	int i = func();
	//return 0; /*终止后返回一个值*/
}

int func() {
	return 0;
}