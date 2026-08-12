class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp(nums.size());
        int n = nums.size();
        k = k%n;
        for(int i = 0;i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        // Copy temp into vector
        nums = temp;
    }
};