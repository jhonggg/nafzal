// CountMultiple.java
//[주석 단락]
/*****************************************************************************
 * 파일  명칭 : CountMultiple.java
 * 기      능 : 1에서 100000까지 수들에서 개수를 세고, 7의 배수를 구하고, 7의
                배수와 개수를 출력한다. 그리고 마지막으로 전체 개수를 출력한다.
 * 함수  명칭 : main
 * 출      력 : 7의 배수와 개수
 * 입      력 : 없음
 * 작  성  자 : 채 종 홍
 * 작성  일자 : 2020/01/15
*****************************************************************************/
public class Main{

    public static void main(String args[]){

        final int MAX = 100000;
        final int MULTIPLE = 7;

        int number = 0;
        int count = 0;
        //1. 제목을 출력한다.
        System.out.println("개수                    7의 배수");
        //2. 수가 MAX보다 클 때까지 반복한다.
        do{
            //2.1. 7의 배수를 구한다.
            number += MULTIPLE;
            //2.2. 개수를 세다.
            count+=1;
            //2.3. 개수와 7의 배수를 출력한다.
            System.out.println(count+"                    "+number);
        }while(number <= MAX);
        count--;
        //3. 개수를 출력한다.
        System.out.println("1~100000 사이의 7의 배수의 개수 : "+count);
        //4. 끝내다.


    }

}
