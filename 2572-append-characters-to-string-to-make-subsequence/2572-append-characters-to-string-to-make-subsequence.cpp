class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = size(s), m = size(t);
        int j = 0;
        for(int i = 0; i < n && j < m; i++){
            if(s[i] == t[j])
                j++;
            
        }
        return m - j;
    }
};