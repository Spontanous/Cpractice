/*************************************************************************
	> File Name: 127.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 18时02分32秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int x,n;
    cin >> x >> n;
    double m = x;
    for (int i = 0; i<n ; i++){
    m = m*1.06;
    }
    cout << (int)m<<endl;
    return 0;
}
