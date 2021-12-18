#include <stdio.h>
//Perceber a diferença desse código e do código rev13.c
int func (int x) {
    x = 2;
    return x*2;
}

int main () {
    int x;
    scanf("%d", &x);
    x = func(x);
    printf("%d", x);
    return 0;
}