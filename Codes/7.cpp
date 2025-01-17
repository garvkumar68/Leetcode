class Solution {
public:
    int reverse(int x) {
        long m=0;
        while(x!=0){
            m=m*10+x%10;
            x=int(x/10);
        }
        return ((m<INT_MIN || m>INT_MAX)?0:m);
    }
};