class Solution {
public:
    bool isArmstrong(int n) {
        int num = n;
        int cubicSum = 0;
        while(n>0)
        {
            int x = n%10;
            n=n/10;
            cubicSum += (x*x*x);
        }
        
        if(num == cubicSum)
        return true;

        return false;
    }
};