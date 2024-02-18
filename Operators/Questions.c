#include <stdio.h>

int main() {
    int x = 5, y = 3, z;
    
    // Block 1: Assignment Operators
    z = x; // Simple assignment
    printf("Block 1: z = %d\n", z);
    
    z += x; // Equivalent to z = z + x
    printf("Block 1: z += x -> z = %d\n", z);
    
    z %= y; // Equivalent to z = z % y
    printf("Block 1: z %%= y -> z = %d\n\n", z);
    
    // Block 2: Combined Arithmetic and Relational Operators
    int a = 10, b = 20, c = 10;
    int result;
    
    result = a + b * c; // Remember the precedence of operators
    printf("Block 2: a + b * c = %d\n", result);
    
    result = (a + b) == (c * a);
    printf("Block 2: (a + b) == (c * a) -> %d\n\n", result);
    
    // Block 3: Logical Operators with Relational Operators
    int m = 7, n = 5;
    
    result = (m > n) && (n + 3 == m);
    printf("Block 3: (m > n) && (n + 3 == m) -> %d\n", result);
    
    result = (m < n) || (m - n > 1);
    printf("Block 3: (m < n) || (m - n > 1) -> %d\n\n", result);
    
    // Block 4: Increment and Decrement Operators
    int p = 5, q = 5;
    
    printf("Block 4: ++p = %d, q++ = %d\n", ++p, q++);
    printf("Block 4: After operations: p = %d, q = %d\n\n", p, q);
    
    // Block 5: Complex Expressions
    int i = 2, j = 4, k = 6;
    
    result = i + j * k / i - j % k;
    printf("Block 5: i + j * k / i - j %% k = %d\n", result);
    
    result = (i < j) && (k > j) || (i + j > k);
    printf("Block 5: (i < j) && (k > j) || (i + j > k) -> %d\n", result);
    
    return 0;
}