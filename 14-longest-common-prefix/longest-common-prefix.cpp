class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
         if (s.empty()) return "";
    string p=s[0];
    for (int i=1; i<s.size(); i++) {
        while (s[i].find(p) != 0) {
            p = p.substr(0, p.size()-1);
            if (p.empty()) return "";
        }
    }
    return p;
    }
};