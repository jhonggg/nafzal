//4_onlyminusEven.c
/**************************************************************************
 * 파일   명칭 : 4_onlyminusEven.c
 * 기       능 : 1-2+3-4+...+99-100를 계산한다.
 * 함수   명칭 : main
 * 출       력 : 총합
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include <stdio.h>

#define MAX 100
#define DIVIDER 2

int main(int argc, char* argv[]) {

	unsigned long sum = 0;
	unsigned long remainder = 0;
	unsigned long number = 1;

    //2. 수가 MAX보다 작거나 같을 때까지 반복한다.
    while(number <= MAX){
        //2.1. 짝수를 판별한다.
        remainder=number%DIVIDER;
        if(remainder==0){
            //2.1.1. 짝수이면 합을 뺀다.
            sum-=number;
        }else{
            //2.1.2. 짝수가 아니면 합을 더한다.
            sum+=number;
        }
        //1. 수를 증가한다.
        number++;
    }
    //3. 합을 출력한다.
    printf("1부터 %d까지의 합 : %d", sum);
    //4. 끝낸다.
	return 0;
}
