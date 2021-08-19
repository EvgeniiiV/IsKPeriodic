#include <iostream>
using namespace std;


bool IsKPeriodic(const string &str, const int k)
{
    int size = str.size();    

    if (k <= 0 || k > size )
    {
        cout << "Invalid K" << endl;
        return false;
    }  

    if (size == 0)
    {
        cout << "Empty string" << endl;
        return false;
    } 

    if (k == size)
    {
        cout << "K = size" << endl;
        return true;
    }

    if (size % k)
    {
        cout << "This string isn't periodic for "<< k << endl;
        return false;
    } 

    int rate = size / k;
    int i = 0;
    int x = k;
    int mult = 1;

    while (i <= k)
    {        
        if (i == k || x == size )
        {
            cout << "This string is periodic for " << k << endl;
            return true;
        }   

        if (str[i] != str[x])
        {
            cout << "This string isn't periodic for "<< k << endl;
            return false;
        }       

        if (mult >= rate -1 )
        {
            i++;
            mult = 1;           
            x = i + mult * k;          

        }

        else 
        { 
            mult++;    
            x = i + mult * k;                    
        }        
    }
}
int main()
{
    string txt{ "aa" };
    IsKPeriodic(txt, 1);


    return 0;
}

