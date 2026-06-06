int findFirst(vector<int>& arr, int target) {
    int left = 0, right = arr.size()-1;
    int result = -1;
    
    while(left <= right) {
        int mid = left + (right-left)/2;
        if(arr[mid] == target) {
            result = mid;
            right = mid - 1;     // go LEFT for first
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int findLast(vector<int>& arr, int target) {
    int left = 0, right = arr.size()-1;
    int result = -1;
    
    while(left <= right) {
        int mid = left + (right-left)/2;
        if(arr[mid] == target) {
            result = mid;
            left = mid + 1;      // go RIGHT for last
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

vector<int> searchRange(vector<int>& nums, int target) {
    return {findFirst(nums, target), findLast(nums, target)};
}
