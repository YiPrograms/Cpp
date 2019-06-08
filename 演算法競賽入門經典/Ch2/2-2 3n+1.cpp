#include <stdio.h>

int main() {
    int n2;
    scanf("%d", &n2);
    long long n=n2;
    int c=0;
    while (n!=1) { /*
        if (n%2) n=3*n+1;
        else n/=2; */
        n%2? n=3*n+1 : n/=2; // if operator // condition ? true : false;
        c++;
    }
    printf("%d\n", c);
}
