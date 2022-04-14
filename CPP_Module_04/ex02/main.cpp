#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    //Animal animal;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->setIdea("Wiskas");
    i->setIdea("Milk");
    i->showIdeas();

    delete j;
    delete i;
    return 0;
}