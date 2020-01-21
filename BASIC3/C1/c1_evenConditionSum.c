//c1_evenConditionSum.c
/**************************************************************************
 * 파일   명칭 : c1_evenConditionSum.c
 * 기       능 : 1+3+5+...식으로 더하여 얼마까지 더하면 1000을 초과하는지 판별
 * 함수   명칭 : main
 * 출       력 : 마지막항, 결과값
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/

#include<stdio.h>

#define ADDER 2
#define TARGET 1000

int main(int argv, char *argc[]){
    
    int last = 0;
    int result = 1;
    int iteration = 1;

    //2. 결과값이 목표값보다 작거나 같으면 반복한다.
    while(result <= TARGET){
        //2.1. 결과값을 구한다.
        result+=ADDER;
        //1. 순환값을 증가한다.
        iteration+=1;
        //2.2. 마지막항을 구한다.
        last=iteration;
    }
    //3. 마지막항과 결과값을 출력한다.
    printf("last : %d, result : %d\n", last, result);
    //4. 끝낸다.
    return 0;
}