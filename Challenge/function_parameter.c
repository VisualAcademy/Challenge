//[?] �Ű� ����(Parameter)�� �ִ� �Լ� ����� ȣ���ϱ� 
#include <stdio.h>

// �Ű� ������ �ִ� �Լ�
void show_message(char* message)
{
    puts(message); // �Ѿ�� �Ű� ������ ���� ���
}

int main(void)
{
    show_message("�Ű� ����"); // show_message �Լ��� "�Ű� ����" ���ڿ� ����
    show_message("Parameter"); // show_message �Լ��� "Parameter" ���ڿ� ����

    return 0;
}
