#include <stdio.h>

int main() {
    int a,b,c,n=0;
    while (scanf("%d%d%d", &a, &b, &c)!=EOF) {
        printf("Case %d: ", ++n);
        bool ans=false;
        for (int i=10; i<=100; i++) {
            if (i%3==a && i%5==b && i%7==c) {
                printf("%d\n", i);
                ans=true;
                break;
            }
        }
        if (!ans) printf("No answer\n");
    }
}
