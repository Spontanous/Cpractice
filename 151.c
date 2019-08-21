/*************************************************************************
	> File Name: 151.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 16时03分26秒
 ************************************************************************/

#include<stdio.h>

int main(){
    char i, j, k, l;
    scanf("%c", &i);
    scanf(" ");
    scanf("%c", &j);
    scanf("\n");
    scanf("%c", &k);
    scanf(" ");
    scanf("%c", &l);
    if(i == 'Y' && k == 'H' || i == 'O' && k == 'Y' || i == 'H' && k == 'O'){
        if(i == 'Y' && l == 'O' || i == 'O' && l == 'H' || i == 'H' && l == 'Y'){
        if(j == 'Y' && l == 'H' || j == 'O' && l == 'Y' || j == 'H' && l == 'O'){
        printf("MING\n");
        }else{
            printf("LIHUA\n");
        }
        }else{
            printf("MING\n");
        }
    }else if(i == 'Y' && k == 'O' || i == 'O' && k == 'H' || i == 'H' && l == 'Y'){
        if(j == 'Y' && k == 'H' || j == 'O' && k == 'Y' || j == 'H' && k == 'O'){
            if(j == 'Y' && l == 'O' || j == 'O' && l == 'H' || j == 'H' && l == 'Y'){
                printf("LIHUA\n");
            }else{
                printf("MING\n");
            }
        }else {
            printf("LIHUA\n");
        }
    }else{
        if(j == 'Y' && l == 'H' || j == 'O' && l == 'Y' || j == 'H' && l == 'O'){
            printf("MING\n");
        }else if(j == 'Y' && l == 'O' || j == 'O' && l == 'H' || j == 'H' && l == 'Y'){
            printf("LIHUA\n");
        }else {
            printf("TIE\n");
        }
    }
    return 0;
}
