#include "Goods.h"
#include <iostream>
using namespace std;


Goods** goods = new Goods * [10];
int Goods::count = -1;
Goods::Goods() 
{
	++count;
}
Goods::Goods(string name) 
{
	this->name = name;
	++count;
}
void Goods::Add()
{
	::goods[count] = this;//ц€ фц≥€ передаЇ сама себе в масив по ≥ндексу каунт
}
void Goods::Print() 
{
	for (int i = 0; i <= count; i++) 
	{
		cout << goods[i]->name << endl;
	}
}

