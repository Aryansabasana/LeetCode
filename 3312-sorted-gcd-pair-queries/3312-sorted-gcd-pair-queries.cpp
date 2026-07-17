class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        vector<long long> freq(mx + 1, 0);

        for (int x : nums)
            freq[x]++;

        vector<long long> divisible(mx + 1, 0);

        for (int d = 1; d <= mx; d++) {
            for (int m = d; m <= mx; m += d)
                divisible[d] += freq[m];
        }

        vector<long long> exact(mx + 1, 0);

        for (int d = mx; d >= 1; d--) {

            exact[d] = divisible[d] * (divisible[d] - 1) / 2;

            for (int m = d + d; m <= mx; m += d)
                exact[d] -= exact[m];
        }

        vector<long long> prefix(mx + 1, 0);

        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + exact[i];

        vector<int> ans;

        for (long long q : queries) {

            int g = lower_bound(prefix.begin(), prefix.end(), q + 1) - prefix.begin();

            ans.push_back(g);
        }

        return ans;
    }
};