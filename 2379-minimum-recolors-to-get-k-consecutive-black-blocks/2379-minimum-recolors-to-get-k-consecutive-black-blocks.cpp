class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int minW = INT_MAX;
        for (int i = 0; i <= blocks.length() - k; i++) {
            int w = 0;

            for (int j = i; j - i + 1 <= k; j++) {
                if (blocks[j] == 'W') {
                    w++;
                }
            }
            minW = min(w, minW);
        }
        return minW;
    }
};