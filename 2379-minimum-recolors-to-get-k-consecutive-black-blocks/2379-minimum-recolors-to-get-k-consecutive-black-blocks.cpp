class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        // Optimal Approach

        int i = 0;
        int j = 0;
        int w = 0;
        int res = k;

        while (j < blocks.length()) {
            if (blocks[j] == 'W') {
                w++;
            }

            if (j - i + 1 == k) {

                res = min(w, res);

                if (blocks[i] == 'W') {
                    w--;
                }
                i++;
            }

            j++;
        }

        return res;

        // Brute Force

        // int minW = INT_MAX;
        // for (int i = 0; i <= blocks.length() - k; i++) {
        //     int w = 0;

        //     for (int j = i; j - i + 1 <= k; j++) {
        //         if (blocks[j] == 'W') {
        //             w++;
        //         }
        //     }
        //     minW = min(w, minW);
        // }
        // return minW;
    }
};