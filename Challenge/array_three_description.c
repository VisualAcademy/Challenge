//[?] 3���� �迭(��, ��, ��)
#include <stdio.h>

int main(void)
{
    //[1] 3���� �迭 ����
    char* names[2][2][2]; // 2*2*2=8

    //[2] 3���� �迭 �ʱ�ȭ
    names[0][0][0] = "C ���";
    names[0][0][1] = "C++";

    names[0][1][0] = "C#";
    names[0][1][1] = "Java";

    names[1][0][0] = "Python";
    names[1][0][1] = "JavaScript";

    names[1][1][0] = "Kotlin";
    names[1][1][1] = "Go";

    //[3] 3���� �迭 ���
    printf("0��\n");
    printf("%20s, %20s\n", names[0][0][0], names[0][0][1]);
    printf("%20s, %20s\n", names[0][1][0], names[0][1][1]);

    printf("\n1��\n");
    printf("%20s, %20s\n", names[1][0][0], names[1][0][1]);
    printf("%20s, %20s\n", names[1][1][0], names[1][1][1]);

    return 0;
}
