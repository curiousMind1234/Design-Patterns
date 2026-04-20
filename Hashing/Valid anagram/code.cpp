https://leetcode.com/problems/valid-anagram/

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i=0; i <=s.length();i++){
        if(s[i] != t[i]) return false;
    }
    return true;
}


// example
Example 1: 
Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false
