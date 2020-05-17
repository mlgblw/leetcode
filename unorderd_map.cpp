/*************************************************************************
	> File Name: unorderd_map.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 19时31分34秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<double, int> h;
    h[2.3] = 123;
    h[345.6] = 123456;
    cout << h[2.3] << endl;
    cout << h[21212] << endl;

    return 0;
}
