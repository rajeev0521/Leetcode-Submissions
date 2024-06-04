class Solution {
public:
    int longestPalindrome(const std::string& s) {
        std::unordered_set<char> map;
        int count = 0;
        
        for (char c : s) {
            if (map.find(c) != map.end()) {
                map.erase(c);
                count += 2;
            } else {
                map.insert(c);
            }
        }
        
        if (!map.empty()) {
            count += 1;
        }
        
        return count;
    }
};
