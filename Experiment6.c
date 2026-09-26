#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 2;
    int res1, res2;

    res1 = a + b * c;
    res2 = (a + b) * c;

    printf("a = %d, b = %d, c =%d\n",a,b,c);
    printf("a + b * c = %d\n", res1);
    printf("(a + b) * c = %d\n", res2);

    int x = 5, y = 10, z = 15;
    int result = x < y && y < z;

    printf("x < y && y < z = %d\n", result);

    return 0;
}
