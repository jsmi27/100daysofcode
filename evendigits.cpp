//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
//https://www.vedantu.com/maths/value-of-log-10

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i,res,count=0;
        for(i=0;i<nums.size();i++){
          res=log10(nums[i]);
          if((res+1)%2==0)
          count++;
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> nums(20, 1);
    nums={12,345,2,3,7896};
    int evendigits=s.findNumbers(nums);
    cout<<evendigits;
    return 0;
}
