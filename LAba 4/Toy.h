#pragma once
#include"Goods.h"
class Toy: public Goods
{
	int age;
public:
	Toy();
	Toy(string name,int age);
};

