//1_oddAdder.c
/**************************************************************************
 * 파일   명칭 : 1_oddAdder.c
 * 기       능 : 1부터 100까지의 홀수 합 계산
 * 함수   명칭 : main
 * 출       력 : 홀수합
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include <stdio.h>

#define MAX 100
#define DIVIDER 2

int main(int argc, char* argv[]){

    unsigned long oddSum = 0;
    unsigned long number = 1;
    unsigned long remainder = 0;

    //2. 수가 MAX보다 작거나 같을 때까지 반복한다.
    while(number <= MAX){
        //2.1. 수가 홀수인지 판단한다.
        remainder=number%DIVIDER;
        if(remainder!=0){
            //2.1.1. 홀수이면 홀수 합을 구한다.
            oddSum+=number;
        }
        //1. 수를 증가한다.
        number++;
    }
    //3. 홀수 합을 출력한다.
    printf("oddSum : %d\n", oddSum);
    //4. 끝낸다.
    return 0;
}
