class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int num : nums){
            sum += num; 
        }
        int n = nums.size();
        int sum2 = (n*(n+1))/2;

        return sum2-sum;
    }
};