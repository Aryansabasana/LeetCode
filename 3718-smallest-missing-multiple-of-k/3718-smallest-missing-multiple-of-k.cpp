class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st;

        // Store all numbers
        for (int x : nums) {
            st.insert(x);
        }

        // Check k, 2k, 3k, 4k...
        for (int i = 1; ; i++) {
            int multiple = i * k;

            if (st.find(multiple) == st.end()) {
                return multiple;
            }
        }
    }
};