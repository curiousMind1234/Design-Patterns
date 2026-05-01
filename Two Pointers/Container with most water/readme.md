"I am using the Two Pointer approach for this problem.
Since we need to find the maximum water a container can store, we need two boundaries — a left wall and a right wall. Two pointers naturally give us those two boundaries and allow us to efficiently explore all possibilities.
I start with pointer i at the beginning and pointer j at the end of the array. At each step, I calculate the area using the formula — minimum of the two heights × distance between them. I take the minimum height because water is always bounded by the shorter wall — the taller wall doesn't matter here.
After calculating the area, I update my maxWater variable if the current area is larger.
Now for the key decision — which pointer do I move? I always move the pointer with the smaller height. The reason is — since water is limited by the shorter wall, moving the taller pointer inward only reduces the width with zero chance of improvement. But moving the shorter pointer gives us a chance to find a taller wall, which might compensate for the reduced width.
I keep doing this until both pointers meet. Finally I return maxWater.
Time complexity is O(n) since we traverse the array once. Space complexity is O(1) as we use no extra space."
