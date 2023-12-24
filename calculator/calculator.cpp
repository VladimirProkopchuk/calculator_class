#include <iostream>

class calculator {
private:
    double num1 = 1 ; double num2 = 1;
public:
  calculator() = default;
 // calculator (double n1, double n2) : num1(n1), num2(n2){}
  double get_number1(){return num1; }
  double get_number2() { return num2; }

    bool set_n1(double value1) {
        if (value1 == 0) {
            return false;
        }
        else {
            num1 = value1;
            return true;
        }
    }

    bool set_n2(double value2) {
        if (value2 == 0) {
            return false;
        }
        else {
            num2 = value2;
            return true;
        }
    }

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
};


int main() {
    setlocale(LC_ALL, "Russian");
    double n1 = 0.1, n2 = 0.1;
    calculator create;
    while (n1 >= 0 && n2 >= 0) {
        std::cout << "Введите первое число:";
        std::cin >> n1;
        while (create.set_n1(n1) == false) {
            std::cout << "ошибка " << "\n" << "Введите первое число: ";
            std::cin >> n1;
            
        }
    

        std::cout << "Введите второе число:";
        std::cin >> n2;
        while  (create.set_n2(n2) == false) {
            std::cout << "Ошибка " << '\n' << "Введите второе число: ";
            std::cin >> n2;
        }
     

        std::cout << n1 << " + " << n2 << " = " << create.add() << '\n';
        std::cout << n1 << " - " << n2 << " = " << create.subtract1_2() << '\n';
        std::cout << n2 << " - " << n1 << " = " << create.subtract2_1() << '\n';
        std::cout << n1 << " * " << n2 << " = " << create.multiply() << '\n';
        std::cout << n1 << " / " << n2 << " = " << create.divide1_2() << '\n';
        std::cout << n2 << " / " << n1 << " = " << create.divide2_1() << '\n';
    }
}