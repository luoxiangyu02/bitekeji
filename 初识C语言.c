//找出一组数中的单身狗 
//暴力的一般解法 
/*#include<stdio.h>
int main(void)
{
	int a[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int sz = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = 0;
	
	for (i = 0; i < sz; i++)
	{
		int count=0;
		for (j = 0; j < sz; j++)
		{
			
			if (a[i] == a[j])
				count++;
		}
		if (count == 1)
		{
			printf("%d", a[i]);
			break;
		}
			
	}
	return 0;
}*/
//神奇的异或解法 
#include<stdio.h>
int main(void)
{
	int a[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int sz = sizeof(a) / sizeof(a[0]);
	int i=0;
	int n=0;
	for(i=0;i<sz;i++)
	{
		n^=a[i];
	}
	printf("%d",n);
	return 0;
 } 
 //-----------------------------------------华丽的分割线-----------------------------------------------------------
 //#include<stdio.h>
//int main(void)
//{
//	//交换两个数的值，不使用第三个变量
//	int a = 5;//101
//
//	int b = 3;//011
//	printf("%d %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = b^a;
//
//	printf("%d %d\n", a, b);
//	a = 5;
//	b = 3;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("%d %d\n", a,b);
//	return 0;
//}
//统计一个数在二进制保存中1的出现次数
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	int i = 0;    
//	//用按位与
//	//while (n!=0)
//	//{
//	//	if ((n & 1)==1) i++;
//	//	n = n >> 1;
//	//}
//	//算术位移是最坐边补的是符号位
//	int j = 0;
//	for (j = 0; j < 32; j++)
//	{
//		if (((n >> j) & 1) == 1) i++;
//	}
//	printf("%d", i);
//	return 0;
//}
//!的应用
/*#include<stdio.h>
int main(void)
{
	int a = 100;
	printf("%d", !a);//0 
	int b = 0;
	printf("\n%d", !b);//1 
	return 0;
}*/ 
//sizeof的应用
//#include<stdio.h>
//int main(void)
//{
//	short s = 0;
//	int a = 10;
//	printf("%d", sizeof(s = a + 5));
//	printf("%d", s);
//	return 0;
//}
/* 
#include<stdio.h>
int main()
{
	int a = -2;
	printf("%d", ~a);
	return 0;
}*/ 
/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int m = ~n;
	int h = m | n;
	printf("%d", h);
	return 0; 
} */ 
#include<stdio.h>
int main(void)
{
	int n=-1;
	int m=n>>5;
	printf("%d",m); 
	return 0;
 } 
 //define定义的宏
#define Max(x,y) (x>y?x:y)
#include<stdio.h>
int main(void)
{
	int a = 80;
	int b = 20;
	int c = Max(a, b);
	printf("%d", c);
	return 0;
}
//使用外部调用的函数---------------------------源1
//#include<stdio.h>
//int main(void)
//{
//	int a = 100;
//	int b = 20;
//	extern int sub(int, int);
//	int p = sub(a, b);
//	printf("%d", p);
//	return 0;
//}
//定义一个函数---------------------------------源2
static int sub(int x, int y)
{
	int q = x - y;
	return q;

}
//使用外部定义的变量------------------------源1
#include<stdio.h>
int main(void)
{
	extern int gg;
	printf("%d", gg);
	return 0;
}
//void text()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//int main(void)
//{
//	int i = 0;
//	while (i < 5)
//	{
//		text();
//		i++;
//	}
//	extern int gg;
//
//
//	return 0;
//}
//源2
int main(void)
{
	extern int gg;
	printf("%d", gg);
	return 0;
}
