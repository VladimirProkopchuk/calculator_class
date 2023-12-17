#include <iostream>

class calculator {
private:
    double num1 = 0 ; double num2 = 0;
public:
  
    double get_number1() { return num1; }
    double get_number2() { return num2; }

    bool set_n1(double value1) {
        if (value1 == 0) {
            return false;
        }
        else {
            value1 = get_number1();
            return true;
        }
    }

    bool set_n2(double value2) {
        if (value2 == 0) {
            return false;
        }
        else {
            value2 = get_number2();
            return true;
        }
    }

    double add() {
        return get_number1() + get_number2();
    }
    double subtract1_2() {
        return get_number1() - get_number2();
    }
    double subtract2_1() {
        return get_number1() - get_number2();
    }
    double multiply() {
        return get_number1() * get_number2();
    }
    double divide1_2() {
        return get_number1() / get_number2();
    }
    double divide2_1() {
        return get_number1() / get_number2();
    }
};


int main() {
    setlocale(LC_ALL, "rus");
    calculator create;
    double n1 = create.get_number1(); double n2 = create.get_number2();
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
        std::cout << n1 << " - " << n2 << " = " << create.subtract2_1() << '\n';
        std::cout << n1 << " * " << n2 << " = " << create.multiply() << '\n';
        std::cout << n1 << " / " << n2 << " = " << create.divide1_2() << '\n';
        std::cout << n1 << " / " << n2 << " = " << create.divide2_1() << '\n';
    }
}