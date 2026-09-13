class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for(int i=0; i<strs.size(); i++){
            string original = strs[i];
            string arrengement = original;
            sort(arrengement.begin(), arrengement.end());
            m[arrengement].push_back(original);
        }

        vector<vector<string>> ans;

        for(auto i: m){
            //i representing a record inside map m
            //i.first string hai
            //i.second vector<string>
            ans.push_back(i.second);
        }
        return ans;
    }
};