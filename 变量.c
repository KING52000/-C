#include <stdio.h>/*Ԥ������*/
//#include <limits.h>/*��������*/
//#include <float.h>/*��������*/

extern int a, b;
extern int c;
extern float f;
int func();
int main() {/*���������*/
	/*����������ʽ1
	  type variable_list;
	
	int	i, j, k;
	char c, ch;
	float f, salary;
	double d;
	*/
	
	/* ����������ʽ2
	   type variable_name = value;
	   int d=3,f=5;
	 */
	/* �������*/
	int a, b;
	int c;
	float f;
	 /*ʵ�ʳ�ʼ��*/
	a = 10;
	b = 20;
	c = a + b;
	printf("value of c:%d \n",c);
	f = 70.0 / 3.0;
	printf("value of f :%f \n",f);
	printf("����");/*�������*/
	int i = func();
	//return 0; /*��ֹ�󷵻�һ��ֵ*/
}

int func() {
	return 0;
}