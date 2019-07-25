/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2019年07月23日 星期二 17时51分59秒
 ************************************************************************/

#include<stdio.h>
#include <stdio.h>
#define swap(a, b) { \
    __typeof(a) temp = a;\
    a = b, b = temp; \
}

int main() {
    printf("%c\n", 97);
    int n;
    scanf("%d", &n);
    printf("%04d\n", n);
    char str[100], buff[100], *p = str, *q = buff;
    sprintf(str, "%d.%d.%d.%d", 192,168,1,10);
    printf("str=%s\n", str);
    if (n & 1) {
        sprintf(q, "(%s)", p);
        swap(p, q);
    }
    if (n & 2) {
        sprintf(q, "[%s]", p);
        swap(p, q);
    }
    if (n & 4) {
        sprintf(q, "{%s}", p);
        swap(p, q);
    }
    FILE *fout = fopen("output", "w");
    fprintf(stdout, "stdout = %s\n", p);
    fprintf(stderr, "stderr = %s\n", p);
    return 0;
}
