//[?] ����ü(Union): ����ü�� ������ ����� �����ϳ� �޸𸮸� ����(����)�ؼ� ���
#include <stdio.h>

// ����ü ����
union Member
{
    char* name;
    int age;
    double weight;
};

int main(void)
{
    // ����ü ������ ���� ����
    union Member member;

    member.name = "ȫ�浿";            // ����
    printf("%s\n", member.name);      // ���

    member.age = 21;
    printf("%d\n", member.age);

    member.weight = 100.05;
    printf("%.2f\n", member.weight);

    return 0;
}
