// You have n coins and you want to build a staircase with these coins.
//  The staircase consists of k rows where the ith row has exactly i coins. 
//  The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.


int arrangeCoins(int n) {
		long long int i=1;
		long long int j=n;
		int ans = 0;
		while(i<=j){
			long long mid=i+(j-i)/2;
			long long int coins=mid*(mid+1)/2;
			if(n>=coins){
				ans=mid;
				i=mid+1;
			}
			else{
				j=mid-1;
			}
		}
		return ans;
	}