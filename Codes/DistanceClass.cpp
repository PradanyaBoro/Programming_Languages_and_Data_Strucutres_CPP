#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Constructor to initialize feet and inches to zero
    Distance() {
        feet = 0;
        inches = 0;
    }

    // Function to display the distance
    void showdist() {
        cout << feet << " feet, " << inches << " inches" << endl;
    }

    // Function to get distance from the user
    void getdist() {
        cin >> feet;
        cin >> inches;
    }

    // Function to set distance with provided values
    void getdist(int f, float i) {
        feet = f;
        inches = i;
    }

    // Function to add two distances
    void sumdist(Distance d1, Distance d2) {
        int x;
        float y;

        x = d1.feet + d2.feet;
        y = d1.inches + d2.inches;

        if (y >= 12) {
            x++;
            y = y - 12;
        }
        feet = x;
        inches = y;
    }

    // Function to subtract two distances
    void mindist(Distance d1, Distance d2) {
        Distance max;
        Distance min;

        if (d1.feet == d2.feet) {
            if (d1.inches <= d2.inches) {
                min = d1;
                max = d2;
            } else {
                min = d2;
                max = d1;
            }
        } else if (d1.feet <= d2.feet) {
            min = d1;
            max = d2;
        } else {
            min = d2;
            max = d1;
        }

        int x = max.feet - min.feet;
        float y = max.inches - min.inches;

        if (y < 0) {
            y = 12 + y;
            x--;
        }

        feet = x;
        inches = y;
    }

    // Function to swap two Distance objects
    void swap(Distance arr[], int i, int j) {
        Distance temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Function to sort an array of Distance objects in ascending order
    void selectionSort(Distance arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j].feet == arr[min].feet) {
                    if (arr[j].inches < arr[min].inches) {
                        min = j;
                    }
                } else if (arr[j].feet < arr[min].feet) {
                    min = j;
                }
            }
            if (min != i) {
                swap(arr, min, i);
            }
        }

        cout << "Sorted array is: " << endl;
        for (int i = 0; i < n; i++) {
            arr[i].showdist();
        }
    }
};

int main() {
    int n;
    cout << "Enter length of your distance array: ";
    cin >> n;

    Distance arr[n], temparr;
    cout << "Enter the feet and inches of each distance: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter distance " << i + 1 << endl;
        arr[i].getdist();
    }

    Distance sum, diff;
    sum.sumdist(arr[0], arr[1]);
    diff.mindist(arr[0], arr[1]);

    cout << "Distance obtained after adding first two distances is:" << endl;
    sum.showdist();

    cout << "Distance obtained after subtracting first two distances is:" << endl;
    diff.showdist();

    temparr.selectionSort(arr, n);

    return 0;
}

