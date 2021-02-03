
/*
Dorababu Arigi
b19cs039
dorababuarigi
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t m=1;
        int sum=0;
        uint32_t k=n;
        for(int i=0;i<32;++i){
            if((n&m)!=0){
                sum++;
            }
            m<<=1;
         }
        return sum;
    }
};
