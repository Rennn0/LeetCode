// You have n coins and you want to build a staircase with these coins.
//  The staircase consists of k rows where the ith row has exactly i coins. 
//  The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.

int arrangeCoins(int n)
{
    for(long a=2,b=1;true;b+=a, ++a){
        if(n>b)
            continue;
        else if(n==b){
            return a-1;
        }
        else{
            return a-2;
        }
    }
}