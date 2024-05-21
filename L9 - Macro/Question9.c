#include <stdio.h> #define PRINT_VAR(var) printf(#var " = %d\n", var) int main() { int x = 5; PRINT_VAR(x); return 0; }
