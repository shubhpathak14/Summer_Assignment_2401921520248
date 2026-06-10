[9:49 pm, 10/06/2026] ~ शुभ पाठक: class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m) return false;

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        // Frequency of s1 and first window of s2
        for (int i = 0; i < n; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2) return true;

        // Sliding window
        for (int i = n; i < m; i++) {
            freq2[s2[i] - 'a']++;         // Add new character
            freq2[s2[i - n] - 'a']--;     // Remove old character

            if (freq1 == freq2) {
                return true;
            }
        }

        return false;
    }
};
[9:49 pm, 10/06/2026] ~ शुभ पाठक: class Solution {
