#include <iostream>

class calculator {
public:
    double num1 = 0, num2 = 0;
    
    double add() {
        return num1 + num2;
    }
    double subtract1_2() {
        return num1 - num2;
    }
    double subtract2_1() {
        return num2 - num1;
    }
    double multiply() {
        return num1 * num2;
    }
    double divide1_2() {
        return num1 / num2;
    }
    double divide2_1() {
        return num2 / num1;
    }
    bool set_n1() {
        while (num1 == 0) {
            if (num1 == 0) {
                std::cout << "Неверный ввод" << std::endl;
                std::cout << "Введите второе число:";
                std::cin >> num1;
            }
            else { continue; }
        }
        return num1;
    }
    bool set_n2() {
        while (num2 == 0) {
            if (num2 == 0) {
                std::cout << "Неверный ввод" << std::endl;
                std::cout << "Введите второе число:";
                std::cin >> num2;
            }
            else { continue; }
        }
        return num2;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    calculator create;
    while (create.num1 >=0 && create.num2 >=0) {
        std::cout << "Введите первое число :";
        std::cin >> create.num1;
        create.set_n1();
        std::cout << "Введите второе число :";
        std::cin >> create.num2;
        create.set_n2();
        std::cout << create.num1 << " + " << create.num2 << " = " << create.add() << std::endl;
        std::cout << create.num1 << " - " << create.num2 << " = " << create.subtract1_2() << std::endl;
        std::cout << create.num2 << " - " << create.num1 << " = " << create.subtract2_1() << std::endl;
        std::cout << create.num1 << " * " << create.num2 << " = " << create.multiply() << std::endl;
        std::cout << create.num1 << " / " << create.num2 << " = " << create.divide1_2() << std::endl;
        std::cout << create.num2 << " / " << create.num1 << " = " << create.divide2_1() << std::endl;
     };
}
