#include "Animal.h"



Animal::Animal(int lgs, int w8, int eys, int smarts)
{
   legs = lgs;
   weight = w8;
   eyes = eys;
   iq = smarts;

}


Animal::~Animal()
{
}

Animal Animal::compareIq(Animal one, Animal two)
{
   int iqOne = one.getIq();
   int iqTwo = two.getIq();
   if (iqOne > iqTwo)
      return one;
   else if (iqTwo > iqOne)
      return two;
   else if (iqOne == iqTwo)
   {
      two.setIq(iqTwo + 50);
      return two;
   }
}
