// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1]





// ------------------------------------------   code 1-------------------------------------


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
//         
//         return v;
//     }
// };





// --------------------------------------  code 2 ----------------------------------




// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
        
//         int n=nums.size();
//     vector<pair<int,int>> v;
        
//         for(int i=0;i<n;i++){
//             v.push_back({nums[i],i});
//         }
        
//    sort(v.begin(),v.end());
  
//        int i=0,j=n-1;
        
//         while(i<j){
//             int sum=v[i].first+v[j].first;
//             if(sum==target){
//                 return {v[i].second,v[j].second};
//             }
//             else if(sum<target){
//                 i++;
                
//             }
//             else{
//                 j--;
//             }
//         }
//         return {-1,-1};
    
        
        
   
//     }
    
       
// };
   



// --------------------------------------   my-code ---------------------------------- 

#include<iostream>
using namespace std;
int main()
{
   int A[5] , B[2] , target;

   for (int i = 0; i <5; i++)
   {       
    cin>>A[i];     
   }
   cout<<"enter target value";
   cin>>target;


   for (int i = 0; i < 5; i++)
   {
      for (int j = i+1; j < 6; j++)
      { 

         if (A[i]+A[j] == target) {

            cout<<i<<j;

                 
         }
         
       
      }
      
   }
   
   

   
   
   return 0;
}

