#include <bits/stdc++.h>
using namespace std;


 vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int len = nums.size();
        sort(nums.begin(),nums.end());
         
         for(int i=0;i<len;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            int left = i+1, right = len-1;
            int target = -nums[i];

            while(left < right){
              int curr_sum = nums[left]+nums[right];

              if(curr_sum == target){
                res.push_back({nums[i],nums[left],nums[right]});
               
               //skip duplicate....
                while(left < right && nums[left]==nums[left+1]) left++;
                while(left < right && nums[right]==nums[right-1]) right--;

                left++;
                right--;
              }
              else if (curr_sum<target) left++;
              else right--;
            }
         }
         return res;
        
    }


int main() {
    vector<int> nums;
    int n, num;

    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }

    vector<vector<int>> result = threeSum(nums);

    cout << "The triplets that sum to zero are:\n";
    for (const auto& triplet : result) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    
    return 0;
}