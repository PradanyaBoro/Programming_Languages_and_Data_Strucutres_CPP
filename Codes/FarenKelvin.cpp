#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
   float fehrn;
        float kelvin;
     void convertTemperature(double celsius)
    {   
        fehrn=celsius*1.80+32.00;
        kelvin=celsius+273.15;
     
    }
};
int main()
{
    float cel=28.7;
    Solution s1;
    s1.convertTemperature(cel);
    
    //---Changes:
    vector<float>v1(2);
    v1[0] = s1.fehrn;
    v1[1] = s1.kelvin;
    // :Changes-------
    
    for(int i=0;i<v1.size();i++)
     cout<<v1[i]<<endl;
    
    return 0;
}
