**Reverse Vowels of a String**

**Example 1:**

**Input:** s = "IceCreAm"

**Output:** "AceCreIm"

**Explanation:**

The vowels in `s` are `['I', 'e', 'e', 'A']`. On reversing the vowels, s becomes `"AceCreIm"`.

Code:
class Solution {
public:
    string reverseVowels(string s) {
        string str = "";
        int j = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'||s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
                str = str + s[i];
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'||s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
                s[i] = str[str.size()-j -1];
                j++;
            }
        }
        return s;
    }
};
