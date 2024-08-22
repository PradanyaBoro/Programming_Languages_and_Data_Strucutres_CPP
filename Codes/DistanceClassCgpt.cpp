#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    void getdist() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        if (feet < 0 || inches < 0) {
            cout << "Distance must be non-negative. Setting to zero." << endl;
            feet = 0;
            inches = 0.0;
        }
    }

    void showdist() const {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    Distance sumdist(const Distance& d2) const {
        Distance result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;

        // Convert excess inches to feet without using fmod or static_cast
        while (result.inches >= 12.0) {
            result.feet++;
            result.inches -= 12.0;
        }

        return result;
    }

    Distance mindist(const Distance& d2) const {
        Distance result;
        result.feet = feet - d2.feet;
        result.inches = inches - d2.inches;

        // Ensure inches are non-negative
        while (result.inches < 0.0) {
            result.feet--;
            result.inches += 12.0;
        }

        // Ensure the result is non-negative
        if (result.feet < 0 || result.inches < 0) {
            cout << "Result is negative. Setting to zero." << endl;
            result.feet = 0;
            result.inches = 0.0;
        }

        return result;
    }

    void selectionSort(Distance distances[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (distances[j].sumdist(Distance()).feet < distances[minIndex].sumdist(Distance()).feet ||
                    (distances[j].sumdist(Distance()).feet == distances[minIndex].sumdist(Distance()).feet &&
                     distances[j].sumdist(Distance()).inches < distances[minIndex].sumdist(Distance()).inches)) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                Distance temp = distances[i];
                distances[i] = distances[minIndex];
                distances[minIndex] = temp;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of distances: ";
    cin >> n;

    Distance distances[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Distance " << i + 1 << ":" << endl;
        distances[i].getdist();
    }

    cout << "Distances Entered:" << endl;
    for (int i = 0; i < n; i++) {
        distances[i].showdist();
    }

    Distance sum = distances[0].sumdist(distances[1]);
    cout << "Sum of the first two distances:" << endl;
    sum.showdist();

    Distance diff = distances[0].mindist(distances[1]);
    cout << "Difference of the first two distances:" << endl;
    diff.showdist();

    distances[0].selectionSort(distances, n);

    cout << "Sorted Distances in Ascending Order:" << endl;
    for (int i = 0; i < n; i++) {
        distances[i].showdist();
    }

    return 0;
}

