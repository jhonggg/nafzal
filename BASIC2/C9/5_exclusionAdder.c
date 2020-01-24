//5_exclusionAdder.c
/**************************************************************************
 * 파일   명칭 : 5_exclusionAdder.c
 * 기       능 : 1에서 100까지 수 중에서 3의 배수와 5의 배수를 제외한 
 *               합을 계산한다.
 * 함수   명칭 : main
 * 출       력 : 총합
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include <stdio.h>

#define MAX 10
#define DIVIDER3 3
#define DIVIDER5 5

int main(int argc, char* argv[]) {
	unsigned long sum = 0;
	unsigned long remainder = 0;
	unsigned long number = 1;
	//2. 수가 최댓값보다 작거나 같을 때9까지 반복한다.
	while(number <= MAX){
		//2.1. 3의 배수를 판별한다.
		remainder = number%DIVIDER3;
		if(remainder != 0){
			//2.1.1. 3의 배수가 아니면 5의 배수를 판별한다.
			remainder=number%DIVIDER5;
			if(remainder != 0){
				sum+=number;
			}
		}
		printf("sum : %d\n",sum);
		//1.수를 증가한다.
		number++;
	}
	//3. 합을 출력한다.
	printf("last sum : %d\n",sum);
	//4. 끝낸다.
	return 0;
}