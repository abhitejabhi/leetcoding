class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> wset;  
        for (int i = 0; i < word.size(); i++) {
            if (isdigit(word[i])) {
			    string str;
                while (word[i] == '0')
                    i++;
                while (isdigit(word[i]))
                    str += word[i++];
                wset.insert(str);
            }
        }
        return wset.size();
    }
};
