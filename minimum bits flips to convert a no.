class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorResult = start ^ goal;
        int ans = 0;
        
        
        while (xorResult > 0) {
            ans += xorResult & 1; 
            xorResult >>= 1;
        }
        
        return ans;
    }
};
