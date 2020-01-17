// CountMultiple.c
// [주석 단락]
/*****************************************************************************
 * 파일  명칭 : CountMultiple.c
 * 기      능 : 1에서 100000까지 수들에서 수를 세고, 7의 배수인지 확인하여 7의
                배수이면 개수를 세고, 그때 개수와 7의 배수를 출력한다. 그리고
                마지막으로 전체 개수를 출력한다.
 * 함수  명칭 : main
 * 출      력 : 개수
 * 입      력 : 없음
 * 작  성  자 : 채 종 홍
 * 작성  일자 : 2020/01/16
*****************************************************************************/
// [전처리기 단락]
#include <stdio.h>

#define MAX 100000L
#define MULTIPLE 7

// [함수 선언 단락]
int main(int argc, char *argv[]);

// [함수 정의 단락]
int main(int argc, char *argv[]){

    unsigned long int number = 1;
    unsigned long int count = 0;
    unsigned long int remainder = 0;

    // 1. 제목을 출력한다.
    printf("개수\t\t\t\t7의 배수");
    // 2. 수가 MAX보다 작거나 같은 동안 반복한다.
    while(number <= MAX){
        // 2.2. 7의 배수인지 확인한다.
        remainder = number;
        
        while(remainder >= MULTIPLE){
            remainder -= MULTIPLE;
        }

        if(remainder == 0){
            // 2.2.1. 개수를 세다.
            count+=1;
            // 2.2.2. 개수와 수를 출력한다.
            printf("%d\t\t\t\t%d", count, number);
        }
        // 2.1. 수를 센다.
        number++;
    }
    // 3. 개수를 출력한다.
    printf("1~100000까지의 개수 : %d", count);
    // 4. 끝내다.
    return 0;
}
