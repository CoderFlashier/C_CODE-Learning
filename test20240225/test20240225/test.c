#define _CRT_SECURE_NO_WARNINGS


//���ʲô��
#include <stdio.h>
int main()
{
	char a = -1;
	//char ��VS�����з��ŵ�

	// -1 �����Σ�Ϊ32λ��Ҫ����char��Ҫ�����ض�
	//ԭ��10000000 00000000 00000000 00000001
	//����11111111 11111111 11111111 11111110
	//����11111111 11111111 11111111 11111111
	//�����ض�
	// a -- 11111111
	// %d ��ӡ�з������Σ��������������������з���������λ��1
	// 11111111 11111111 11111111 11111111 -- ����
	// 10000000 00000000 00000000 00000000 -- ȡ��
	// 10000000 00000000 00000000 00000001 -- +1 �õ�ԭ��
	// b�Ĵ�ӡͬ��
	// �ضϺʹ�С���޹أ��൱���Ǵ��ڴ����ó����ݺ��ٷ����ض�

	signed char b = -1;

	unsigned char c = -1;
	//ԭ��10000000 00000000 00000000 00000000
	//����11111111 11111111 11111111 11111110
	//����11111111 11111111 11111111 11111111
	// c -- 11111111
	//�޷�������λ��0
	// 00000000 00000000 00000000 11111111 --- ֱ�Ӿ���ԭ��

	printf("a=%d,b=%d,c=%d", a, b, c);
	//VS�����´�ӡ  a=-1,b=-1,c=255
	return 0;
}