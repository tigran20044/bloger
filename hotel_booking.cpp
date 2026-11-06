#include<iostream>
#include<string>

int main() {
    std::string name;
    int age;
    int nights;
    int money;
    int breakfast;

    std::cin >> name;
    std::cin >> age >> nights >> money >> breakfast;

    int total = nights * 2000 + nights * breakfast * 350;

    if ((age < 0 || age > 120) ||
        (nights < 1 || nights > 14) ||
        (money < 0) ||
        (breakfast != 0 && breakfast != 1)) {

        std::cout << "Ошибка данных" << std::endl;

    } else if (age < 18) {

        std::cout << "Бронирование запрещено" << std::endl;

    } else if (money < total) {

        std::cout << "Недостаточно средств" << std::endl;

    } else {

        std::cout << "Гость: " << name << std::endl;
        std::cout << "Стоимость: " << total << std::endl;
        std::cout << "Бронирование оформлено" << std::endl;
    }
}
