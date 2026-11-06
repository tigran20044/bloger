#include<iostream>

int main() {
    int age;
    int fuel;
    int money;
    int subscription;
    int blocked;

    std::cin >> age >> fuel >> money >> subscription >> blocked;

    if ((age < 0 || age > 120) ||
        (fuel < 0 || fuel > 100) ||
        (money < 0 ||
        (subscription != 0 && subscription != 1)) ||
        (blocked != 0 && blocked != 1)) {

        std::cout << "Ошибка данных" << std::endl;

    } else if (blocked == 1) {

        std::cout << "Аккаунт заблокирован" << std::endl;

    } else if (age < 21) {

        std::cout << "Возраст не подходит" << std::endl;

    } else if (fuel < 20) {

        std::cout << "Недостаточно топлива" << std::endl;

    } else if (money < 500 && subscription == 0) {

        std::cout << "Недостаточно средств" << std::endl;

    } else {

        std::cout << "Поездка разрешена" << std::endl;
    }
}