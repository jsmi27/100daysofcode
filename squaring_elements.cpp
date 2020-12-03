//https://leetcode.com/problems/squares-of-a-sorted-array/
//‘auto’ is equivqlent to ‘std::vector<int>::iterator’

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(auto& i : A){
            i *= i;
        }
        // for(int i=0;i<A.size();i++){
		//   A[i] *= A[i];
		// }
        sort(A.begin(), A.end());
        return A;
	}
};
int main()
{
	Solution s;
	vector<int> nums,res;
	nums={1,2,3,4,5,6};
	res=s.sortedSquares(nums);
	for (auto it = res.begin(); it != res.end(); it++) 
        cout << *it << " "; 
	return 0;
}
