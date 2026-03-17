#include <iostream>
using namespace std;

int main(){
    int arr[] = {6,2,3,15,23,8,9};
    int target = 14;
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {        
            if(arr[i]+arr[j] == target){
                ans[0] = j;
                ans[1] = i;
        }
    }}
    for (int i = 0; i < 2; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}