/*************************************************************************
	> File Name: lc-202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时26分11秒
 ************************************************************************/
bool isHappy(int n){
    while (1){
    if(n < 10){
        if(n == 1 || n== 7)return 1;
        else return 0;
    }
    int sum = 0;
    while(n > 0){
        sum += (n%10)*(n%10);
        n/=10;
    }
    n = sum;
    }
}
