#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
     sort(nums.begin(),nums.end());
        int len = nums.size();
        int closest = nums[0] + nums[1] + nums[2]; 

        for(int i=0;i<len-2;i++){
            int left = i+1;
            int right = len-1;

            while(left<right){
                int total = nums[i]+nums[left]+nums[right];

                if(abs(total - target)<abs(closest-target)) closest= total;
                if(total < target) left++;
                else if(total > target) right--;
                else return total;
            }
        }
        return closest;
}


int main() {
    vector<int> nums;
    int target, n, num;
    
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin>>num;
        nums.push_back(num);
    }
    
    cout<<"Enter the target sum: ";
    cin>>target;
    
    int result = threeSumClosest(nums, target);
    
    cout<<"\nThe closest 3Sum to the target is: "<<result<<endl;
    
    return 0;
}