#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}
//死循环


//#include<stdlib.h>
//int main()
//{
//	char arr[20] = { 0 };
//	printf("设备将在60秒后关机，输入“取消”取消关机\n=>");
//	system("shutdown -s -t 60");
//	
//again:
//	scanf("%s", arr);
//
//	if (strcmp(arr, "取消") == 0)
//	{
//		system("shutdown -a");
//		Sleep(500);
//		printf("取消关机");
//		Sleep(1000);
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}
//输入取消，取消关机



//void exchange(int x,int y)
//{
//	int z = 0;//此处为形式参数
//	z = x;//查地址可知x和a地址不同，此处的xy和ab时单独的变量
//	x = y;
//	y = z;
//}
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不影响实参
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//此处的ab叫实参
//	printf("交换前%d %d", a, b);
//	exchange(a, b);
//	printf("交换后%d %d",a, b);
//	return 0;
//}



void exchange(int *px, int *py)//接收a、b的地址,远程找到并操作a、b，建立联系
{
	int z = *px;//此处并不是交换地址，而是把地址所指向的值交换了
	*px = *py;
	*py = z;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前%d %d", a, b);
	exchange(&a, &b);
	printf("交换后%d %d", a, b);
	return 0;
}