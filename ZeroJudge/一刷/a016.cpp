#include <iostream>

using namespace std;

int main() {
	int nums[9][9];
	while (cin >> nums[0][0]) {
		for (int y=0; y<9; y++) {
			for (int x=0; x<9; x++) {
				if (!(x==0 && y==0)){
					cin >> nums[x][y];
				}
			}
			cin.ignore(1);
		}
		bool pass=true;
		for (int y=0; y<9; y++) {
			int sum=nums[0][y], multi=nums[0][y];
			for (int x=1; x<9; x++) {
				sum += nums[x][y];
				multi *= nums[x][y];
			}
			if (!(sum==45 && multi==362880)) {
				pass=false;
				goto fail;
			}
		}
		for (int x=0; x<9; x++) {
			int sum=nums[x][0], multi=nums[x][0];
			for (int y=1; y<9; y++) {
				sum += nums[x][y];
				multi *= nums[x][y];
			}
			if (!(sum==45 && multi==362880)) {
				pass=false;
				goto fail;
			}
		}
		
		for (int by=0; by<9; by+=3){
			for (int bx=0; bx<9; bx+=3) {
				int sum=nums[bx][by], multi=nums[bx][by];
				for (int y=by; y<by+3; y++) {
					for (int x=bx; x<bx+3; x++) {
						if (!(x==bx && y==by)) {
							sum += nums[x][y];
							multi *= nums[x][y];
						}
					}
				}
				if (!(sum==45 && multi==362880)) {
					pass=false;
					goto fail;
				}
			}
		}
		
		fail:
		if (pass) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
}
