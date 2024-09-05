class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int nNumsSum = 0;
        for(int i : rolls) nNumsSum += i;

        int m=rolls.size();
        int totalLength = n+m;

        int mNumsSum = mean*totalLength - nNumsSum;     // formula to Find mean -> (nNumsSum + X) / (n+m) = mean
                                                        // So, X = mean * (n+m) - nNumsSum;

        if(n*6 < mNumsSum || mNumsSum<n) return {};     // for (n*6 < mNumsSum) see Constraints
        
        int rem = mNumsSum % n;
        int q   = mNumsSum / n;

        vector<int> res(n,q);
        for(int i=1; i<=rem; i++)
            res[i]++;

        return res;
    }
};
