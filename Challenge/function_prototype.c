//#include <stdio.h>
//
//int main(void)
//{
//    say();
//    return 0;
//}
//
//void say(void)
//{
//    printf("안녕하세요.\n");
//}
#include <stdio.h>

//[1] 함수 원형 선언
void say();

int main(void)
{
    say();
    return 0;
}

//[2] 함수 본문 정의
void say(void)
{
    printf("안녕하세요.\n");
}
