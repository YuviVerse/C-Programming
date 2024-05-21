#include <stdio.h> #define SWAP(a, b, type) { type temp = a; a = b; b = temp; } int main() { int x = 5, y = 10; SWAP(x, y, int); printf("x = %d, y = %d\n", x, y); return 0; }
