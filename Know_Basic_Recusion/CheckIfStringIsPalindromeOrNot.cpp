
class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());

        int i = 0, j = s.size() - 1;

        while (i < j) {
            // Skip non-alphanumeric characters from the front
            while (i < j && !isalnum(s[i])) {
                i++;
            }

            // Skip non-alphanumeric characters from the end
            while (i < j && !isalnum(s[j])) {
                j--;
            }

            // Compare characters after converting to lowercase
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};



/*

// Recursion

class Solution {
public:
    bool helper(string s, int i, int j) {
        if(i >= j) return true;
        char left = (s[i]>='0' && s[i]<='9') ? s[i] : tolower(s[i]), right =  (s[j]>='0' && s[j]<='9') ? s[j] : tolower(s[j]);
        if(!(left >= 'a' && left <= 'z') && !(s[i]>='0' && s[i]<='9')) return helper(s, i+1, j);
        if(!(right >= 'a' && right <= 'z') && !(s[j]>='0' && s[j]<='9')) return helper(s, i, j-1);
        return (left != right) ? false : helper(s, i+1, j-1); 
    }
    bool isPalindrome(string s) {
        return helper(s, 0, s.size() - 1);
    }
};

*/