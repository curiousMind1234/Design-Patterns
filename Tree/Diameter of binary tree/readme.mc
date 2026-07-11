Definition: Longest path between any two nodes (edges, not node count). Path does NOT need to pass through root — could be entirely inside any subtree.
Family: Combine-left-right-into-value (same family as: Balanced Tree check, Max Path Sum). Return value ≠ answer; return value is helper info (height), answer is tracked separately.
Two formulas, don't confuse them:

Height (what you return to parent): 1 + max(leftHeight, rightHeight) — only the taller side, +1 for self.
Diameter check (what updates maxDia): leftHeight + rightHeight — both sides added, no +1, because path goes down-left AND down-right through this node.

Why two different numbers: parent only needs "how deep is your single longest branch" (height) to do its own math — it doesn't need to know the internal diameter of the child's subtree, that's irrelevant to the parent's own calculation.
Why maxDia needs int& (reference) not return value: the answer isn't produced once at the root — it must be checked and possibly updated at every single node during recursion, since the longest path might be buried in any subtree, not just at the top. A single return value can't accumulate "best seen so far" across sibling branches; a shared reference can.
Base case: root == NULL → return 0 (empty subtree has height 0).
