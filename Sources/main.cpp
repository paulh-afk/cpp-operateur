#include "../Headers/Header.hpp"
#include "../Headers/Duree.hpp"

int main() {
  Duree duree1(0, 100, 100), duree2(3, 105), duree3(12);

  if(duree1 == duree2) {
    cout << "Les durées sont égales";
  } else {
    cout << "Les durées ne sont pas égales";
  }

  cout << endl
       << endl;

  duree1.afficher();

  cout << endl
       << endl;

  return 0;
}