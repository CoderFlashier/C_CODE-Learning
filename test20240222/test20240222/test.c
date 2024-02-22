#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>

void inversion(char arr[], int st, int mark)
{
	int i = st;
	int j = (mark - 1);
	while (j >= i)
	{
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		j--;
		i++;
	}
}


int main()
{
	char arr[101] = { 0 };
	fgets(arr, 101, stdin);
	int length = (int)strlen(arr) - 1;
	inversion(arr, 0, length);
	int i = 0;
	int mark = 0;
	for (i = 0; i <= length; i++)
	{
		if (arr[i] == ' ' || arr[i] == '\n')
		{
			inversion(arr, mark, i);
			mark = i + 1;
		}
	}
	printf("%s", arr);
	return 0;
}
//如果用gets()作为输入的话，考虑的标记是'\0'