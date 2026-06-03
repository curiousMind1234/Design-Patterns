int shipWithinDays(vector<int>& weights, int days) {
		int left = *max_element(weights.begin(), weights.end());
		int right = 0;
		int result = 0;
		for(int i : weights){
				right += i;
		}

		while(left<=right){
				int mid = left + (right-left)/2;
				if(canShip(weights, mid, days)){
						result = mid;
						right = mid-1;
				} else {
						left = mid+1;
				}
		}
		return result;
}
bool canShip(vector<int>& weights, int capacity, int days){
		int day =1;
		int count = 0;
		for(int i : weights){
				if(count + i > capacity){
						day++;
						count = 0;
				}
				count += i;
		}
		return day<=days;
}


“We binary search on the answer space from max(weights) to sum(weights).
For each capacity, we validate in O(n), so total complexity is O(n log(sum))
SC: O(1)
