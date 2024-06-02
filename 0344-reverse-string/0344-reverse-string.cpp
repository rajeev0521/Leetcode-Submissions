class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = size(s);
        char c;
        for (int i = 0, j = len - 1; i <= j; i++, j--) {
            c = s[i];
            s[i] = s[j];
            s[j] = c;
        }

    }
};