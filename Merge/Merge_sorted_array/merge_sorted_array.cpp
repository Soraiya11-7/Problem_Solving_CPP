#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int l1 = m-1;
    int l2 = n-1;
    int l3 = m+n -1;

    while(l1 >= 0 && l2 >= 0) {
        if(nums1[l1] > nums2[l2]) {
            nums1[l3] = nums1[l1];
            l1--;
            l3--;
        }
        else {
            nums1[l3] = nums2[l2];
            l2--;
            l3--;
        }
    }

    while(l2 >= 0) {
        nums1[l3] = nums2[l2];
        l2--;
        l3--;
    }

    cout<<"[";
    for(int i = 0; i < m + n; i++) {
        cout<<nums1[i];
        if(i != m + n - 1) {
            cout<<",";
        }
    }
    cout<<"]"<<endl;
}

int main() {
   int m, n;

    // Input for nums1
    cout<<"Enter the size of nums1: ";
    cin>>m;

    vector<int> nums1(m);
    cout<<"Enter the elements of nums1 (sorted, separated by spaces): ";
    for (int i = 0; i < m; i++) {
        cin>>nums1[i];
    }

    // Input for nums2
    cout<<"Enter the size of nums2: ";
    cin>>n;

    vector<int> nums2(n);
    cout<<"Enter the elements of nums2 (sorted, separated by spaces): ";
    for (int i = 0; i < n; i++) {
        cin>>nums2[i];
    }

    // Resize nums1 to have enough space for merging (m + n elements)
    nums1.resize(m + n);

    merge(nums1, m, nums2, n);

    return 0;
}