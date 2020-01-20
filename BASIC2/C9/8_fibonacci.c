//8_fibonacci.c
/**************************************************************************
 * 파일   명칭 : 8_fibonacci.c
 * 기       능 : 피보나치 수열의 50번째 값을 출력
 * 함수   명칭 : main
 * 출       력 : 50번째값
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/21
**************************************************************************/
#include <stdio.h>

#define MAX 50

int main(int argc, char* argv[]) {

	int iteration = 0;
	int last = 0;
	int temp = 0;
	int longLast = 0;
	//1. 숫자를 증가한다.
	//2. 숫자가 MAX보다 작거나 같으면 종료한다.
	for(iteration=0; iteration<=MAX; iteration++){
		//2.1. 피보나치 수열을 수행한다.
		if(iteration < 2){
			temp=last;
			last+=iteration;
		}else{
			longLast=last+temp;
			temp=last;
			last=longLast;
		}
	}
	//3. 합을 출력한다.
	printf("fibonacci result : %d\n", last);
	//4. 끝낸다.
	return 0;
}