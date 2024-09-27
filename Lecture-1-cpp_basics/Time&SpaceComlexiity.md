Time complexity != Time taken by a program to run
now why's that?
-----> simply cuz this factor havily depend on physical hardwares means good system can run a program faster compare to a poor system
==== we consider the rate on witch time taken increases.

NOTATION to represent time complexity
Big O ->>> O()

for(int i = 0; i < n; i++){
for(int j = 0; j < i; j++) {
// some code
}
}

now what is the time complexity
lets see how this code is running...
when i = 0, j is running 0
when i = 1, j is running 0, 1
when i = 2, j is running 0, 1, 2
when i = n - 1, j is running 0, 1, 2, ......, n - 1

(1 + 2 + 3 + .... + (n - 1)) = n(n+1)/2 = n^2/2 + n/2
now ignore the constant term
so the TC is O(n^2/2)
