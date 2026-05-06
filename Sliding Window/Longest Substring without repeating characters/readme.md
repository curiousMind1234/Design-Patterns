"The problem asks us to find the length of the longest substring without any repeating characters.
My approach is to use the Sliding Window technique with a HashMap. The HashMap stores each character along with its last seen index — not just frequency — because we need to know exactly where to move our left pointer.
I maintain two pointers — left and right. The right pointer moves forward at every step expanding the window. When I encounter a character that already exists in the map AND its stored index is greater than or equal to left — it means the duplicate is inside my current window. In that case I move left to that character's index plus one, effectively shrinking the window past the duplicate.
After handling the duplicate check, I always update the character's index in the map and update the maximum length using right minus left plus one.
The key insight is — we never move left backwards. If a duplicate exists but its index is behind our left pointer, it's already outside our window so we safely ignore it.
Edge cases — empty string returns 0 naturally since the loop never runs. All same characters like "bbbbb" returns 1 because left keeps jumping to right.
Time complexity is O(n) — we traverse the string once. Space complexity is O(n) — in the worst case all characters are stored in the map."
