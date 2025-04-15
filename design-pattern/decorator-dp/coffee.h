#ifndef COFFEE_H
#define COFFEE_H

#include <string>

// Abstract base class for coffee
class Coffee {
public:
    virtual ~Coffee() = default;
    virtual std::string getDescription() const = 0;
    virtual double getCost() const = 0;
};

// Abstract decorator class
class CoffeeDecorator : public Coffee {
protected:
    Coffee* coffee;
public:
    CoffeeDecorator(Coffee* coffee) : coffee(coffee) {}
    virtual ~CoffeeDecorator() {
        delete coffee;
    }
};

#endif // COFFEE_H 