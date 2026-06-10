class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;

        int n = s.size();
        int m = p.size();

        if (m > n) return result;

        vector<int> pFreq(26, 0);
        vector<int> windowFreq(26, 0);

        // Frequency of p and first window
        for (int i = 0; i < m; i++) {
            pFreq[p[i] - 'a']++;
            windowFreq[s[i] - 'a']++;
        }

        if (pFreq == windowFreq) {
            result.push_back(0);
        }

        // Sliding Window
        for (int i = m; i < n; i++) {
            windowFreq[s[i] - 'a']++;         // Add new character
            windowFreq[s[i - m] - 'a']--;     // Remove old character

            if (pFreq == windowFreq) {
                result.push_back(i - m + 1);
            }
        }

        return result;
    }
};
