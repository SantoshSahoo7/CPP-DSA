#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,4,5,6,7,9};
    int n = 7;
    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        if(arr[mid]!=mid){
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<ans;
}