https://leetcode.com/problems/contains-duplicate/

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> map;
    for(int i : nums){
        if (map.find(i) != map.end()) {
            return true;
        }
        map[i]++;
    }
    return false;
}


Input: nums = [1,2,3,1]
Output: true
