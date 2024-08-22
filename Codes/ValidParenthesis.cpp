#include <iostream>
using namespace std;
char pairs1(char s)
{
    char a[3] = {'(', '{', '[',};
    char b[3] = {')', '}', ']'};

    for (int i = 0; i < 3; i++)
    {
        if (s == a[i])
            return b[i];
    }
}
int main()
{
    string k = "({)}";
    int current = 0;
	int temp_len = k.length();
    if (k.length() % 2 == 0)
    {
        for (int i = 0; i < k.length() - 1; i++)
        {
            if (i != temp_len)
                for (int j = i + 1; j < temp_len; j++)
                {
                    if (k[j] == pairs1(k[i]))
                    {
                        current = 1;
                        temp_len = j + 1; 
                        break;
                    }
                    else
                    {
                    	current = 0;
					}
                }
            if(current == 0)
            {
            	break;    	
			}
        }
    }
    
    if (current == 1)
        cout << "it has valid pairs of parantheses";
    else if (current == 0)
        cout << "invalid pairs of parantheses";
}
