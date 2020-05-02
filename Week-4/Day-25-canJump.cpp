class Solution {
public:
    bool canJump(vector<int>& A) {
        for(int i=1; i<A.size(); i++) {
            for(int j=i-1; j>=0; j--) {
                if(A[j]+j >= i) break;
                else if(j == 0)   return false;
            }
        }
        return true;
    }
};
