#include <stdio.h>

int combineOperands(int, int);

int main() {
    printf("\nz = %X\n", combineOperands(0x89ABCDEF, 0x76543210));
    return 0;
}

int combineOperands(int x, int y) {
    printf("x = %X; y = %X", x, y);
    printf("\nx & 0xFF = %X", (x & 0xFF));
    printf("\ny & ~0xFF = %X", (y & ~0xFF));
    return (y & ~0xFF) | (x & 0xFF);
}