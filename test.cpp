#include "circular_card.h" 
#include "rectangular_card.h" 
#include<iostream> 

#define PI 3.14159
using namespace std;

void testArea(); // Functions to test area and perim. 
void testPerim(); // Will output a PASS or FAIL message. 

void testArea()
{
	rectangular_card<double> rc(2, 3); // Rectangle that is 2x3.
	circular_card<double> cc(5); // Circle with radius 5.
	card<double> *pc = &rc;


	int testCount = 0;
	if (pc->area() == 6)
	{
		testCount++;
	}

	pc = &cc;
	if (pc->area() == (PI * 5 * 5))
	{
		testCount++;
	}

	if (testCount == 2)
	{
		cout << "testArea():PASSED\n";
	}
	else
	{
		cout << "testArea():FAILED\n";
	}
	
}

void testPerim()
{
	rectangular_card<double> rc(2, 3);
	circular_card<double> cc(5);
	card<double>* pc = &rc;

	int testCount = 0;
	if (pc->perimeter() == 10)
	{
		testCount++;
	}

	pc = &cc;
	if (pc->perimeter() == (2 * PI * 5))
	{
		testCount++;
	}

	if (testCount == 2)
	{
		cout << "testPerimeter():PASSED\n";
	}
	else
	{
		cout << "testPerimeter():FAILED\n";
	}
}

int main() {
  
	testArea();
	testPerim();
}

