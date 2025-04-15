#include <iostream>
#include "simple_coffee.h"
#include "milk_decorator.h"
#include "sugar_decorator.h"

void printCoffeeDetails(const Coffee& coffee) {
    std::cout << "Description: " << coffee.getDescription() << std::endl;
    std::cout << "Cost: $" << coffee.getCost() << std::endl;
    std::cout << "------------------------" << std::endl;
}

int main() {
    // Create a simple coffee
    Coffee* simpleCoffee = new SimpleCoffee();
    std::cout << "Simple Coffee:" << std::endl;
    printCoffeeDetails(*simpleCoffee);

    // Add milk to the coffee
    Coffee* milkCoffee = new MilkDecorator(simpleCoffee);
    std::cout << "Coffee with Milk:" << std::endl;
    printCoffeeDetails(*milkCoffee);

    // Add sugar to the coffee with milk
    Coffee* milkAndSugarCoffee = new SugarDecorator(milkCoffee);
    std::cout << "Coffee with Milk and Sugar:" << std::endl;
    printCoffeeDetails(*milkAndSugarCoffee);

    // Clean up
    delete milkAndSugarCoffee; // This will delete all the decorators and the base coffee

    return 0;
} 