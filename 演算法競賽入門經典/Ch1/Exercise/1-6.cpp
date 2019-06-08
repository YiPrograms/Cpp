#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if (b>a) {
        int k=a;
        a=b;
        b=k;
    }
    if (c>a) {
        int k=a;
        a=c;
        c=k;
    }
    if (b+c<=a) printf("not a triangle");
    else if (a*a==b*b+c*c) printf("yes");
    else printf("no");
}
