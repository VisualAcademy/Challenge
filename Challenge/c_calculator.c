#define _CRT_SECURE_NO_WARNINGS // scanf ���� ���� ���� ������ ���� ���� 
#include <stdio.h>

int main(void)
{
    // �Է� ������ 0���� �ʱ�ȭ
    int x = 0; // ù ��° ����  
    int y = 0; // �� ��° ����  
    char opr; // ������ ��ȣ ����  
    int result = 0; // ���� ���  

    scanf("%d %c %d", &x, &opr, &y); // 3 + 5

    switch (opr)    // opr �����ڸ� ��������
    {
    case '+':       // �����̸�
        result = x + y;     // ���ϰ�
        break;              // ����
    case '-':       // �����̸� 
        result = x - y;     // ���� 
        break;              // ����
    case '*':       // �����̸� 
        result = x * y;     // ���ϰ� 
        break;              // ���� 
    case '/':       // �������̸� 
        result = x / y;     // ������ 
        break;              // ����
    }

    printf("%d\n", result);

    return 0;
}
