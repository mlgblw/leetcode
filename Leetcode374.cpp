/*************************************************************************
	> File Name: Leetcode374.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月17日 星期日 15时00分02秒
 ************************************************************************/
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l  =0, r = n;
        while(l - r ){
            long long mid = (l + r) / 2;
            int g = guess(mid);
            if(g == 0 ){
                return mid;
            }
            if(g < 0) {
                r = mid - 1 ;
            }
            if(g > 0 ){
                l = mid + 1;
            }
        }
        return l;
    }
};
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int bs(int l, int r) {
        int mid, ret;
        while(l <= r){
            mid = ((l ^ r) >> 1 ) + (l & r) ;   //亦或，不同时为1 的位置相加
            //不会超范围；其他类型也能用
            if((ret = guess(mid)) == 0) return mid;
            if(ret == -1) r  = mid - 1;
            else l = mid +  1;
        }
        return -1;
    }
    int guessNumber(int n){
        return bs(1,n);
    }
};
