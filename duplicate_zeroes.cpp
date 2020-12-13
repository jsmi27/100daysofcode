// Duplicate Zeros  ->  https://leetcode.com/problems/duplicate-zeros/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int> arr) {
        int i,j,len=0;
        len=arr.size();
        for(i=0;i<len-1;i++){
            if(arr[i]==0){
                // loop to make position for interger by shifting array elements 
                for(j=len-1;j>i+1;j--){
                    arr[j]=arr[j-1];
                }
                // insert interger at the position i+1
                arr[i+1]=arr[i];
                i++;
            }
        }
        for(i=0;i<len;i++){
            cout<<arr[i]<<"\t";
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums(20, 1);
    nums={1,0,2,3,0,4,5,0};
    s.duplicateZeros(nums);
    return 0;
}