#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int len = nums.size();
        sort(nums.begin(),nums.end());
         
         for(int i=0;i<len;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            for(int j=i+1;j<len;j++){
                 if(j>i+1 && nums[j]==nums[j-1]) continue;

                 int left = j+1, right = len-1;
            
            while(left < right){
              long long  curr_sum = (long long)nums[i]+nums[j]+nums[left]+nums[right];

              if(curr_sum == target){
                res.push_back({nums[i],nums[j],nums[left],nums[right]});
               
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
            
         }
         return res;
    }
int main() {
    vector<int> nums;
    int n, target, num;
    
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    cout<<"Enter the target sum: ";
    cin>>target;
    
    vector<vector<int>> result = fourSum(nums, target);
    
    cout << "\nAll unique quadruplets that sum to " << target << " are:\n";
    for (const auto &quad : result) {
        cout << "[";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i < quad.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    
    if (result.empty()) {
        cout << "No quadruplets found that sum to " << target << endl;
    }
    
    return 0;
}