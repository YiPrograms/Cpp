#include <stdio.h>

int main() {
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=9; j++) {
            for (int k=1; k<=9; k++) {
                if (100*i+10*j+k == i*i*i+j*j*j+k*k*k) {
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }
}
