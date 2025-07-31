//题目链接：https://leetcode.cn/problems/maximum-subarray/?envType=study-plan-v2&envId=top-100-liked

class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        // //使用动态规划
        // //dp[i]：以i位置为结尾的前缀和
        // //dp[i] = dp[i - 1] + nums[i]，如果dp[i - 1]小于0，那么让dp[i]等于本身
        // if (nums.size() == 1) return nums[0];
        // vector<int> dp(nums.size()); //保存i位置为结尾的和
        // dp[0] = nums[0];
        // int ret = INT_MIN;
        // for (int i = 1; i < nums.size(); ++i)
        // {
        //     dp[i] = dp[i - 1] > 0 ? dp[i - 1] + nums[i] : nums[i];
        // }
        // for (int i = 0; i < dp.size(); ++i)
        // {
        //     ret = max(ret, dp[i]);
        // }
        // return ret;


        //对以上代码进行优化
        int tmp = 0;
        int ret = INT_MIN;
        for (auto x : nums)
        {
            tmp = max(tmp + x, x);
            ret = max(ret, tmp);
        }
        return ret;
    }
};