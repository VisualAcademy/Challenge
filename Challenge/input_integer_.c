// input_integer_.c 
//[?] ǥ�� �Է��� �ַܼκ��� ���� �ϳ��� �Է� �޾� ����ϴ� ���α׷� 
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    int num; // ���� Ÿ���� ���� �غ� 
    int _; // ����(Discards): scanf �Լ��� �ᱣ���� ���� �ӽ� ����

    printf("���� �ϳ��� �Է��ϼ���: "); // ������Ʈ(prompt, �ȳ� �޽���) ��� 
    _ = scanf("%d", &num); // ǥ�� �Է��� ���ؼ� �ϳ��� ������ �޾� num ������ ����

    printf("%d\n", num); // num ������ ���� ǥ�� ����� ���ؼ� ��� 

    return 0;
}
