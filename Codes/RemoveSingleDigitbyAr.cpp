//my attempt 
#include <iostream>
using namespace std;
int main()
{cout<<"here the code is begin"<<endl;
   string k = "1232";
   char digit = '2';
   int n = k.length();
   int p = 0;
   int m;
   string k1;
   

   int c[n];
   for (int i = 0; i < k.length(); i++)
      c[i] = -1;
   for (int i = 0; i < k.length(); i++)
      if (k[i] == digit)
      {
         c[p] = i;
         p++;
         m = p;
      
      }
      int b[m];
   for (int i = 0; i < m; i++)
      b[i] = 0;
      
   for (int i = 0; i < m; i++)
   {
      {
         if (c[i] != -1)
         {
            string s1 = k.substr(0, c[i]);
            string s2 = k.substr(c[i] + 1, k.length() - c[i]-1);
            k1 = s1 + s2;

            b[i] = stoi(k1);

      
         }
      }
   }
   for (int i = 0; i < m; i++)
      cout << b[i] << " ";
    cout << endl;
   int max=b[0];
    for (int i = 0; i < m; i++)
    {
    	if(max<b[i])
    	{
    		max=b[i];
    	}
	}
	cout<<max;
 
}
