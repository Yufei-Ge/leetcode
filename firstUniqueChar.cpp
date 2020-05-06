class Solution {
    //to find the first non-repeated character in the string
public:
    int firstUniqChar(string s) {
        int length = s.size();
        map<char, int> mapf;
        for(int i=0; i<length; i++){
            mapf[s[i]]++;
        }
        int index=-1;
        for(int i=0; i<length; i++){
            if (mapf[s[i]]==1){index = i;break;}
        }
        return index;
    }
};