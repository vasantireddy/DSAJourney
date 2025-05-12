Greatest Common String

**Example 1:**

```
Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"

```

**Example 2:**

```
Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
```

Code:
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string str = "";
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int l1 = str1.size();
        int l2 = str2.size();
        int res = gcd(l1, l2);
        for (int i = 0; i < res; i++) {
            str = str + str2[i];
        }
        return str;
    }
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
};
