Reverse Integer - "https://leetcode.com/problems/reverse-integer/"
Submission

class Solution 
{
public:
    int reverse(int x)
    {
        vector<int> vect;
        string s = to_string(x);    
        int n;
        double negative, positive;
        negative = -pow(2, 31);
        positive = pow(2, 31)-1;
    
        if (x < negative)
            return 0;
        if (x > positive)
            return 0;

        else
            if (x > 0)
                n = s.size();
            else
                n = s.size()-1;

            for (int i=0; i<n; i++)
            {
                vect.push_back(x % 10);
                x = x / 10;
            }

            double result = 0;
            for (auto d : vect)  
            {
                result = result * 10 + d;
            }
                
            if(result < negative)
                return 0;
            if (result > positive)
                return 0;
            else
                return result;
    }
};
