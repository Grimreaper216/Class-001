#include<iostream>
#include"Counter.h"
#include"User.h"

using namespace std;

int main()
{
	int a = 0;
	Counter c1;
	c1.counting();
	c1.counting();
	cout << "c1 Count" << c1.getCount() << endl;

}