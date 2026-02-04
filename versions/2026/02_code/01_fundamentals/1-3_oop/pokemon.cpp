#include <iostream>
#include <string>
using namespace std;

// Class implementation for Pokemon
class Pokemon {
    protected:
        string name;
        string type;
        int level;

    public:
        Pokemon(string n, string t, int lvl) : name(n), type(t), level(lvl) {
            std::cout << "Pokemon " << name << " of type " << type << " at level " << level << " created." << std::endl;
        }
        void displayInfo();
        void levelUp();

        // Helper functions to access private members
        string getName() const { return name; }
        int getLevel() const { return level; }
        void setLevel(int l) { level = l; }
};

void Pokemon::displayInfo() {
    std::cout << "Name: " << name << ", Type: " << type << ", Level: " << level << std::endl;
}

void Pokemon::levelUp() {
    level++;
    std::cout << name << " leveled up to " << level << "!" << std::endl;
}

// Pokemon storage
class Pokemon_Storage {
    private:
        vector<Pokemon*> pokemonList;

    public:
        void addPokemon(Pokemon* p);
        void showAll() const;
};

void Pokemon_Storage::addPokemon(Pokemon* p) {
    pokemonList.push_back(p);       // Ilagay mo sa dulo yung new pokemon
    cout << p->getName() << " added\n";
}

void Pokemon_Storage::showAll() const {
    cout << "Your Pokemon:\n";
    for (const auto& p : pokemonList) {
        p->displayInfo();
    }
}

int main() {

    // Creating a Pokemon object
    Pokemon pikachu("Pikachu", "Electric", 5);
    pikachu.displayInfo();

    // Creating another Pokemon object
    Pokemon charmander("Charmander", "Fire", 8);
    charmander.displayInfo();

    // Using Pokemon Storage
    Pokemon_Storage storage;
    storage.addPokemon(&pikachu);
    storage.addPokemon(&charmander);
    storage.showAll();

    return 0;
}