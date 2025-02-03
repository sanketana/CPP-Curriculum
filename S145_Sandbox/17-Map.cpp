// Map
// Stores Key Value pairs
// Declare and Initialize a map
// Insert into a map
// Interate over a map
// Access a particular element of a map
// Deleting an element
// Check Size of the map
// Check if a key exist in map
// Clearning the map;

#include <iostream>
#include <map>
using namespace std;

int main() {
  // Declaration
  map<string, string> myPokemon;

  // Inserting into a map
  myPokemon["name"] = "Charizard";
  myPokemon["type"] = "Fire";
  myPokemon["move"] = "Flamethrower";

  // Printing a particular element
  cout << "The type of my Pokemon is: " << myPokemon["type"] << endl;

  // Iterate over a map
  for (const auto &pair : myPokemon) {
    cout << "[" << pair.first << " : " << pair.second << "]" << endl;
  }

  if (myPokemon.find("type") != myPokemon.end()) {
    cout << "The key type exist in the myPokemon map" << endl;
  } else {
    cout << "The key type does not exist in the myPokemon map" << endl;
  }

  // Deleting an element
  myPokemon.erase("type");
  // Iterate over a map
  for (const auto &pair : myPokemon) {
    cout << "[" << pair.first << " : " << pair.second << "]" << endl;
  }

  // checking the size
  cout << "The size of myPokemon is: " << myPokemon.size() << endl;

  // clearing a map
  myPokemon.clear();
  cout << "Map Cleared. Size of the map is: " << myPokemon.size() << endl;
}