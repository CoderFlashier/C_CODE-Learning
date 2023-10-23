#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////声明一个名为person的结构体
//struct prson
//{
//	char name[20];
//	char tele[20];
//	char sex[10];
//	int height;
//}p1, p2;//这里的分号不能去掉，分号前面可加可不加变量名（如果有多个对象，则可以在这里加）
////如果需要有多个对象，则需要加对象名
////这里p1和p2是使用person结构体创建的变量，且为全局变量，因此不推荐在此创建





struct person
{
	char name[20];
	char tele[20];
	char sex[10];
	int height;
}; 

struct student
{
	struct person p;//这里可以不加结构名，如果加了(比如p3），后面访问的时候要带上结构名
	int No;
	float grade;
};

//接收传过来的地址
void print2(struct person* p)
{
	printf("%s %s %s %d", p->name, p->tele, p->sex, p->height);
}

int main()
{
	struct person p1 = { "zhangsan","123456789123","male",180 };
	//结构体变量的创建和初始化
	struct student p2 = { {"lisi","987654321123","female",170},02,200.0 };
	//里面的大括号可以去掉
	//含有结构体的结构体变量的创建和初始化
	//注意：浮点数在内存中不能精确保存，可能会有误差

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
	printf("%s %s %s %d %d %.2f\n", p2.p.name, p2.p.tele, p2.p.sex, p2.p.height, p2.No, p2.grade);
	//如果上面在引用另一个结构体的时候写了变量名(比如p3），这里要加上，如p2.p3.name

	print2(&p1);
	return 0;
}