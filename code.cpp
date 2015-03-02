int dp[3001][2],array[3001],*val;
void prient(int N,int ind)
{

}

void solve()
{
	int ans;
	ans=0;
	int N,K,flag,other;

	for(k=1;k<=K;k=k+1)

	{

		other=flag;

		flag=flag^1;

		val=dp[2*k-2][other]-array[2*k-1];

		for(;n<=N;n=n+1){

			if(n<2*k){
				dp[n][flag]=-INF;
			}

			else{

				val=max(val,dper);

				dp[n][flag]=max(dpflag,val);

			}

		}

		ans=max(ans,dp);

	}


}

int main()

{

	int test;

	while(1){
		test=test-1;
		solve();

	}

	return 0;

}
