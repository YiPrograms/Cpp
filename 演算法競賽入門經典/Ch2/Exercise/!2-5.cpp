#include <stdio.h>

int main() {
    int n,m;
    for (int c=1; ; c++) {
        scanf("%d%d", &n, &m);
        if (n==0 && m==0) break;
        else {
            double sum=0;
            for (int i=n; i<=m; i++) {
                if (i>499) {
                    sum=1e-5;
                    break;
                } else {
                    long long k=i*i;
                    sum += 1.0/k;
                }
            }
            printf("Case %d: %.5f\n", c, sum);
        }
    }

}
