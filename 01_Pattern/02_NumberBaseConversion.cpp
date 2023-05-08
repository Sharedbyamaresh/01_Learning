#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdint.h>
#include<string.h>


using namespace std;
class BaseConversion
{
    public:    
    string DecimalToBaseConversion(int number, int base)
    {
        int temp = number;
        long long binary=0;
        int exponent = 0;
        string str;
        
        while(temp != 0)
        {
            exponent +=1;
            temp /=base;
        }
        // cout << "exponent=" << exponent << endl;
        temp=0;
        // exponent--;
        while (exponent >= 0)
        {
            int digit=number/pow(base,exponent);
            number = number - (pow(base,exponent)*digit);
            binary = binary*10 + digit;
            if(digit > 9)
            {
                str.push_back('A' + digit-10);
            }
            else
            {
                str.push_back(48+digit);
            }
            
            exponent--;

            // cout << "dig=" << digit << endl;
            // cout << "num=" << number << endl;
            // cout << "pow=" << pow(base,exponent) << endl;
            // cout << "expo=" << exponent << endl;
        }
        // cout << "Binary String="<< str << endl;
        return str;    
    }

};


int main()
{
    BaseConversion obj;
    int val;
    cin >> val;
    std::cout << obj.DecimalToBaseConversion(val,2);
}
