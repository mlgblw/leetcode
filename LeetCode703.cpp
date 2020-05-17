/*************************************************************************
	> File Name: LeetCode703.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 18时28分36秒
 ************************************************************************/

class KthLargest {
public:
    typedef pair<int, int > PII;
    set<PII> s; //模拟小顶堆
    int k, t;
    KthLargest(int k, vector<int>& nums) {
        //假设num长度<=k
        this->t = 0;//时间戳
        this->k = k;
        for(int i = 0; i <  nums.size(); i++){
            add(nums[i]);
        }
        return ;
    }
    
    int add(int val) {
        if(s.size() < k){
            s.insert(PII(val,t++));
        } else if(val > s.begin()->first){
            s.erase(s.begin());
            s.insert(PII(val, t++));
        }
        return s.begin()->first;

    }
};

