class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int output = 0;
        //I brute forced by traversing every char in the J and then compare with every char in S
        for (std::string::iterator it1 = J.begin(); it1 != J.end(); ++it1 ){
            char i = *it1;
            for (std::string::iterator it2  = S.begin(); it2 != S.end(); ++it2){
                if (*it2 == i){
                    output++;
                }
            }
            i = NULL;//reset the char to be null in order to traverse to next type in J
        }
        return output;
        //the time limit passed but i expect it to be more efficient later
    }
};
