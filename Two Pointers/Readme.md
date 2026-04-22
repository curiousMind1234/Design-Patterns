Two Pointer Pattern – Quick Notes
🔥 When to Use Two Pointers

👉 Use when:

1. Array / String problem
Linear structure
Index-based traversal
2. Need to work with pairs
Two elements together
Compare / calculate between them

👉 Examples:

Pair sum
Container problem
Palindrome
3. Input is sorted 🚨 (BIG SIGNAL)

👉 Immediately think:

Two pointers > Hashmap
4. Brute force is O(n²) and can be optimized

👉 Replace:

Nested loops ❌
with
Pointer movement ✅
5. Need to process from both ends

👉 Use:

left = 0, right = n-1;
6. Need to shift / rearrange elements

👉 Use:

i, j (same direction)
🔁 Types of Two Pointers
1. Opposite Direction
left → , ← right

Use for:

Palindrome
Container
Sorted pair sum
2. Same Direction
i → , j →

Use for:

Move zeroes
Remove duplicates
3. Fast & Slow
slow, fast

Use for:

Cycle detection
Middle element
⚡ Golden Rules

👉 Move pointer based on condition
👉 Never move both blindly
👉 Keep pointers within bounds

❌ When NOT to Use
Need fast lookup → use hashmap
Unsorted + no relation
Trees / graphs
