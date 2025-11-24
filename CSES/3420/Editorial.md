### Problem
https://cses.fi/problemset/task/3420
<details>
    <summary>Observations</summary>
This problem using an uorderdered map for solution
</details>
<details>
    <summary>Solution</summary>
Iterate each index from $1$ to $N$, for each index the left bound is $\text{max(l, last[a[r]])}$. Calculate the total of lenghts.
</details>

### Time Complexity
$O(N)$
