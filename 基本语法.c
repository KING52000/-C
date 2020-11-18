#include <stdio.h>
/*预处理器*/

//int main() {/*主函数；入口*/
//	printf("Hello world! \n"); /*文本编译输出函数*/
//	return 0;/*终止main主函数后返回0*/
//}

/*
	c语言令牌
	C程序有各种令牌组成，令牌可以是关键字，标识符，字符串，或者是一个符号例如下面的五个令牌：
	printf("Hello world! \n");

	printf
	(
	"Hello world! \n"
	)
	; 分号为语句结束符，就是说每个语句结束必须以分号结束，表面一个程序逻辑实体的结束
	比如下列是两个不同的语句：
	printf("hello world !");
	return 0;
	

	注释
	c语言的注释有两种， 一种是单行注释//
	另一种是我们目前使用的多行注释/*这种注释可以多行也可以单行
*/