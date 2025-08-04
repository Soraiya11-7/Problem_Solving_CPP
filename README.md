
# Problem Solving (C++)

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