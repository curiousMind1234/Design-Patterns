Given a string, find the length of the longest substring that contains at most 2 distinct characters.

s = "eceba"
Answer: 3 → "ece"

s = "ccaabbb"
Answer: 5 → "aabbb"


int lengthOfLongestSubstringTwoDistinct(string s) {
    int maxLength = 0;
    unordered_map<char, int> mp;
    int left = 0;

    for(int i = 0; i < s.length(); i++) {
        mp[s[i]]++;                    // 1. add new character

        if(mp.size() > 2) {            // 2. check if invalid
            mp[s[left]]--;
            if(mp[s[left]] == 0)
                mp.erase(s[left]);
            left++;                    // 3. shrink window
        }

        maxLength = max(maxLength, i - left + 1);  // 4. update answer
    }
    return maxLength;
}

Time complexity is O(n) — right pointer traverses string once, left pointer never goes backwards.
Space complexity is O(1) — map stores at most 3 characters at any point."
