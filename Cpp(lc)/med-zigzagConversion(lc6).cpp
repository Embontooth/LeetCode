class Solution {
public:
    string convert(string s, int numRows) {
        int inc = (numRows * 2) - 2;
        vector<char> ch(s.length());
        int j = 0;
        
        if (numRows == 1) {
            return s;
        }
        
        for (int i = 0; i < numRows; i++) {
            int k = i;            
            if (k == 0 || k == (numRows - 1)) {
                while (k < s.length()) {
                    ch[j] = s[k];
                    k = k + inc;
                    j++;
                }
            } else {
                while (k < s.length()) {
                    ch[j] = s[k];
                    k = k + (inc - (2 * i));
                    j++;
                    
                    if (k < s.length()) {
                        ch[j] = s[k];
                        j++;
                        k = k + 2 * i;
                    }
                }
            }
        }
        return string(ch.begin(), ch.end());
    }
};