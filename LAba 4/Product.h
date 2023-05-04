#pragma once
#include "Goods.h"
class Product : public Goods
{
	int number;
public:
	Product();
	Product(string name, int number);
};

