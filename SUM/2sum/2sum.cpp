#include <bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& numbers, int target) {
    int len = numbers.size();
        int left=0,right=len-1;

        while(left < right){
            int curr_sum = numbers[left]+numbers[right];

            if(curr_sum < target) left++;
            else if(curr_sum == target) return {left+1, right+1};
            else right --;
        }
        return {};
}


int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> numbers(n);
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    cout << "Enter the target sum ";
    cin >> target;
    
    vector<int> result = twoSum(numbers, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}