class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        return s==t;
    }
};
// anagram are words or phrases from which a new word of same frequency of letters can be formend