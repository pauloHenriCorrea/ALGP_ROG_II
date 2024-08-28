#include <stdio.h>

void print_addr(int x);

int main() {
    int x = 3;
    printf("%d", x);
    printf("%p", &x);
    print_addr(x);
    return 0;
}

void print_addr(int x) {
    printf("%d\n", x);
    printf("%p\n", &x);

}
