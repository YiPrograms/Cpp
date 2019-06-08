#include <stdio.h>

int main() {
    double sum=0;
    int mother=1;
    bool p=true;
    while(true) {
        double now=1.0/mother;
        if (now<1e-6) break;
        else if (p) {
            sum+=now;
            p=false;
        }  else {
            sum-=now;
            p=true;
        }
        mother+=2;
    }
    printf("%f\n", sum);
}
