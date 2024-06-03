class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int j = 0;
        for(int i = 0; i < n; i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                j++;
            }
        }
        
        cout << j;
        if(n == j)
            return true; //All elements are capital
        else if(j == 0)
            return true; // All elements are small
        else if(j == 1 && (word[0] >= 'A' && word[0] <= 'Z'))
            return true; // Only first element is capital
        else
            return false;
    }
};