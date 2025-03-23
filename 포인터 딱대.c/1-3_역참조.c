#include <stdio.h>

int main()
{
    int x = 15;
    int *p = &x;

    printf("값을 바꾸기 전 x = %d\n", *p);

    *p = 30;

    printf("값을 바꾼 후 x = %d", *p);

    return 0;

    //역참조란?: 포인터가 가리키는 주소에 접근해서 그 안에 있는 "값"을 꺼내오는 것
}