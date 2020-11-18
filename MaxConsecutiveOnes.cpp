#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,length,maxones=0,num=0;
        //length=sizeof(nums)/sizeof(nums[0]);
        //for(i=0;i<length;i++){
        for(i=0;i<nums.size();i++){
            if(nums[i]){
                num++;
            }else{
                if(num>maxones)
                    maxones=num;
                num=0; 
            }
        }
        return max(num,maxones);
    }
};
int main()
{
	Solution s;
	vector<int> nums(20, 1);
	nums={1,0,1,1,0,1,1,1,1,1,0,0,0,1,1,1};
	int maxones=s.findMaxConsecutiveOnes(nums);
	cout<<maxones;
	return 0;
}