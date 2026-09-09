class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num : nums) {
            if (mp.count(num)) {
                return true;  // duplicate found
            }
            mp[num]++;
        }

        return false;
    }
};