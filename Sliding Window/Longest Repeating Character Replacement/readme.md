"The problem asks us to find the longest substring where we can replace at most k characters to make all characters the same.
My approach is Sliding Window with a HashMap. The HashMap stores the frequency of each character in the current window. I also maintain a maxFreq variable that tracks the highest frequency character in the window.
The key insight is — in any valid window, the characters we need to replace are always the minority characters. So the number of replacements needed is:
window length - maxFreq
If this value is less than or equal to k — the window is valid and we expand by moving right. If it exceeds k — the window is invalid and we shrink by moving left, decrementing the count of the leftmost character.
At every step I update maxLength with the current window size.
Edge case — if k is large enough to cover the entire string, the window never shrinks and we return the full string length.
Time complexity is O(n) since we traverse the string once. Space complexity is O(1) because the HashMap stores at most 26 uppercase characters — regardless of input size."
