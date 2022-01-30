#include "../Headers/Header.hpp"
#include "../Headers/Duree.hpp"

int main() {
  Duree duree1(4, 50), duree2(3, 105), duree3(12);

  if(duree1 >= duree2) {
    cout << "Duree1 est supérieur ou égale à Duree2";
  }
  else {
    cout << "Duree1 inférieur à Duree2";
  }

  cout << endl
       << endl;

  cout << "Duree1 : ";
  duree1.afficher();

  cout << endl
       << endl;

  cout << "Duree2 : ";
  duree2.afficher();

  cout << endl
       << endl;

  return 0;
}