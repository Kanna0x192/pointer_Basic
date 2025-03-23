#include <stdio.h>

int main()
{
    const int a = 10;
    int b = 20;

    const int *pa = &a;
    int *pb = &b;

    *pb = 30;

    // *pa = 5; 상수형 정수로 선언했기 때문에 값 변경이 불가능함

    printf("a의 값 = %d\n", a);
    printf("a의 주소 = %p\n\n", &a);

    printf("b의 값 = %d\n", b);
    printf("b의 주소 = %p", &b);

    return 0;

}