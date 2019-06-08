#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
ll dp[2][25][15][15][15][2],p[10010];
int main(){
	int n,k,s;
	scanf("%d%d%d",&n,&k,&s);
	for(int i=1;i<=n;i++)
		scanf("%lld",p+i);
	if(k+k-1>n) puts("impossible"),exit(0);
	memset(dp,0x8f,sizeof dp);
	dp[0][0][0][0][0][0]=0;
	for(int a=1;a<=n;a++){
		int cid=a&1,pid=(a-1)&1;
		for(int b=0;b<=k;b++){
			for(int c=0;c<=s;c++){
				for(int d=0;d<=c;d++){
					for(int e=0;e<=c-d;e++){
						// extend by take
						dp[cid][b][c][d][e][1]=dp[pid][b][c][d][e][1]+p[a];
						// extend by dic
						dp[cid][b][c][d][e][1]=max(dp[cid][b][c][d][e][1],dp[pid][b][c][d+1][e][1]);
						// extend in future
						if(c && e) dp[cid][b][c][d][e][1]=max(dp[cid][b][c][d][e][1],dp[pid][b][c-1][d][e-1][1]);
						// just do nothing
						dp[cid][b][c][d][e][0]=max(dp[cid][b][c][d][e][0],max(dp[pid][b][c][d][e][1],dp[pid][b][c][d][e][0]));
						// put to dic
						if(c && d) dp[cid][b][c][d][e][0]=max(dp[cid][b][c][d][e][0],max(dp[pid][b][c-1][d-1][e][1],dp[pid][b][c-1][d-1][e][0])+p[a]);
						// now is future
						dp[cid][b][c][d][e][0]=max(dp[cid][b][c][d][e][0],max(dp[pid][b][c][d][e+1][0],dp[pid][b][c][d][e+1][1])+p[a]);
						// new by take
						if(b) dp[cid][b][c][d][e][1]=max(dp[cid][b][c][d][e][1],dp[pid][b-1][c][d][e][0]+p[a]);
						// new by dic
						if(b) dp[cid][b][c][d][e][1]=max(dp[cid][b][c][d][e][1],dp[pid][b-1][c][d+1][e][0]);
						// new by future
						if(b && c && e) dp[cid][b][c][d][e][1]=max(dp[cid][b][c][d][e][1],dp[pid][b-1][c-1][d][e-1][0]);
						 printf("de-0: %d %d %d %d %d %lld\n",a,b,c,d,e,dp[cid][b][c][d][e][0]);
						 printf("de-1: %d %d %d %d %d %lld\n",a,b,c,d,e,dp[cid][b][c][d][e][1]);
					}
				}
			}
		}
	}
	ll ans=-(1ll<<62);
	for(int c=0;c<=s;c++){
		ans=max(ans,max(dp[n&1][k][c][0][0][0],dp[n&1][k][c][0][0][1]));
	}
	printf("%lld\n",ans);
	return 0;
}
