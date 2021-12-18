#include <stdio.h>

int func (int x) {
    x = 2;
    return x*2;
}

int main () {
    int x;
    scanf("%d", &x);
    func(x);
    printf("%d", x);
    return 0;
}