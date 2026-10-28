class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> groups;
        for (int i = 0; i < strs.size(); i++) {
            string sortedString = strs[i];
            sort(sortedString.begin(), sortedString.end());
            groups[sortedString].push_back(strs[i]);
        }
        for (auto itr: groups) {
            anagrams.push_back(itr.second);
        }
        return anagrams;
    }
};
