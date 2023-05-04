#include "Product.h"
Product::Product() 
{

}
Product::Product(string name,int number) :Goods(name)
{
	this->number = number;
}