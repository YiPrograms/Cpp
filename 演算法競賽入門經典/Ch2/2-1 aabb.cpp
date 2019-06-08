#include <stdio.h>

int main() {
    for (int i=1; ; i++) { // for (int i=32; i<100; i++)
        int x=i*i;
        if (x<1000) continue; //i=32, x=1024
        else if (x>=10000) break; //i=100, x=10000
        else {
            int a=x/100, b=x%100;
            if (a/10==a%10 && b/10==b%10) printf("%d", x);
        }
    }
}
