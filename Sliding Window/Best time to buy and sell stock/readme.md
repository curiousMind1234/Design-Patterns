The problem asks us to find the maximum profit from a single buy and sell transaction.
My approach is to traverse the array once while tracking two things — the minimum price seen so far and the maximum profit achievable so far.
At each day, I first update the minimum price if the current price is lower. Then I calculate the potential profit by subtracting the minimum price from the current day's price. If this profit is better than my current maximum profit, I update it.
The key insight is — we always want to buy at the lowest price seen before the current day. So by continuously tracking the minimum, we ensure we're always considering the best possible buy point.
For the edge case where prices only fall — since I initialize maxProfit to 0, and no positive profit is ever calculated, it naturally returns 0.
Time complexity is O(n) since we traverse the array once. Space complexity is O(1) as we only use two variables.
