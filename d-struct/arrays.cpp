// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1]






// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//         std::vector<int> v;
//         int c=0;
//         int a=nums.size();
//         for(int i=0;i<a;i++)
//         {
//             for(int j=i+1;j<a;j++)
//             {
//                 if (nums[i]+nums[j]==target)
//                 {
//                     v.push_back(i);
//                     v.push_back(j);
//                     c=1;
//                 }
//                 if (c==1)
//                     break;
//             }
//             if(c==1)
//                 break;
//         }
//         return v;
//     }
// };
































#include<iostream>
using namespace std;
int main()
{
   int A[5], b,i,j;
   cin>>A[5];
   cin>>b;
   
   for (int i = 0; i <4; i++)
   {
       for (int j = 0; i <4; i++)
       {
           cout<<j;
           
       }

       cout<<i;
       
   }
   
   
    return 0;
}
