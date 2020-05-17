/*************************************************************************
	> File Name: set_.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 18时16分19秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<set>
using namespace std;

set<int> s;

int main(){
    s.insert(2);
    s.insert(3);
    s.insert(4);
    cout << *(s.begin()) << endl;
    s.erase(s.begin());
    cout << *(s.begin()) << endl;
    return 0;
}
