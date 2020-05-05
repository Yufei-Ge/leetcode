//question: Given an integer, find its binary complement and return the decimal value of that binary complement
class Solution {
public:
    int findComplement(int num) {
        int bin_complement=0;
        std::string binary;
        //convert decimal to binary and store in a string
        while(num!=0) {binary=(num%2==0 ?"0":"1")+binary; num/=2;}
        //flipping to get complement binary string
        for (char& c : binary){
           
            if (c=='1'){
                c='0';
            }else if(c=='0') {c='1';}
        }
        //to get the decimal number of binary complement
        int c = binary.size();
        for (int i=0; i<c; i++){
            if (binary[i]=='1'){
                bin_complement += (int) pow (2, ((c-1)-i));
            }
        }
    
        return bin_complement;
        
        
    }
};
