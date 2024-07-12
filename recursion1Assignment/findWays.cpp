#include<iostream>
using namespace std;
int findWays(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return findWays(n-1)+findWays(n-2)+findWays(n-3);
}
int main(){
    cout<<findWays(3)<<endl;
}