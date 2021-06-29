 /*courtesy :: https://www.linkedin.com/pulse/interview-pearls-in-shuffle-vlad-trubachov/
Contidition - The array should be balanced or contains even elements
Given array:
[a1, a2, ..., an, b1, b2, ..., bn]
interleave it in place to:
[a1, b1, a2, b2, …, an, bn]
*/
//Permutation Сycles :

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
template <class Iterator> void inShuffle_Permutation(Iterator first, Iterator last) {
    auto size = last - first, i = 1;
    if (size == 0 || size & 1) 
        return;
    while (i * 3 <= size + 1) 
        i *= 3; // Largest power of three
    rotate(first + (i - 1) / 2, first + size / 2, first + (i - 1) / 2 + size / 2);
    for (auto m = 1; m < i - 1; m *= 3) { // Permutation cycles
        int tmp1 = *(first + (m * 2) % i - 1);
        *(first + (m * 2) % i - 1) = *(first + m - 1);
        for (auto idx = (m * 2) % i; idx != m; idx = (idx * 2) % i) {
            auto tmp2 = *(first + (idx * 2) % i - 1);
            *(first + (idx * 2) % i - 1) = tmp1;
            tmp1 = tmp2;
        }
    }
    inShuffle_Permutation(first + (i - 1), last); // Split and process the remaining elements
}
int main()
{
    int arr[]={1,3,5,7,9,2,4,6,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    //inShuffle_Permutation(vect.begin(), vect.end());   //bn elements appears before an [b1, a1, b2, a2, …, bn, an]
    inShuffle_Permutation(vect.begin()+1, vect.end()-1);
    for (int x : vect)
        cout << x << " ";
    return 0;
}