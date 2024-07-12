#include<iostream> 
using namespace std;
int main(){
    int arr[5][6]={{0,0,0,0,1,1},{0,0,1,1,1,1},{0,0,0,1,1,1},{0,1,1,1,1,1},{0,0,0,1,1,1}};
    int m = 5;
    int n = 6;
    int x = 1;
    int count = 0; // count no. ones
    int row = 0; //show the row number
    int maxOnes = 0;
    for(int i=0; i<m; i++){
        int lo=0;
        int hi=m-1;
        int firstIdex=-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[i][mid]==x){
                if(arr[i][mid-1]!=x){
                    firstIdex=mid;
                    break;
                }
                else{
                    hi=mid-1;
                }
            }
            else if(arr[i][mid]<x) lo=mid+1;
            else hi=mid-1;
        }
        if(firstIdex!=-1) count=m-firstIdex;
        if(maxOnes<count){
            maxOnes=count;
            row=i;
        }
    }
    cout<<"row : "<<row<<" "<<"ones : "<<maxOnes;
}