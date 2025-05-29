/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            stringstream ss(s);
            unordered_map<string, char> w2p;
            unordered_map<char, string> p2w;

            string word = "";
            int i = 0;
            while (ss >> word) {
                char p = pattern[i];
                if (w2p.count(word) && w2p[word] != p) {
                    return false;
                }
                if (p2w.count(p) && p2w[p] != word) {
                    return false;
                }

                if ((w2p.count(word) && w2p[word] != pattern[i]) ||
                    (p2w.count(pattern[i]) && p2w[pattern[i]] != word)) {
                    return false;
                }

                if (!w2p.count(word) && !p2w.count(pattern[i])) {
                    w2p[word] = pattern[i];
                    p2w[pattern[i]] = word;
                }

                i++;
            }
            if (i != pattern.length()) {
                return false;
            }

            return true;
        }
};
// @lc code=end
