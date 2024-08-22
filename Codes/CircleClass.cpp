#include<iostream>
#include<cmath>
using namespace std;

class Circle
{
	private:
		double radius;
	public:
		void circleInfo(double rad)
		{
			radius = rad;
		}
		
		void area()
		{
			double a = 3.14159 * (pow(radius, 2));
			cout << "Area is: " << a << endl;
		}
		
		void circumference()
		{
			double c = 2 * 3.1415 * radius;
			cout << "Circumference is: " << c << endl;
		}
};

int main()
{
	Circle circle1;
	double rad;
	cout << "Enter radius: \n";
	cin >> rad;
	circle1.circleInfo(rad);
	
	circle1.area();
	circle1.circumference();
	
	return 0;
}
