#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    //Animal animal;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->getBrain()->setIdea("Wiskas");
	i->getBrain()->setIdea("Milk");
    i->getBrain()->showIdeas();

    delete j;
    delete i;
    return 0;
}