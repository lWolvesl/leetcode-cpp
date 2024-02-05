#include <stdio.h>

int main() {
    int a[] = {1, 7, 13, 2};
    int *p1 = a;
    printf("%d\n", p1);
    int *p2 = p1++;
    printf("%d\n", p2);
    printf("%d\n", *p2);
    *p1 += *p2++;
    printf("%d\n", *p1);
    printf("%d", *p2);
}
