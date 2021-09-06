//[?] 공용체(Union): 구조체와 동일한 기능을 구현하나 메모리를 공용(공유)해서 사용
#include <stdio.h>

// 공용체 선언
union Member
{
    char* name;
    int age;
    double weight;
};

int main(void)
{
    // 공용체 형식의 변수 선언
    union Member member;

    member.name = "홍길동";            // 저장
    printf("%s\n", member.name);      // 사용

    member.age = 21;
    printf("%d\n", member.age);

    member.weight = 100.05;
    printf("%.2f\n", member.weight);

    return 0;
}
