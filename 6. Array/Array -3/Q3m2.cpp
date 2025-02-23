// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

// HINT :- 0 to low-1 --> 0;
//         high to n-1 --> 2;

#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    while(mid<=high){
        if(nums[mid]==2){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        else if(nums[mid]==0){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[low] = temp;
            low++;
            mid++;
        }
    }
}
int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    sort012(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}