#include "Triad.h" 
#include <iostream> 

using namespace std;

void Triad::Init(int firstValue, int secondValue, int thirdValue) {
	setFirst(firstValue);
	setSecond(secondValue);
	setThird(thirdValue);
}

void Triad::Display() const {
	cout << first << "." << second << "." << third << endl;
}

void Triad::Read() {
	int firstValue;
	int secondValue;
	int thirdValue;

	cout << "Enter triad " << endl << endl;

	cout << "first =  "; cin >> firstValue;
	cout << "second =  "; cin >> secondValue;
	cout << "third =  "; cin >> thirdValue;

	Init(firstValue, secondValue, thirdValue);
}

bool Triad::Le(Triad t) const { 
	if (first < t.first) return true;	
	if (first > t.first) return false;	
	if (second < t.second) return true;	
	if (second > t.second) return false;	
	if (third < t.third) return true;	
	if (third > t.third) return false;	
	return false; 
}

bool Triad::Leq(Triad t) const { 
	if (first < t.first) return true;	
	if (first > t.first) return false;	
	if (second < t.second) return true;	
	if (second > t.second) return false;	
	if (third < t.third) return true;	
	if (third > t.third) return false;	
	return true; 
}

bool Triad::Eq(Triad t) const { 
	if ((first == t.first) && (second == t.second) && (third == t.third)) return true;	
	return false; 
}

bool Triad::Ne(Triad t) const { 
	if ((first == t.first) && (second == t.second) && (third == t.third)) return false;	return true; 
}

bool Triad::Gt(Triad t) const { 
	if (first < t.first) return false;	
	if (first > t.first) return true;	
	if (second < t.second) return false;	
	if (second > t.second) return true;	
	if (third < t.third) return false;	
	if (third > t.third) return true;	
	return false; 
}
bool Triad::Gtq(Triad t) const { 
	if (first < t.first) return false;	
	if (first > t.first) return true;	
	if (second < t.second) return false;	
	if (second > t.second) return true;	
	if (third < t.third) return false;	
	if (third > t.third) return true;	
	return true; 
}

const string Triad::toString() {

	stringstream sout;

	sout << first << "." << second << "." << third;

	return sout.str();

}

double Triad::check()
{
	return first > second;
}