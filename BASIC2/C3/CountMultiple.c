// CountMultiple.c
// [주석 단락]
/*****************************************************************************
 * 파일  명칭 : CountMultiple.c
 * 기      능 : 1에서 100까지 합하여 총합 출력
 * 함수  명칭 : main
 * 출      력 : 총합
 * 입      력 :
 * 작  성  자 : 채 종 홍
 * 작성  일자 : 2020/01/15
*****************************************************************************/
// [전처리기 단락]
#include <stdio.h>

#define MAX 100000
#define MULTIPLE 7

// [함수 선언 단락]
int main(int argc, char* argv[]);

// [함수 정의 단락]
int main(int argc, char* argv[]){
    
    unsigned long int count = 0;
    unsigned long int number = 0;

    // 1. 제목을 출력한다.
    printf("개수                        7의 배수");
    printf("==================================");

    // 2. 수가 MAX보다 클 때까지 반복한다.
    do
    {
        // 2.1. 7의 배수를 구한다.
        number += MULTIPLE;
        // 2.2. 개수를 세다.
        count++;
        // 2.3. 개수와 7의 배수를 출력한다.
        printf("%d                        %d", count, number);
        
    } while (number > MAX);
    count=count-1;
    // 3. 개수를 출력한다.
    printf("7의 배수의 총 개수 : %d", count);
    // 4. 끝내다.
    return 0;
}