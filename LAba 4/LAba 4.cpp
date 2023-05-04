#include <iostream>
#include "Goods.h"
#include"Toy.h"
#include"Product.h"
#include"MilkProd.h"
using namespace std;
int main()
{
	Goods* toy0 = new Toy("HotDick0", 18);
	toy0->Add();
	Goods* product0 = new Product("product0", 21);
	product0->Add();
	Goods* milkProd = new MilkProd("milk prod", 58);
	milkProd->Add();
	Goods::Print();

}

