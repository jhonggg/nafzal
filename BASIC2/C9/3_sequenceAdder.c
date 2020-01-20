//3_sequenceAdder.c
/**************************************************************************
 * 파일   명칭 : 3_sequenceAdder.c
 * 기       능 : 1+(1+2)+(1+2+3)+...+(1+2+3+4+...+100)까지의 합을 구한다.
 * 함수   명칭 : main
 * 출       력 : 총합
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include <stdio.h>

#define MAX 100

int main(int argc, char* argv[]) {

	unsigned long sum = 0;
	unsigned long temp = 0;
	unsigned long number = 1;

	//2. 수가 MAX보다 작거나 같을 때까지 반복한다.
	while (number <= MAX) {
		//2.2. 이전까지의 합을 구한다.
		for (temp = 1; temp < number; temp++) {
			sum += temp;
		}
		//2.1. 총합을 구한다.
		sum += number;
		//1. 수를 증가한다.
		number++;
	}
	//3. 총합을 출력한다.
	printf("1부터 %d까지의 순차합 : %d\n", MAX, sum);

	//4. 끝낸다.
	return 0;
}
