#ifndef EXPENSE_MANAGER_H
#define EXPENSE_MANAGER_H

#include <iostream>
#include <string>

class Expense {
private:
    std::string person;
    double amount;
public:
    Expense() : person("Unknown"), amount(0.0) {}
    Expense(std::string p, double a) : person(p), amount(a) {}
    Expense(const Expense& other) {
        person = other.person;
        amount = other.amount;
    }
    void setExpense(std::string p, double a) {
        person = p;
        amount = a;
    }

    void setExpense(double a) {
        amount = a;
    }

    void setExpense(std::string p) {
        person = p;
    }
    double getAmount() const {
        return amount;
    }

    std::string getPerson() const {
        return person;
    }
    Expense operator+(const Expense& other) const {
        return Expense("Combined", amount + other.amount);
    }
    Expense operator-(const Expense& other) const {
        return Expense("Difference", amount - other.amount);
    }
    Expense operator*(double factor) const {
        return Expense(person, amount * factor);
    }
    bool operator==(const Expense& other) const {
        return amount == other.amount;
    }

    bool operator<(const Expense& other) const {
        return amount < other.amount;
    }
    friend std::ostream& operator<<(std::ostream& out, const Expense& e) {
        out << "Person: " << e.person << ", Amount: " << e.amount;
        return out;
    }
};

#endif 
