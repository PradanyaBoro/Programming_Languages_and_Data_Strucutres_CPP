/*----Insertion Sort Without Loop----*/

#include <iostream>
using namespace std;

int insertion (int arr[], int n, int j, int temp)
{
    if(j >= 0 && arr[j] > temp)
    {
        arr[j+1] = arr[j];
		return insertion (arr, n, j - 1, temp);
    }
    return j + 1;
}

void insertionsort(int arr[], int n, int i)
{
    if(i < n)
    {
        int temp = arr[i];
        int j = insertion (arr, n, i - 1, temp);
        arr[j] = temp;
        insertionsort(arr, n, i+1);
    }
}
int main()
{
   int n;
   cout << "Enter length" << endl;
   cin >> n;
   
   int arr[n];
   cout << "Enter elements:\n";
   for(int i=0; i < n; i++)
   {
       cin >> arr[i];
   }
   
   insertionsort(arr, n, 1);
   
   for(int i=0; i < n; i++)
   {
       cout << arr[i] << " ";
   }
   
   
   return 0;
}
