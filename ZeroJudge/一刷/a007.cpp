#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
	int num;
	while (scanf("%d",&num)) {
		bool ans = true;
		if (num%2 != 0) {
			for (int x=3; x<(float)sqrt(num); x+=2) {
				if (num%x == 0) {
					ans = false;
					break;
				}
			}
		} else {
			ans=false;
		}
		if (ans) {
			printf("質數\n");
		} else {
			printf("非質數\n");
		}
	}
}
