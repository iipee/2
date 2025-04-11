#include <iostream>
#include <string>

class Character {
private:
    std::string name;
    int health;
    int attack;
    int defense;

public:
    // Конструктор
    Character(const std::string& n, int h, int a, int d)
        : name(n), health(h), attack(a), defense(d) {
        std::cout << "Character " << name << " created!\n";
    }

    // Деструктор
    ~Character() {
        std::cout << "Character " << name << " destroyed!\n";
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", HP: " << health
                  << ", Attack: " << attack << ", Defense: " << defense << std::endl;
    }
};

class Monster {
private:
    std::string name;
    int health;
    int attack;
    int defense;

public:
    // Конструктор
    Monster(const std::string& n, int h, int a, int d)
        : name(n), health(h), attack(a), defense(d) {
        std::cout << "Monster " << name << " created!\n";
    }

    // Деструктор
    ~Monster() {
        std::cout << "Monster " << name << " destroyed!\n";
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", HP: " << health
                  << ", Attack: " << attack << ", Defense: " << defense << std::endl;
    }
};

// Новый класс Weapon
class Weapon {
private:
    std::string name;
    int damage;
    int weight;

public:
    // Конструктор
    Weapon(const std::string& n, int d, int w)
        : name(n), damage(d), weight(w) {
        std::cout << "Weapon " << name << " created!\n";
    }

    // Деструктор
    ~Weapon() {
        std::cout << "Weapon " << name << " destroyed!\n";
    }

    // Метод для вывода информации
    void displayInfo() const {
        std::cout << "Weapon: " << name << ", Damage: " << damage
                  << ", Weight: " << weight << std::endl;
    }
};

int main() {
    // Создание объектов Character и Monster
    Character hero("Hero", 100, 20, 10);
    Monster goblin("Goblin", 50, 15, 5);

    std::cout << "\nDisplaying Character and Monster info:\n";
    hero.displayInfo();
    goblin.displayInfo();

    // Создание объектов Weapon
    std::cout << "\nCreating weapons:\n";
    Weapon sword("Sword", 25, 5);
    Weapon axe("Axe", 30, 8);
    Weapon dagger("Dagger", 15, 2);

    // Вывод информации об оружии
    std::cout << "\nDisplaying weapon info:\n";
    sword.displayInfo();
    axe.displayInfo();
    dagger.displayInfo();

    // Объекты будут автоматически уничтожены при выходе из области видимости
    std::cout << "\nEnd of main() - objects will be destroyed:\n";
    return 0;
}