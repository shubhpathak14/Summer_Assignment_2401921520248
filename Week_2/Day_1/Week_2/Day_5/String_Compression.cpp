class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int index = 0; // write pointer
        int i = 0;     // read pointer

        while (i < n) {

            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            chars[index++] = curr;

            if (count > 1) {
                string cnt = to_string(count);

                for (char ch : cnt) {
                    chars[index++] = ch;
                }
            }
        }

        return index;
    }
};
