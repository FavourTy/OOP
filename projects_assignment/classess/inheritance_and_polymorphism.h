// Base class and Derived classes

#include <string>
class Employee
{
public:
    // Constructor
    Employee(const std::string &empName, double salary) : name{empName}, baseSalary{salary}
    {
    }

    // Virtual method to calculate and display the base salary of the employee
    virtual void calculateSalary() const
    {
        std::cout << "Base salary for " << name << ": $" << baseSalary << std::endl;
    }

    // Virtual method to set the employee's name
    virtual void setName(const std::string &employeeName)
    {
        name = employeeName;
    }

    // Virtual method to get the employee's name
    virtual std::string getName()
    {
        return name;
    }

    // Virtual method to set the employee's salary
    virtual void setSalary(double sal)
    {
        baseSalary = sal;
    }

    // Virtual method to get the employee's salary
    virtual double getSalary()
    {
        return baseSalary;
    }

    // data members
protected:
    std::string name;
    double baseSalary;
};

// Derived manager class
class Manager : public Employee
{
    // Manager class Data nmember
private:
    double bonus;

public:
    // constructor
    Manager(const std::string &empNam, double salary, double managerBonus) : Employee(empNam, salary), bonus(managerBonus)
    {
    }

    // Overrides the calculateSalary method to include the manager's bonus
    void calculateSalary() const
    {
        double totalSalary;
        totalSalary = baseSalary + bonus;
        std::cout << "Manager " << name << "' s Salary: $ " << totalSalary << "(Base : $" << baseSalary << " + Bonus: $ " << bonus << ")" << std::endl;
    }

    // Method to set the manager's bonus
    void setBonus(double myBonus)
    {
        bonus = myBonus;
    }

    // Method to get the manager's bonus
    double getBonus()
    {
        return bonus;
    }

    // Overrides the setName method for the manager
    void setName(const std::string &employeeName)
    {
        name = employeeName;
    }

    // Overrides the getName method for the manager
    std::string getName()
    {
        return name;
    }

    // Overrides the setSalary method for the manager
    void setSalary(double sal)
    {
        baseSalary = sal;
    }

    // Overrides the getSalary method for the manager
    double getSalary()
    {
        return baseSalary;
    }
};

// Derived class Engineeer
class Engineer : public Employee
{
    // Data member
private:
    int completedProjects;

public:
    // constructor
    Engineer(const std::string &empName, double salary, int compledProj) : Employee(empName, salary), completedProjects(compledProj)
    {
    }
    // Overrides the calculateSalary method to include project bonuses
    void calculateSalary() const
    {
        double projectbonus;
        double totalSalary;
        projectbonus = completedProjects * 1000;
        totalSalary = baseSalary + projectbonus;
        std::cout << "Engineer" << name << "' s Salary: $ " << totalSalary << "(Base : $" << baseSalary << " + Project Bonus: $ " << projectbonus << ")" << std::endl;
    }
};