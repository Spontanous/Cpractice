/*************************************************************************
	> File Name: 153.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月19日 星期一 19时11分06秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int y, m, q;
    int j, k, h, d;
    scanf("%d", &y);
    scanf("%d", &m);
    scanf("%d", &q);
    if(m == 1){
        m = 13;
        y -= 1;
    }else if(m == 2){
        m = 14;
        y -= 1;
    }else {
        m = m;
        y = y;
    }
    j = y / 100;
    k = y % 100;
    h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    switch(h){
        case 0: d = 6; break;
        case 1: d = 7; break;
        case 2: d = 1; break;
        case 3: d = 2; break;
        case 4: d = 3; break;
        case 5: d = 4; break;
        case 6: d = 5; break;
        break;
    }
    printf("%d\n", d);
    return 0;
}
