class Solution {
public:
    int numDifferentIntegers(string s) {
        // Replace non-digit characters with spaces
        for (char& c : s) {
            if (!isdigit(c)) {
                c = ' ';
            }
        }
        
        set<string> st; // Use set to store unique integers as strings
        istringstream iss(s);
        string temp;
        
        // Extract and store integers as strings in the set
        while (iss >> temp) {
            // Remove leading zeros from the number (if any)
            temp.erase(0, min(temp.find_first_not_of('0'), temp.size() - 1));
            st.insert(temp);
        }
        
        return st.size();
    }
};
