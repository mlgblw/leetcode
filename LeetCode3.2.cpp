/*************************************************************************
	> File Name: LeetCode3.2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 20时35分31秒
 ************************************************************************/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ind[256] = {0}; //记录最后一次出现的位置，0没出现过
        int l = 0, ans =0;
        for(int i =0 ;  s[i]; i++  ){
            l += 1;
            l = min(l, (i + 1) - ind[s[i]]);
            ind[s[i]] = i + 1 ;
            ans = max(ans, l);
        }
        return ans ;
    }
};
