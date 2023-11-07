class Solution {
public:
        bool isPalindrome(int x) 
    {       
        if(x < 0)
            return false;
        else if(x<10)
            return true;
        else if(x%10 == 0)
            return false;
        
        int y=0;
        int nx=x/10;
        do
        {
            y = y * 10 + x % 10;
            x =nx;
            nx /=10;
        } while(y < nx);
        return nx == y || x == y;
    }

};