/*************************************************************************
	> File Name: LeetCode58.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月19日 星期二 21时21分03秒
 ************************************************************************/
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == "") return 0;
        int p1 = s.size() - 1, p2;
        while (p1 >= 0 && s[p1] == ' ') --p1;
        p2 = p1;
        while (p2 >= 0 && s[p2] != ' ') --p2;
        return p1 - p2;
    }
};
