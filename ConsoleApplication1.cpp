// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int foot;
	int inch;
public:
	void setFeet(int f, int i);
	void display();
	int getFoot();
	int getInch();
	CFeet addFeet(CFeet &od);
	CFeet operator + (CFeet &otemp);
};
CFeet CFeet::operator +(CFeet &otemp)
{
	CFeet temp;
	temp.setFeet(foot + otemp.foot, inch + otemp.inch);
	return temp;
}
CFeet CFeet::addFeet(CFeet &od)
{
	CFeet temp;
	temp.setFeet(foot + od.foot, inch + od.inch);
	return temp;
}
void CFeet::setFeet(int f, int i)
{
	foot = f + i / 12;
	inch = i % 12;
}
void CFeet::display()
{
	cout << "英尺=" << foot << "英寸=" << inch << endl;
}
int CFeet::getFoot()
{
	return foot;
}
int CFeet::getInch()
{
	return inch;
}
int main()
{
	CFeet A, B, C;
	A.setFeet(1, 1);
	B.setFeet(2, 18);
	C = A + B;
	A.display();
	B.display();
	C.display();
	return 0;
}