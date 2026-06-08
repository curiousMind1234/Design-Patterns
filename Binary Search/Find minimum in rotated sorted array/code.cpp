int findMin(vector<int>& nums) {
		int left=0, right=nums.size()-1;
		int mid =0;
		while(left<right){
				mid = left + (right-left)/2;
				cout << "left : " << left << " right:" << right << " mid: " << mid<< endl;
				cout << "nums[left]" << nums[left] << endl;
				if(nums[mid] <= nums[right]){
						right = mid;
				} else {
						left = mid +1;
				}
		}
		return nums[left];
}

TC: O(logn)
SC : O(1)
