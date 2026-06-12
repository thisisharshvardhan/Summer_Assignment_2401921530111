class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> target(26, 0), window(26, 0);
        vector<int> ans;

        for (char c : p) target[c - 'a']++;

        int k = p.size();

        for (int i = 0; i < s.size(); i++) {
            window[s[i] - 'a']++;

            if (i >= k) window[s[i - k] - 'a']--;

            if (window == target) ans.push_back(i - k + 1);
        }

        return ans;
    }
};