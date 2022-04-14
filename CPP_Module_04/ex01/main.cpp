#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal* array_animal[10];
	for(int i = 0; i < 10; ++i) {
		if (i < 5)
			array_animal[i] = new Dog();
		else
			array_animal[i] = new Cat();
	}
	std::cout << std::endl;
	for(int i = 0; i < 10; ++i) {
		std::cout << array_animal[i]->getType() << " ";
		array_animal[i]->makeSound();
	}
	std::cout << std::endl;
	for(int i = 0; i < 10; ++i) {
		delete array_animal[i];
	}

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    i->setIdea("Wiskas");
    i->setIdea("Milk");
    i->showIdeas();

    delete j;
    delete i;
    return 0;
}