
int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1, right = *max_element(piles.begin(), piles.end());

    int result = right;
    while(left<= right){
        int mid = left + (right-left)/2;
        if(canEat(piles, mid, h)){
             result = mid;
             right = mid-1;
        } else {
            left = mid+1;
        }
    }
    return result;
}

bool canEat(vector<int>& piles, int speed , int h){
    
    long long hour = 0;
    for(int i : piles){
        hour += (i + speed - 1) / speed;
    }
    return hour<=h;
}

TC: O(n * log(max(piles)))
SC: O(1)
