"The problem asks us to find the length of the longest substring containing at most 2 distinct characters.
My approach is Sliding Window with a HashMap. The HashMap stores the frequency of each character currently inside the window.
The key insight is — a window is valid as long as it contains at most 2 distinct characters. We know the number of distinct characters instantly by checking map.size(). As long as map.size() <= 2 we keep expanding the window by moving right.
When we add a new character and map.size() exceeds 2 — the window becomes invalid. We shrink from the left by decrementing the count of the leftmost character. If that count drops to zero, we remove it from the map entirely — otherwise it would still count as a distinct character even though it's no longer in the window. Then we move left forward.
After every step we update maxLength with the current window size.
Edge cases — single character string returns 1 naturally. Empty string returns 0 since the loop never runs.
Time complexity is O(n) — right pointer traverses string once, left pointer never goes backwards. Space complexity is O(1) — map stores at most 3 characters at any point."
