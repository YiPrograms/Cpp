#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n)==1) {
        for (int i=0; i<n; i++) {
            for (int j=1; j<=i; j++) printf(" ");
            for (int j=1; j<=2*(n-i)-1; j++) printf("#");
            printf("\n");
        }
    }
}
