#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;//向内存申请4个字节的空间储存10
//	//&a;//取a的地址
//	printf("%p\n", &a);//打印a的地址
//	int* p = &a;//此时p为指针变量，储存a的地址
//	
//	printf("%d\n", a);//输出10
//	*p = 11;//p中储存了a的地址，可通过p找到a
//	printf("%d", a);//输出11
//	
//	return 0;
//}


//int main()
//{
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(long long*));
//	printf("%zu\n", sizeof(char*));
//	return 0;
//}//输出值在x86环境下均为4，在x64环境下为8


//struct human
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];//结构体的成员
//};//这个分号不能丢
//
//void print(struct human* a)
//{
//		printf("%s %d %s %s\n",(*a).name,(*a).age,(*a).sex,(*a).tele);
//		
//		printf("%s %d %s %s", a->name, a->age, a->sex, a->tele);
//}
//
//int main()
//{
//	struct human r = { "ZhangSan",18,"male","114514" };//创建类型并初始化
//	printf("%s %d %s %s\n", r.name, r.age, r.sex, r.tele);//搞对顺序，不会自动匹配
//	
//	print(&r); //结合地址+函数,相当麻烦
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d", &a, &b);
//
//	c = a / b; //得到商
//	d = a % b;//得到余数
//	
//	printf("%d % d", c, d);
//	return 0;
//}



struct human
{
	char name[20];
	char sex[6];
	int age;
	int tele;
};

int main()
{
	struct human a = { "ZhangSan","male",18,114514 };
	printf("name sex age tele\n");
	
	scanf("%s %s %d %d", &a.name, &a.sex, &a.age, &a.tele);
	
	printf("%s %s %d %d", a.name, a.sex, a.age, a.tele);
	return 0;
}