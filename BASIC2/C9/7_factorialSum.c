//7_factorialSum.c
/**************************************************************************
 * 파일   명칭 : 7_factorialSum.c
 * 기       능 : 1-(2/3!)+(3/5!)-...-(10/19!)을 계산한다.
 * 함수   명칭 : main
 * 출       력 : 총합
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include <stdio.h>

#define MAX 10
#define DIVIDER 2

int main(int argc, char* argv[]) {

	float sum = 0;
	float fraction = 0;
	unsigned long numerator = 0;
	unsigned long number = 1;
	unsigned long factorial = 1;
	unsigned long remainder = 0;
	unsigned long temp = 0;

	//1. 분자를 증가한다.
	//2. 분자가 MAX보다 작거나 같을 때까지 반복한다.
	for(numerator=1; numerator<=MAX; numerator++){
		//2.1.1. 분모를 구한다.
		number=numerator+temp;
		while(number > 0){
			printf("number: %d\n", number);
			factorial=factorial*number;
			number--;
		}		
		//2.1. 분수 형태를 만든다.
		fraction=(float)numerator/factorial;
		//2.2. 분자가 짝수인지 판별한다.
		remainder=numerator%DIVIDER;
		if(remainder == 0){
			//2.2.1. 짝수이면 합을 뺀다.
			sum-=fraction;
		}else{
			//2.2.2. 짝수가 아니면 합을 더한다.
			sum+=fraction;
		}
		temp=numerator;
		factorial=1;
	}
	//3. 합을 출력한다.
	printf("factorialSum : %f\n", sum);
	//4. 끝낸다.
	return 0;
}