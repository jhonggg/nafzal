//2_oddEvenAdder.c
/**************************************************************************
 * 파일   명칭 : 2_oddEvenAdder.c
 * 기       능 : 1부터 100까지의 수 중의 홀수 합과 짝수 합을 구한다.
 * 함수   명칭 : main
 * 출       력 : 홀수합, 짝수합
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include <stdio.h>
#define MAX 100
#define DIVIDER 2

int main(int argc, char *argv[]){

    unsigned long oddSum = 0;
    unsigned long evenSum = 0;
    unsigned long number = 1;
    unsigned long remainder = 0;

    //2. 수가 작거나 같을 때까지 반복한다.
    while(number <= MAX){
        //2.1. 수가 홀수인지 짝수인지 판별한다.
        remainder=number%DIVIDER;
        if(remainder != 0){
            //2.1.1. 홀수이면 홀수합을 구한다.
            oddSum+=number;
        }else{
            //2.1.2. 짝수이면 짝수합을 구한다.
            evenSum+=number;
        }
        //1. 수를 증가한다.
        number++;
    }
    //3. 홀수 합과 짝수 합을 출력한다.
    printf("oddSum : %d, evenSum : %d\n", oddSum, evenSum);
    //4. 끝낸다.
    return 0;
}
