/*************************************************************************
	> File Name: zheban.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 19时42分39秒
 ************************************************************************/

#include <stdio.h>
int binary_serach(int l, int r, int arr[], int num){
    
}
int main() {
    int n;
    int k;
    int numbers[1000001];
    int m;
    int i;
    int mn;
    int mid;
    int j;

    // 反复读入数字和查找数字的数量
    while (scanf("%d%d", &n, &k) != EOF) {
        
        // 读入给定的数字
        for (i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);
        }

        for (j = 0; j < k; j++) {
            // 读入待查找的数字，
            scanf("%d", m);

            // 请在下面完成查找读入数字的功能
          mn = (1 + n) /2 ;
            mid = numbers[mn];
            while (mid != m){
                if (m < mid){
                mn = mn / 2;
                mid = numbers[mn];
                    return mid;
                }
                else if (m > mid){
                    mn = (mid + 1 + n);
                    mid = numbers[mn];
                    return mid;
                }
            }
           if (m != j){
               printf("0");
           }
            else {
                printf("%d", mn);
            }
        }

    }
    return 0;
}
