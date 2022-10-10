//[?] 특정 수를 입력 받아서, 소수인지 아닌지 판별하는 프로그램
// - 5는 소수: 1과 5만을 약수로 가짐
// - 6은 소수가 아님: 1과 6만이 아닌 추가로 2와 3을 약수로 가짐 
// - 2부터 해당 수까지 나머지값을 구해서 나머지값이 0일때 나눈 수가 해당 수라면 소수 
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    /// <summary>
    /// 소수(Prime Number): 자연수 중에서 1과 자기 자신만을 약수로 가지는 자연수
    /// </summary>
    //[1] Input
    int i;
    int number;
    scanf("%d", &number);

    //[2] Process: Prime Number(2부터 n까지 나누어 떨어지는 수가 발생할 때가지 반복)
    i = 1;
    do
    {
        i = i + 1; // 2부터 n까지 비교
        printf("%d %% %d = %d\n", number, i, number % i);
    } while (number % i != 0); // 소수는 number로만 나누어 떨어짐

    //[3] Output
    if (number == i)
    {
        printf("소수임\n");
    }
    else
    {
        printf("소수 아님\n");
    }

    return 0;
}
