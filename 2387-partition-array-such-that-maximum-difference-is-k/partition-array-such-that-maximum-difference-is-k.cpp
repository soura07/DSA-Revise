class Solution {
public:
    int partitionArray(std::vector<int>& nums, int k) {
        int n = nums.size();

        if(n == 0) {
            return 0;
        }
        std::sort(nums.begin(), nums.end());
        int count = 0;

        int i = 0, j;

        for(j = 0; j < n; j++) {
            if(std::abs(nums[j] - nums[i]) > k) {
                count++;
                i = j;
            }
        }

        if(i <= j) count++;

        return count;
    }
};
