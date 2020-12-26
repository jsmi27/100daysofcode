// https://leetcode.com/problems/valid-anagram/
/*
Given : two strings 
Check : given strings are anagram or not
1: eat , tea
2: silent , listen
3: integral , triangle
Hint : all the characters of str1 are there in str2.
Instructions : built-in functions usage not possible

Pseudo code
1) check both char array length
2) if lengths are equal, compare the characters
3) if characters are equal, then strings are anagram else not.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int i,j,len1=0,len2=0,count1=0,count2=0;
	char k;
	string arr1 = "integral";
	string arr2 = "triangle";
	len1=arr1.size();
	len2=arr2.size();
	// char arr1[]="integral";
	// char arr2[]="triangle";
	// len1 = sizeof(arr1)/sizeof(arr1[0]);
	// len2 = sizeof(arr2)/sizeof(arr2[0]);

	//check if both string or char arrays are having equal no of characters
	if(len1==len2){
		for(k='a';k<='z';k++){
			for(i=0;i<len1;i++){
				if(arr1[i]==k)
					count1++;
			}
			for(j=0;j<len2;j++){
				if(arr2[j]==k)
					count2++;
			}
			if(count1!=count2)
				break;
		}
	}
	if(count1==count2){
		cout<<"Given strings are anagram";
	}else{
		cout<<"Given strings are not anagram";
	}
	return 0;
}


/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t)?true:false;
    }
};
*/