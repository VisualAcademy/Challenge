// if else ������ ����� ������ ���� ���� ��� ���α׷�
#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("����� ������? ");
	scanf_s("%d", &score);

	printf("\n");
	printf("����: %d��\n", score);

	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	printf("����: %c����\n", grade);

	return 0;
}
