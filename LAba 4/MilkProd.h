#pragma once
#include "Product.h"
class MilkProd : public Product
{
	double expiration_d;
public:
	MilkProd();
	MilkProd(string name, double expiration_d);
};
