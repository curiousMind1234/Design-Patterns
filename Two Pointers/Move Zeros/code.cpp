
https://leetcode.com/problems/move-zeroes/


void moveZeroes(vector<int>& nums) {
    /*int i=0, j=1;
   
    while(j < nums.size()){ 
        if(nums[i] == 0 && nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        } else if(nums[i] != 0){
            i++;
        }
        j++;
    }*/

    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[i], nums[j]);
            i++;
        }
        
    }
}

TC : O(N)
SC: O(1)


/*
Code flow:
i=0 j=1

nums= 1,0,0,3,12  i=1

i=1, j=2
nums[2]=0 --> j=3

i=1, j=3
nums=1,3,0,0,12 i =2

i=2, j=4

nums=1,3,12,0,0 
*/
