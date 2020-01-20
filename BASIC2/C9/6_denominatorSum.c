//6_denominatorSum.c
/**************************************************************************
 * 파일   명칭 : 6_denominatorSum.c
 * 기       능 : 1-(1/2)+(1/3)-...+(1/99)-(1/100)을 계산한다.
 * 함수   명칭 : main
 * 출       력 : 총합
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include <stdio.h>

#define MAX 5
#define NUMERATOR 1
#define DIVIDER 2

int main(int argc, char* argv[]) {

	float sum = 0;
	float temp = 0;
	unsigned long remainder = 0;
	unsigned long number = 1;

	//2.분모가 최댓값보다  작거나 같을 때까지 반복한다.
	for(number=1; number<=MAX; number++){
		//2.1. 분수 형태를 만든다.
		temp = (float)NUMERATOR/number;
		//2.2. 분모가 짝수인지 판별한다.
		remainder=number%DIVIDER;
		if(remainder == 0){
			//2.2.1. 분모가 짝수이면 합에서 분수를 뺀다.
			sum-=temp;
		}else{
			//2.2.2. 짝수가 아니면 합에서 분수를 더한다.
			sum+=temp;
		}
		//1.분모를 증가한다.
	}
	//3.합을 출력한다.
	printf("1-(1/2)+(1/3)-...+(1/%d)-(1/%d) : %f", MAX-1, MAX, sum);
	//4.끝낸다.
	return 0;
}