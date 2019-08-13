/*************************************************************************
	> File Name: 7.25.2.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 15时56分09秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int a;
    scanf("%d",&a);
    switch(a){
        case 1:  printf("one"); 
        case 2:  printf("two");
        case 3:  printf("three");break;
        default: printf("error\n");break;
    }
    return 0;
}
