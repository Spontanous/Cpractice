/*************************************************************************
	> File Name: zhishu.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月29日 星期一 13时39分54秒
 ************************************************************************/


#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1;
    double k;
    scanf("%d",&n);
    k = sqrt(n);
    while(++i<=k)
    {
        if(n%i==0)
        {
            printf("NO");
            break;
        }
    }
    if(i>k)
        printf("YES");
    return 0;
}
