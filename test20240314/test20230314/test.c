#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>//标准库头文件

//声明两个函数，分别对应两个算法
long long func1(int n);
long long func2(int n);

int main()
{
	int n = 0;
	long long sum = 0;
	//利用long long类型存储更大的数据

	//利用字符串储存输入数字，便于进行合法性判断
	//字符串初始化为全0，ASCII中0对应 '\0',表示字符串结束
	char input[10] = { 0 };

	int c = 0;

	//利用死循环进行合法性判断，当输入不合法时，进行重新输入
	while (1)
	{
		printf("Please enter an integer greater than 0(Max = 999999999):___________\b\b\b\b\b\b\b\b\b\b");
		fgets(input, 10, stdin);//输入数字，其中9为长度限制，stdin表示标准输入流（即键盘输入）
		//由fgets输入的字符串末尾必为 '\0'，超长的部分（包括 \n)会留在缓冲区，等待下一次读取

		//合法性判断
		
		//检测输入是否超长
		//当输入超长或是输入9位时，字符串第9位为一个数字，而\n会被留在缓冲区
		if (input[8] == '\n' || input[8] == '\0');//不超长
		else
		{
			int a = 0;
			if ((a = getchar()) != '\n')
				goto clean;//超长，直接跳到本次循环结束部分，提示输入非法并清理缓冲区
		}

		//当检测到非数字字符时，判定为非法
		//同时可以通过判断是否存在小数点来判断是否为浮点数
		int i = 0; 
		for (i = 0; i < 9; i++)
		{
			//第一个括号通过ASCII判断是否为数字，第二个括号判断是否为字符串原有内容或是换行符
			if ((input[i] < 48 || input[i] > 57) && (input[i] != '\n' && input[i] != '\0'))
				goto end;//此时不用清理缓冲区，若清理，则会导致输入错误（需多输入一次）
		}

		//将字符串中的数字转换为整形，atoi函数属于stdlib
		n = atoi(input);

		if (n > 0)//判断是否大于0
			break;
		else
			goto end;

	clean:
		while ((c = getchar()) != '\n');
		//getchar()一次从缓冲区中读取一位数字
		//利用循环清理缓存区，方式上一次输入的数据对下一次输入造成影响
		//当输入合法时，可以不清理

	end:
		printf("Your input is incorrect, please re-enter!\n");

		//重置input
		for (i = 0; i < 9; i++)
			input[i] = 0;
	}
	
	sum = func1(n);
	printf("The result obtained through the first function:%lld\n", sum);
	sum = func2(n);
	printf("The result obtained through the second function:%lld", sum);
	return 0;
}


//算法一：通过循环累加
long long func1(int n)
{
	int i = 0;
	long long sum = 0;
	for (i = 1; i <= n; i++)//i从1开始，每执行一次加1
	{
		sum += i;//进行累加
	}
	return sum;
}


//算法二：
//根据要求可知，可通过首尾相加并乘 n/2 来得到结果
long long func2(int n)
{
	long long sum = 0;
	long long sum_1 = 1 + n;

	if (n % 2 == 1)//当n为奇数，需要加上一个中间值
		sum = ((sum_1) * (n >> 1)) + ((n / 2) + 1);//这里通过右移一位代替除以2
	else
		sum = ((sum_1) * (n >> 1));
	//当数字非常大时，这里直接用n+1会有异常，用变量代替

	return sum;
}