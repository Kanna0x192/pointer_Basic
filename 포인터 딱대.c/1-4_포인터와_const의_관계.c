#include <stdio.h>

int main()
{
    const int x = 10; // 상수형 정수, 값 변경 불가능
    int y = 20; 
    int *p = &y;

    // x, y의 초기값 출력
    printf("x의 값 = %d\n", x);
    printf("y의 값 = %d\n", y); 

    // x = 30;  이 줄을 주석 해제하면 컴파일 오류 발생
    
    // y의 값을 직접 변경 (20 → 30)
    y = 30;

    printf("첫번째로 바꾼 y의 값 = %d\n", y);

    // 포인터 p를 통해 y의 값을 다시 변경 (30 → 40)
    *p = 40;
    printf("두번째로 바꾼 y의 값 = %d", *p);

    return 0;
}