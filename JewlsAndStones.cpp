class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int output = 0;
        for (std::string::iterator it1 = J.begin(); it1 != J.end(); ++it1 ){
            char i = *it1;
            for (std::string::iterator it2  = S.begin(); it2 != S.end(); ++it2){
                if (*it2 == i){
                    output++;
                }
            }
            i = NULL;
        }
        return output;
    }
};