//c1_q2_2xMoney.c
/**************************************************************************
 * 파일   명칭 : c1_q2_2xMoney.c
 * 기       능 : 1000만원을 연이율 7%로 저금하였을 때 몇 년만에 2배가 되는지 계산(복리식)
 * 함수   명칭 : main
 * 출       력 : 연도, 금액, 이자율, 목표금액
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/21
**************************************************************************/
#include<stdio.h>

#define RATE 0.07
#define TIMES 2

int main(int argc, char* argv[]) {

	int year = 0;
	int money = 1000;
	int target = 0;
	float interest = 0.f;

	//1. 목표 금액을 구한다.
	target = money * TIMES;
	//2. 금액이 목표 금액보다 작을 경우 반복한다.
	while (money < target) {
		printf("year : %d, money : %d, interest : %d, target : %d\n", year, money, (int)interest, target);
		//2.1. 연도를 증가한다.
		year++;
		//2.2. 이자율을 구한다.
		interest = (float)money * RATE;
		//2.3. 금액을 구한다.
		money = money + (int)interest;
	}
	//3. 연도와 금액을 출력한다.
	printf("==================================================================\n");
	printf("==================================================================\n");
	printf("year : %d, money : %d, interest : %d, target : %d\n", year, money, (int)interest, target);
	//4. 끝낸다.
	return 0;
}