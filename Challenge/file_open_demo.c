#define _CRT_SECURE_NO_WARNINGS // fopen() ���� ��� ���� ������ ���� ����
#include <stdio.h>

FILE* stream;

int main(void)
{
	// ���� ���� �õ�
	stream = fopen("C:\\temp\\C.txt", "r");

	// ���� ���� ��� Ȯ��
	if (stream == NULL)
	{
		printf("������ ���ų�, ������ ���µ��� �ʾҽ��ϴ�.");
	}
	else
	{
		printf("������ �ְ�, ������ ���µǾ����ϴ�.");
	}

	// ���� �ݱ�
	if (stream)
	{
		fclose(stream);
	}

	return 0; 
}
