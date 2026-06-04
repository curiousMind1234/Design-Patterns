"The problem asks us to find the minimum eating speed for Koko to finish all bananas within h hours.
My approach is Binary Search on Answer. The key insight is — as speed increases, hours needed decreases. This is a monotonic relationship — once a speed works, all higher speeds also work. Monotonic condition always means Binary Search.
The search range is:
Left = 1 — minimum possible speed, eat 1 banana per hour
Right = max(piles) — eating faster than the largest pile is pointless since Koko spends the full hour on one pile regardless
At each mid I call a helper function canEat which calculates total hours needed at that speed. For each pile I use ceiling division — (pile + speed - 1) / speed — because Koko always spends the full hour on a pile even if she finishes early.
If canEat returns true — speed is sufficient, save result and search left for smaller speed. If false — speed too slow, search right for higher speed.
Time complexity is O(n log m) where n is number of piles and m is max pile size. Space is O(1)."
