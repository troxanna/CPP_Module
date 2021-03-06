#pragma once
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    //добавить конструктор копирвоания и оператор присваивания
    Animal( void );
    virtual ~Animal();
    virtual void makeSound() const;
    const std::string & getType() const;
    Animal & operator=(const Animal & other);
    Animal(const Animal & other);
};
