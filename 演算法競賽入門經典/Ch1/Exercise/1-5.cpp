#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float s=n*95;
    if (s>=300) s*=0.85;
    printf("%.2f", s);
}
