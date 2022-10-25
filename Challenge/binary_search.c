//[?] ���ĵǾ� �ִ� �����͸� ���� �˻�(�̺� Ž��)�� ����Ͽ� �ݾ� ������ �˻�
#include <stdio.h>
#include <stdbool.h> // bool, true(1), false(0)

// �˻� �˰���(Search Algorithm): �־��� �����Ϳ��� Ư�� ������ ã��
int main(void)
{
    //[1] Input
    int data[] = { 1, 3, 5, 7, 9 }; // ������������ ���ĵǾ��ٰ� ����
    int N = sizeof(data) / sizeof(int); // �ǻ��ڵ�
    int search = 3; // �˻��� ������: scanf() ������ ��������
    bool flag = false; // �÷��� ����: ã���� true ã�����ϸ� false
    int index = -1; // �ε��� ����: ã�� ��ġ

    //[2] Process: ���� �˻�(Binary Search) �˰���: Full Scan -> Index Scan
    int low = 0; // min: ���� �ε���
    int high = N - 1; // max: ���� �ε��� 
    while (low <= high)
    {
        int mid = (low + high) / 2; // �߰� �ε���(mid) ���ϱ� 
        if (data[mid] == search) // �߰� �ε������� ã��
        {
            flag = true; index = mid; break; // ã���� �÷���, �ε��� ���� �� ����
        }
        if (data[mid] > search)
        {
            high = mid - 1; // ã�� �����Ͱ� ������ ���� �������� �̵�
        }
        else
        {
            low = mid + 1; // ã�� �����Ͱ� ũ�� ������ �������� �̵�
        }
    }

    //[3] Output
    if (flag)
    {
        printf("%d��(��) %d��ġ���� ã�ҽ��ϴ�.", search, index);
    }
    else
    {
        printf("ã�� ���߽��ϴ�.");
    }

    return 0;
}
