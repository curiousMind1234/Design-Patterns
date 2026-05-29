Given an array of integers, find the maximum sum of any subarray of size k.

Example:
arr = [2, 1, 5, 1, 3, 2]
k = 3
Answer: 9 → subarray [5, 1, 3]

  
int sum = 0, maxSum = 0, left = 0;

for(int i = 0; i < arr.size(); i++) {
    if(i < k) {
        sum = sum + arr[i];        // ✅ build first window
    } else {
        sum = sum - arr[left];     // ✅ remove leftmost
        sum = sum + arr[i];        // ✅ add new right
        left++;                    // ✅ slide left forward
    }
    maxSum = max(maxSum, sum);     // ✅ update answer
}
return maxSum;
