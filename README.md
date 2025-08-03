
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