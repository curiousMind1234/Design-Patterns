Hashing used when we need “FAST LOOKUP while iterating”

**How to Recognize HashMap Problems**

Whenever you see these signals

1. “Find pair / combination”
Examples:
Two Sum
3Sum (partially)

2. “Check duplicates / uniqueness”
Examples:
Contains Duplicate
First unique character

3. “Frequency count”
Examples:
Valid Anagram
Top K Frequent Elements


4. “Subarray sum / prefix problems”
Examples:
Subarray Sum Equals K
👉 Thought:
“Can I store previous results and reuse?”


5. “Mapping relationships”
Examples:
Isomorphic Strings
LRU Cache

Do I need to remember something from the past?”
If YES → HashMap


❌ Without HashMap
Check all pairs → O(n²)
Slow
✅ With HashMap
Store + lookup → O(n)
Fast
