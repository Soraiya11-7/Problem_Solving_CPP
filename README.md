
# Problem Solving (C++)

## Detecting Duplicates in Arrays: Hashing Patterns in Action


## Problem 1: Remove Duplicates
🚀 Problem: [Codeforces#978A](https://codeforces.com/problemset/problem/978/A)

---


## Two Pointers

An algorithmic approach using two indices that traverse a data structure (like an array) in coordination. Common patterns include:
- One pointer starts at the beginning, another at the end
- They move toward each other based on conditions
- Often used for sorted array problems or pair searching



**Why Use Two Pointers?**
- **Optimizes efficiency:**  O(n³) → O(n²)  or O(n²) → O(n) for problems involving sums, subarrays, or element relationships

🚀 Reference: [PrepLetter](https://prepletter.app/).


---

## Problem 1: Two Sum II – Input Array Is Sorted
🚀 Problem: [LeetCode#167](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/)

### Problem Statement
 Given a sorted array of integers and a target value, find the 1-based indices of two distinct numbers that sum to the target.
 
### Solution: Two Pointers Approach
Key Idea: Leverage the sorted order to find the pair in O(n) time with O(1) space.

#### Steps:
**1 . Initialize two pointers:**

- **left** at the start (index 0).
- **right** at the end (index n-1).

**2. Compare the sum of elements at left and right:**

- **Sum < Target:** Move left right (left++)
- **Sum > Target:** Move right left (right--)
- **Sum == Target:** Return [left+1, right+1] (1-based indices).
---

---

## Problem 2: 3Sum Closest
🚀 Problem: [LeetCode 16](https://leetcode.com/problems/3sum-closest/description/)

### Problem Statement
Given an array of integers `nums` and a target integer, find three integers in `nums` whose sum is closest to the target. Return their sum.
 
### Solution: Two Pointers Approach

#### Steps:
**1. Sort the array** to enable efficient two-pointer traversal

**2. Initialize `closest` sum** with the first triplet (nums[0] + nums[1] + nums[2])

**3. For each index i (0 to n-3):**
   - **Initialize two pointers:** `left = i+1` and `right = n-1` (at the end)
   - While `left < right`:
     - Calculate current sum = `nums[i] + nums[left] + nums[right]`
     - Update `closest` if current sum is nearer to target
     - If exact match found (`sum == target`), return immediately
     - If sum < target: move `left` forward (to increase sum)
     - If sum > target: move `right` backward (to decrease sum)
     
**4. Return the `closest` sum found**


---

---

## Problem 3: 3Sum 
🚀 Problem: [LeetCode #15](https://leetcode.com/problems/3sum/)

### Problem Statement
 Given an integer array nums, find all unique triplets [nums[i], nums[j], nums[k]] where:

- The triplet elements are distinct (i != j, i != k, j != k).
- Their sum equals zero (nums[i] + nums[j] + nums[k] = 0).
 
### Solution: Two Pointers Approach

#### Steps:
**1. Initial Setup**
   - Sort the input array in ascending order
   - Initialize an empty result vector to store triplets

**2. Main Loop (i iterator)**
   - Iterate through each element using index `i` (0 to n-1):
     - Skip duplicate elements: `if (i > 0 && nums[i] == nums[i-1]) continue`
     - Initialize two pointers:
       - `left = i + 1`
       - `right = nums.size() - 1`
     - Calculate target sum: `target = -nums[i]`

**3. Two-Pointer Search**
   - While `left < right`:
     - Calculate `current_sum = nums[left] + nums[right]`
     - **Case 1: Match Found** `current_sum == target`:
         - Add triplet to results: `result.push_back({nums[i], nums[left], nums[right]})`
         - Skip duplicates:
           - `while (left < right && nums[left] == nums[left+1]) left++`
           - `while (left < right && nums[right] == nums[right-1]) right--`
         - Move pointers: `left++`, `right--`
     - **Case 2: Sum Too Small**
       - When `current_sum < target`: `left++`
     - **Case 3: Sum Too Large**
       - When `current_sum > target`: `right--`


---