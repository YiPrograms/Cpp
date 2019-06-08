#include <stdio.h>

int main() {
    int a,b,c,n=0;
    while (scanf("%d%d%d", &a, &b, &c)!=EOF) {
        if (a==0 && b==0 && c==0) break;
        printf("Case %d: ", ++n);
        printf("%d.", a/b);
        while (c--) {
            a= a%b*10;
            if (c==0 && a%b >= b/2.0) {
                printf("%d", a/b+1);
            } else {
                printf("%d", a/b);
            }
        }
        printf("\n");
    }
}
