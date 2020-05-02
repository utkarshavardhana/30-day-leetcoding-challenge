class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m == n)  return m;
        long long res = m;
        for(long long i=m+1; i<=n; i++) {
            res &= i;
            if(res == 0)    return 0;
        }
        return res;
    }
};
