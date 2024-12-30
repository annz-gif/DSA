const int mod=1e9+7;
int dp[100001];
class Solution {
public:
    static int good(int n, int x0, int x1){
        if ( dp[n]!=-1 ) return dp[n];
        long long ans;
        if (n <= x0)//base case
            ans=1;
        
        if ( n >= x0)
            ans+=good(n-x0, x0, x1);
        
        if ( n >= x1)
            ans+=good(n-x1, x0, x1);
        
        return dp[n]=ans%mod;
    }
    static int countGoodStrings(int low, int high, int zero, int one) {
        if (zero > one) swap(zero, one);
        fill(dp, dp+high+1, -1);
        return (good(high, zero, one)-good(low-1, zero, one)+mod)%mod;
    }
};
