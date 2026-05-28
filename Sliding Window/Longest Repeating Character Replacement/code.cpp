int characterReplacement(string s, int k) {
    int left=0, maxLength=0;
    unordered_map<char, int> mp;
    int maxFreq = 0;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
        maxFreq = max(maxFreq, mp[s[i]]);
        int win = i-left+1;
        if(win-maxFreq > k){
            mp[s[left]]--;
            left++;
            
        }
        maxLength = max(maxLength, i-left+1);
    }
    return maxLength;
}

TC: O(N)
SC :O(1) as we are storing character so character can be store till 26th hence
