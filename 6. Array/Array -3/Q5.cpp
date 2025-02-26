// find the next permutations of array.
#include<iostream>
#include<vector>
using namespace std;
// void reverse(vector<int>& nums, int i, int j){
//     while(i<j){
//         int temp = nums[i];
//         nums[i] = nums[j];
//         nums[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int idx = -1;
    for(int i = n-2;i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    // this is for when our array is already greatest
    if(idx==-1){
        reverse(nums.begin(), nums.end());
        return;
    }
    // 2) sorting after reverse;
    reverse(nums.begin()+idx+1, nums.end());
    // 3) finding the just greater element than idx 
    int j = -1;
    for(int i = idx+1; i<n; i++){
        if(nums[i]>nums[idx]){
            j = i;
            break;
        }
    }
    // 3) swapping idx and idx+1;
    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
};
int main(){
    
}