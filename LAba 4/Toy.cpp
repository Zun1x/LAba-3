#include "Toy.h"
Toy::Toy()
{

}
Toy::Toy(string name, int age) :Goods(name) 
{
	this->age = age;
}