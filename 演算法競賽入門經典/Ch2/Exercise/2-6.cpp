#include <stdio.h>

int main() {
    for (int abc=123; abc<333; abc++) {
        int def=abc*2, ghi=abc*3;
        bool mult= ((abc/100)*(abc%100/10)*(abc%10)*(def/100)*(def%100/10)*(def%10)*(ghi/100)*(ghi%100/10)*(ghi%10)==362880);
        bool sum= (abc/100+abc%100/10+abc%10+def/100+def%100/10+def%10+ghi/100+ghi%100/10+ghi%10==45);
        if (mult && sum) printf("%d %d %d\n", abc, def, ghi);
    }
}
