//c1_q1_comparePopulation.c
/**************************************************************************
 * 파일   명칭 : c1_q1_comparePopulation.c
 * 기       능 : 두 도시의 인구와 연 증가율을 입력받아 한 도시보다
 *               많아지게 되는 인구와 연도 출력
 * 함수   명칭 : main
 * 출       력 : 인구, 연도
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/20
**************************************************************************/
#include<stdio.h>

int main(int argc, char* argv[]) {

	int h_population, h_pg;
	int k_population, k_pg;
	int base=0, compare=0;
	int year=1996;
	float h_growth, k_growth;

	printf("H시, K시의 인구와 연 증가율로 비교하는 프로그램입니다.\n");
	printf("===========================================================\n");
	
	//1. 데이터를 입력받는다.
	
	//1.1. H시, K시의 인구와 연 증가율을 입력받는다.
	printf("H시의 인구와 연 증가율을 입력하세요.\n");
	printf("H시의 인구 : ");
	scanf_s("%d", &h_population);
	printf("H시의 연 증가율 : ");
	scanf_s("%f", &h_growth);
	printf("\n");
	printf("K시의 인구와 연 증가율을 입력하세요.\n");
	printf("K시의 인구 : ");
	scanf_s("%d", &k_population);
	printf("K시의 연 증가율 : ");
	scanf_s("%f", &k_growth);
	//1.2. 각 시의 연 증가율 대비 인구 증가량을 계산한다.
	h_pg = h_population / (int)h_growth;
	k_pg = k_population / (int)k_growth;

	//2. H시, K시의 인구를 비교한다.
	//2.1. 인구가 작은 쪽이 기준 시 인구로 설정한다.
	//2.2. 인구가 큰 쪽이 비교 시 인구로 설정한다.
	if (h_population > k_population) {
		base = k_population;
		compare = h_population;
		//3. 기준 시 인구가 비교 시 인구보다 작거나 같으면 반복한다.
		while (base <= compare) {
			//3.1. 연도를 증가한다.
			year+=1;
			//3.2. 연도 대비 인구량을 계산한다.
			base += k_pg;
			//printf("k일때, year : %d, base : %d, compare : %d\n", year, base, compare);
			compare += h_pg;
		}
	}
	else if(h_population < k_population){
		base = h_population;
		compare = k_population;
		//3. 기준 시 인구가 비교 시 인구보다 작거나 같으면 반복한다.
		while (base <= compare) {
			//3.1. 연도를 증가한다.
			year+=1;
			//3.2. 연도 대비 인구량을 계산한다.
			printf("h일때, year : %d, base : %d, compare : %d\n", year, base, compare);
			base += h_pg;
			compare += k_pg;
		}
	}
	else {
		printf("인구값이 같습니다.");
	}
	//4. 인구와 연도를 출력한다.
	printf("base : %d, year : %d\n", base, year);
	//5. 끝낸다.
	return 0;
}