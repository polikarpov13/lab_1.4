#pragma once 
#include <string> 
#include <sstream>  

using namespace std;

class Triad {
private:
	int first;
	int second;
	int third;

public:
	int getFirst() const { return first; }
	void setFirst(int value) { first = value; }

	int getSecond() const { return second; }
	void setSecond(int value) { second = value; }

	int getThird() const { return third; }
	void setThird(int value) { third = value; }

	void Init(int firstValue, int secondValue, int thirdValue);
	void Display() const;
	void Read();

	bool Le(Triad t) const;
	bool Eq(Triad t) const;
	bool Gt(Triad t) const;
	bool Ne(Triad t) const;
	bool Leq(Triad t) const;
	bool Gtq(Triad t) const;

	const string toString();

	double check();
};