class Solution {
public:
    bitset<366> need=0;
    int dp[366];
    int f(int d, int d0, vector<int>& costs){
        if (d<d0) return 0;
        if (!need[d]) return f(d-1, d0, costs);
        if (dp[d]!=-1) return dp[d];
        return dp[d]=min({costs[0]+f(d-1, d0, costs),
            costs[1]+f(d-7, d0, costs),
            costs[2]+f(d-30, d0, costs),
        });
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memset(dp, -1, sizeof(dp));
        for (int d: days)
            need[d]=1;

        return f(days.back(), days[0], costs);
    }
};
