class Solution {
public:
    int buildChar(int charCount[26]) {
        int totalCount = 0;
        for (int i = 0; i < 26; i++) {
            if (charCount[i]) {
                totalCount++;
                charCount[i]--;
                totalCount += buildChar(charCount);
                charCount[i]++;
            }
        }
        return totalCount;
    }
    int numTilePossibilities(string tiles) {
        int charCount[26] = {0};
        for (char ch : tiles) {
            charCount[ch - 'A']++;
        }
        return buildChar(charCount);
    }
};
