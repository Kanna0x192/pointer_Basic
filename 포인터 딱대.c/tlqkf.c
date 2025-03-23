#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. 기본 포인터
    int a = 10, b = 20;
    int *p = &a;
    printf("기본 포인터:\n");
    printf("a = %d, *p = %d\n", a, *p);

    // 2. 포인터를 통한 값 변경
    *p = 30;
    printf("*p = 30 후, a = %d\n\n", a);

    // 3. 포인터를 함수로 전달 (Call by reference)
    printf("함수에 포인터 전달(swap):\n");
    printf("swap 전: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("swap 후: a = %d, b = %d\n\n", a, b);

    // 4. 배열과 포인터
    int arr[3] = {1, 2, 3};
    int *ap = arr;
    printf("배열과 포인터:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, *(ap + %d) = %d\n", i, arr[i], i, *(ap + i));
    }
    printf("\n");

    // 5. 포인터 배열
    char *languages[] = {"C", "Python", "Java"};
    printf("포인터 배열:\n");
    for (int i = 0; i < 3; i++) {
        printf("languages[%d] = %s\n", i, languages[i]);
    }
    printf("\n");

    // 6. 이중 포인터
    int *ptr = &a;
    int **pp = &ptr;
    printf("이중 포인터:\n");
    printf("a = %d, *ptr = %d, **pp = %d\n\n", a, *ptr, **pp);

    // 7. 동적 메모리 할당
    int *dyn = (int *)malloc(3 * sizeof(int));
    if (dyn == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }
    dyn[0] = 100;
    dyn[1] = 200;
    dyn[2] = 300;
    printf("동적 메모리 할당:\n");
    for (int i = 0; i < 3; i++) {
        printf("dyn[%d] = %d\n", i, dyn[i]);
    }

    free(dyn);  // 동적 메모리 해제
    return 0;
}
