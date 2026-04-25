#include <iostream>
#include "header.h"

int main() {

    Expense e1;  
    Expense e2("Ali", 500);  
    Expense e3(e2);  

    e1.setExpense("Ahmed", 300);
    e3.setExpense(700);  
    e2.setExpense("Sara");  

    std::cout << "\n--- Expenses ---\n";
    std::cout << e1 << std::endl;
    std::cout << e2 << std::endl;
    std::cout << e3 << std::endl;

    Expense total = e1 + e3;
    Expense diff = e3 - e1;
    Expense scaled = e1 * 2;

    std::cout << "\n--- Operations ---\n";
    std::cout << "Total: " << total << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Scaled: " << scaled << std::endl;
    std::cout << "\n--- Comparison ---\n";
    if (e1 == e3)
        std::cout << "Equal amounts\n";
    else
        std::cout << "Not equal\n";

    if (e1 < e3)
        std::cout << e1.getPerson() << " spent less than " << e3.getPerson() << std::endl;

    return 0;
}