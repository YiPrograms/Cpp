#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n>25) n=25;
    int sum=0;
    for (int i=1; i<=n; i++) {
        int fac=1;
        for (int j=1; j<=i; j++) fac*=j;
        sum+=fac;
    }
    printf("%d\n", sum%1000000);
}
