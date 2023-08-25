#include <stdio.h>

int main() {
    int sum = 0; 
    
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
        
        printf("i: %d, sum: %d\n", i, sum);
    }

    return 0;
}
