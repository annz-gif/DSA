class Solution {
    public:
        using ll = long long;
    
        ll countValidNumbers(int idx, int tight, string &numStr, string &suffix, int limit, int numLength, vector<vector<ll>>& dp) {
            if (idx == numLength) return 1;
            if (dp[idx][tight] != -1) return dp[idx][tight];
    
            ll lowerBound = 0 , count = 0;
            int upperBound = tight ? min(limit, numStr[idx] - '0') : limit;
    
            int suffixStartIdx = numLength - suffix.size();
            if (suffixStartIdx <= idx) {
                lowerBound = suffix[idx - suffixStartIdx] - '0';
                upperBound = min(upperBound, suffix[idx - suffixStartIdx] - '0');
            }
    
            for (int i = lowerBound; i <= upperBound; i++) 
            count += countValidNumbers(idx + 1, tight && (i == numStr[idx] - '0'), numStr, suffix, limit, numLength, dp);
            
            return dp[idx][tight] = count;
        }
    
        ll numberOfPowerfulInt(ll start, ll finish, int limit, string s) {
            string upperLimit = to_string(finish);
            string lowerLimit = to_string(start - 1);
            int upperLength = upperLimit.size() , lowerLength = lowerLimit.size();
    
            ll upperCount = 0, lowerCount = 0;
            vector<vector<ll>> dp(17, vector<ll>(2, -1));
    
            if (s.size() <= upperLength) 
                upperCount = countValidNumbers(0, 1, upperLimit, s, limit, upperLength, dp);
    
            dp.assign(17, vector<ll>(2, -1));
            if (s.size() <= lowerLength) 
                lowerCount = countValidNumbers(0, 1, lowerLimit, s, limit, lowerLength, dp);
    
            return upperCount - lowerCount;
        }
    };
