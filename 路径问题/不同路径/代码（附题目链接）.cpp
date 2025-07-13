//题目链接：https://leetcode.cn/problems/unique-paths/?envType=study-plan-v2&envId=top-100-liked

class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        //1. 状态表示dp[i][j]
        //2. 状态转移方程dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
        //3. 初始化 增加一行一列，作为虚拟的位置，不越界访问
        //4. 填表顺序 从上往下每一行，从左往右每一列
        //5. 返回值 增加了虚拟行列，直接返回

        //使用了int 数组，但是可变长数组不支持参数定义数组大小，可变长数组不可进行初始化操作
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        dp[0][1] = 1; //dp[1][0] = 1;
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m][n];
    }
};