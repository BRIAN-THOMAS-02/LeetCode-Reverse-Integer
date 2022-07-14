Reverse Integer - "https://leetcode.com/problems/reverse-integer/"
EXPLANATION

#include <bits/stdc++.h>
using namespace std;


class Solution 
{
public:
    int reverse(int x) 
    {
        string s = to_string(x);
        vector<int> vect(s.size());
        int n;
        
        //assigning the limits for the program
        double negative, positive;
        negative = -pow(2, 31);
        positive = pow(2, 31)-1;
        
        cout<<negative<<" < "<<positive;
        
        //condition to check if x is positive or negative
        if (x > 0)
        {
            n = s.size();
        }
        else
            n = s.size()-1;
            
        cout<<"\n\nn : "<<n;
        
        //putting the int elements into the vector
        for (int i=0; i<n; i++)
        {
            vect.push_back(x % 10);
            cout<<"\n\nx("<<x<<") % 10 : "<<x % 10;
            
            x = x / 10;
            cout<<"\nx("<<x<<") / 10 : "<<x;
        }
        
        //converting vector back to integer
        double result = 0;
        for (auto d : vect)  
        {
            result = result * 10 + d;
        }
        
        //playing with the result here to get desried output
        cout<<"\n\n";
        if(result < negative)
        {
            cout<<"\nNegative Edge Case: ";
            cout<<result<<" < "<<negative;
            cout<<"\n\nResult : "<<0;
            return 0;
        }
        if (result > positive)
        {
            cout<<"\nPositive Edge Case : ";
            cout<<result<<" > "<<positive;
            cout<<"\n\nResult : "<<0;
            return 0;
        }
        else
            return result;
    }
};



int main()
{
    Solution obj;
    obj.reverse(1534236469);
    
}
