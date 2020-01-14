// 2_multipleSeven.c
// [주석 단락]
/*****************************************************************************
 * 파일  명칭 : 2_multipleSeven.c
 * 기      능 : 7의 배수 개수를 구한다.
 * 함수  명칭 : main
 * 출      력 : 7의 배수 개수
 * 입      력 :
 * 작  성  자 : 채 종 홍
 * 작성  일자 : 2020/01/15
*****************************************************************************/
// [전처리기  단락]
#include <stdio.h>

#define MAX 100000
#define MULTIPLE 7

// [함수 선언 단락]
int main(int argc, char *argv[]);

// [함수 정의 단락]
int main(int argc, char *argv[]){
    
    int count = 0;
    int number = 1;
    int remainder;
    //1. 숫자가 최댓값보다 작거나 같으면 반복한다.
    while(number <= MAX){
        //1.2. 나머지를 계산한다.
        remainder = number - (number/MULTIPLE) * MULTIPLE;
        //1.3. 7의 배수를 판별한다.
        if(remainder == 0){
            count += 1;
        }
        //1.1. 숫자를 증가한다.
        number++;
    }
    //2. 개수를 출력한다.
    printf("100000 안에 있는 7의 배수 개수 : %d", count);
    //3. 끝낸다.
    return 0;
}
