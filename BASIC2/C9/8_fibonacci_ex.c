#include <stdio.h>
 
int fibonacci1(int n) {
    if(n < 2) return n;
    else {
        int i, tmp, cur = 1, last = 0;
        for (i = 2; i <= n; i++) {
            tmp = cur;
            cur += last;
            last = tmp;
        }
        return cur;
    }
}
 
int fibonacci2(int n) {
    if(n < 2) return n;
    else {
        int i, tmp, cur = 1, last = 0;
        for (i = 2; i <= n; i++) {
            tmp = last;
            last = cur;
            cur += tmp;
        }
        return cur;
    }
}
 
int main(void) {
    int num = 50;
    int result1, result2;
    
    result1 = fibonacci1(num);
    result2 = fibonacci2(num);
    printf("%d번째 fibonacci1 수열 값: %d\n", num, result1);
    printf("%d번째 fibonacci2 수열 값: %d", num, result2);
    return 0;
}