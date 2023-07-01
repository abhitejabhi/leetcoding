class Solution {
public:
    int romanToInt(string s) {
          std::map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int len = s.length();
        cout << "Len  : " << len << "\n";
        int num = m[s[len-1]];
        cout << "Num  : " << num << "\n";
        for(int i = len -2; i >= 0; i-- ){
            int prev = m[s[i+1]];
            int temp = m[s[i]];
            cout << "temp  : " << temp << "\n";
            if(temp >= prev){
                num = num + temp;
                
            } else {
                num = num - temp;
            }
            cout << "temp & num  : " << temp << num << "\n";
        }
        
        return num;
    }
    
};