// ����ü(Structure;Struct): �ϳ��� �̸����� ���� �ٸ� ������ ������ ��� ����
#include <stdio.h>

//[!] ����ü ����: ȸ�� ����
struct Member
{
    char* Name; // �̸�
    int Age; // ����
    double Weight; // ������
};

int main(void)
{
    //[1] ����(Variable): �ϳ��� �̸����� �ϳ��� ������ ������ �ϳ��� ������ ���� �׸�
    int num = 10;

    //[2] �迭(Array): �ϳ��� �̸����� ������ ������ ������ �ϳ� �̻� ����
    int data[5] = { 10, 20, 30, 40, 50 };

    //[3] ����ü(Struct) 
    struct Member objMember;	//[a] ����ü ������ ���� ����
    objMember.Name = "ȫ�浿";	//[b] ����ü ������ ��� ����(Member)�� �ʱ�ȭ
    objMember.Age = 21;
    objMember.Weight = 100.05;
    printf("�̸�: %s, ����: %d, ������: %.2f\n",
        objMember.Name, objMember.Age, objMember.Weight); //[c] ����ü ����

    return 0;
}
