/*
#include<iostream>
using namespace std;

int main()
{
	int len = 10;
	int arr[len];
	int i;
	for(int i= 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 2; i < len - 1; i++)
	{
		arr[i] = arr[i+1];
	}
	len--;
	
	for(int i= 0; i < len; i++)
	{
		cout << arr[i];
	}
}
*/

#include <iostream>
using namespace std;

int main() {
    int len = 3;
    int arr[len];
    int i;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    for (int i = 2; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }

    len--;

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

