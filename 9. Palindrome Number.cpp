class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int d;
        long long int revX=0;
        int ogX = x;
        while(x>0){
            d = x%10;
            revX = revX*10 + d;
            x = x/10;
        }
        if(revX == ogX){
            return true;
        }else{
            return false;
        }
    }
};