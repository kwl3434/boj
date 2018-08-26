#include<stdio.h>
int main() {
    char a;
    a = getchar();
 
    while (a != -1) {
        putchar(a);
        a = getchar();
    }
 
    return 0;
}