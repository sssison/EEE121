#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pokemon {
    protected:
        string name;
        string type;
        int level;

    public:
        Pokemon(string n, string t, int lvl) : name(n), type(t), level(lvl) {
            std::cout << "Pokemon " << name << " of type " << type << " at level " << level << " created." << std::endl;
        }

        // Abstraction: Public methods to interact with the class
        void displayInfo();
        void levelUp();

        // Encapsulation: Helper functions to access private members
        string getName() const { return name; }
        int getLevel() const { return level; }
        void setLevel(int l) { level = l; }

        // Inheritance and Polymorphism: Virtual function for polymorphism
        virtual void attack() {
            std::cout << name << " attacks!" << std::endl;
        }
};

void Pokemon::displayInfo() {
            std::cout << "Name: " << name << ", Type: " << type << ", Level: " << level << std::endl;
}

// Inheritance: Creating a derived class
class Pikachu : public Pokemon {
    public:
        Pikachu(int lvl) : Pokemon("Pikachu", "Electric", lvl) {}
        
        // Inheritance and Polymorphism: Overriding the attack method
        void attack() override {
            std::cout << name << " uses Thunderbolt!" << std::endl;
        }
};

class Charmander : public Pokemon {
    public:
        Charmander(int lvl) : Pokemon("Charmander", "Fire", lvl) {}
        
        void attack() override {
            std::cout << name << " uses Flamethrower!" << std::endl;
        }
};

int main() {
    
    // Creating a Pokemon object
    Pokemon pikachu("Pikachu", "Electric", 5);
    pikachu.displayInfo();

    // Creating another Pokemon object
    Pokemon charmander("Charmander", "Fire", 8);
    charmander.displayInfo();

    // Encapsulation: Accessing private members through public methods
    cout << "Pikachu's level: " << pikachu.getLevel() << endl;
    pikachu.setLevel(10);
    cout << "Pikachu's new level: " << pikachu.getLevel() << endl;

    // Inheritance 
    Pikachu myPikachu(15);
    myPikachu.displayInfo();
    myPikachu.attack(); // Polymorphism

    Charmander myCharmander(12);
    myCharmander.displayInfo();
    myCharmander.attack(); // Polymorphism

    return 0;
}