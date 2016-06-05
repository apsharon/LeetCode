class Solution {
public:
    string reverseString(string s) {
        string::reverse_iterator rit = s.rbegin();
        string s_reversed = "";
        
        for (; rit != s.rend(); ++rit)
        {
            s_reversed += *rit;
        }
        return s_reversed;
    }
};
