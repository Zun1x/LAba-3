#pragma once
#include <string>
#include <vector>
using namespace std;
class Goods
{
	mutable int G;
	static int count;
protected:
	string name;
public:
	void Add();
	Goods();
	Goods(string name);
	static void Print();
	void constMethod() const 
	{
		int G = 15;
	}
};

