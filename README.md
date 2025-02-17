# String-Mingling

Pawel and Shaka recently became friends. They believe their friendship will last forever if they combine their favorite strings. 

Both strings, P (Pawel's favorite) and Q (Shaka's favorite), have the same length, n. Merging these two strings will create a new string, R, of length 2n. The structure of the mingled string R will alternate characters from P and Q as follows: the first character from P, the first character from Q, the second character from P, the second character from Q, and so on.

### Input Format
- The first line contains string P.
- The second line contains string Q.

### Output Format
- Print the mingled string R.

### Constraints
- The strings only consist of lowercase English characters (a-z).
- The length of P is equal to the length of Q.

### Sample Input #00
```
abcde
pqrst
```

### Sample Output #00
```
apbqcrdset
```

### Sample Input #01
```
hacker
ranker
```

### Sample Output #01
```
hraacnkkeerr
```

### Explanation
- In Sample Case #00, the mingled string is formed by alternating characters from both strings.
- In Sample Case #01, the same mingling pattern is applied to generate the output.

## Code Explanation

### Step-by-Step Breakdown

**1. Header File Inclusion**

```cpp
#include <iostream>
using namespace std;
```
The `#include <iostream>` directive includes the library needed for standard input (`cin`) and output (`cout`) operations. The statement `using namespace std;` allows the use of standard library functions without the need to prefix them with `std::`.

---

**2. Recursive Function to Merge Strings**

```cpp
string mingleStringsRecursive(string P, string Q, int index = 0)
```
- **Function Name:** `mingleStringsRecursive`
- **Parameters:**
  - `P`: The first input string (Pawel's favorite).
  - `Q`: The second input string (Shaka's favorite).
  - `index`: The current position in the strings, defaulting to 0.
- **Return Type:** `string`, as it returns the merged result.

**Base Case (Stopping Condition)**

```cpp
if (index >= P.length()) {
    return "";  // Returns an empty string if the index reaches the end of the string.
}
```
This condition stops the recursion when the index reaches the length of the string, meaning all characters have been processed.

**Recursive Case (Merging Characters)**

```cpp
output = output + P[index] + Q[index] + mingleStringsRecursive(P, Q, index + 1);
```
The function constructs the output by:
- Taking `P[index]` (a character from the first string).
- Taking `Q[index]` (a character from the second string).
- Calling itself recursively for the next character (`index + 1`).

This process continues until the base case is reached.

---

**3. Main Function**

```cpp
int main() {
    string P, Q;
    cin >> P >> Q;
```
This segment declares two strings, `P` and `Q`, and reads input values from the user.

**Calling the Recursive Function**

```cpp
cout << mingleStringsRecursive(P, Q) << endl;
```
This line calls the `mingleStringsRecursive` function with `P` and `Q` as arguments and prints the merged string.

**Return Statement**

```cpp
return 0;
```
This indicates successful program execution.

---

**Example Execution**

**Input:**
```
nginx
abcde
pqrst
```

**Recursive Calls Breakdown:**

| Call Index | Output (at that step) | Recursive Call      |
|------------|-----------------------|---------------------|
| 1          | 0                     | a + p               | Call (index=1)     |
| 2          | 1                     | b + q               | Call (index=2)     |
| 3          | 2                     | c + r               | Call (index=3)     |
| 4          | 3                     | d + s               | Call (index=4)     |
| 5          | 4                     | e + t               | Call (index=5)     |
| 6          | 5                     | (Base case reached) | Returns ""          |

**Output Formation:**

```ruby
output = a + p + (b + q + (c + r + (d + s + (e + t + ""))))
=> apbqcrdset
```

**Final Output:**
```
apbqcrdset
```

---

**Time Complexity:**
Each function call processes one pair of characters, resulting in a time complexity of O(n), where n is the length of the input strings.

**Space Complexity:**
The function uses recursion, leading to a space complexity of O(n) due to the storage needed for the recursive call stack.

---

### Key Takeaways
- A recursive approach is used to process characters step by step.
- The base case ensures the function stops when the end of the strings is reached.
- Recursive calls build the merged string by concatenating characters from both strings.
- The time complexity is O(n), making it an efficient solution for reasonably sized strings.Step-by-Step Breakdown
