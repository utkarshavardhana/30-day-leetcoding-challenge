class Solution {
public:
    bool isHappy(int n) {
        if(n == 0)  return false;
        unordered_set<int> s;
        while(n > 1) {
            if(s.find(n) != s.end())    return false;
            s.insert(n);
            int num = n;
            n = 0;
            while(num) {
                cout<<n<<" ";
                n += pow(num%10, 2);
                num /= 10;
            }
            cout<<n<<endl;
        }
        return true;
    }
};
