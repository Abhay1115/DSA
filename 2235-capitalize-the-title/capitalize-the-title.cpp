class Solution {
public:
    string capitalizeTitle(string s) {
        int i = 0;
        while (i < s.length()) {
            int start = i;
            // Find the end of current word
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
            int end = i - 1;
            int len = end - start + 1;

            if (len <= 2) {
                for (int j = start; j <= end; j++) {
                    if (s[j] >= 'A' && s[j] <= 'Z') {
                        s[j] = s[j] + 32;
                    }
                }
            }

            else {
                for (int j = start; j <= end; j++) {
                    if (s[j] >= 'A' && s[j] <= 'Z') {
                        s[j] = s[j] + 32;
                    }
                }
                // Capitalize the first letter
                if (s[start] >= 'a' && s[start] <= 'z') {
                    s[start] = s[start] - 32;
                }
            }
            
            // Move past the space
            if (i < s.length()) {
                i++;
            }
        }
        return s;
    }
};