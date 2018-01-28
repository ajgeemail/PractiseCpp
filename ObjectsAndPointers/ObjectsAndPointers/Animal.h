#pragma once
class Animal
{
private:
   int legs;
   int weight;
   int eyes;
   int iq;
public:
   Animal(int legs, int weight, int eyes, int iq);
   ~Animal();

   inline int getLegs() { return legs; }
   inline int getWeight() { return weight; }
   inline int getEyes() { return eyes; }
   inline int getIq() { return iq; }

   inline void setLegs(int newLegs) { legs = newLegs; }
   inline void setWeight(int newWeight) { weight = newWeight; }
   inline void setEyes(int newEyes) { eyes = newEyes; }
   inline void setIq(int newIq) { iq = newIq; }
   
   Animal compareIq(Animal one, Animal two);
};

