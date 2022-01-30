#include "../Headers/Duree.hpp"

#include <iostream>

using namespace std;

Duree::Duree() : m_heures(0), m_minutes(0), m_secondes(0) {}

Duree::Duree(int heures) : m_minutes(0), m_secondes(0) {
  if(heures >= 24) {
    m_heures = 23;
  } else {
    m_heures = heures;
  }
}

Duree::Duree(int heures, int minutes) : m_secondes(0) {
  if(minutes >= 60) {
    while(minutes >= 60) {
      heures++;
      minutes -= 60;
    }
  }
  m_minutes = minutes;

  if(heures >= 24) {
    m_heures = 23;
  } else {
    m_heures = heures;
  }
}

Duree::Duree(int heures, int minutes, int secondes) {
  if(secondes >= 60) {
    while(secondes >= 60) {
      minutes++;
      secondes -= 60;
    }
  
  }
  m_secondes = secondes;

  if(minutes >= 60) {
    while(minutes >= 60) {
      heures++;
      minutes -= 60;
    }
  }
  m_minutes = minutes;

  if(heures >= 24) {
    m_heures = 23;
  } else {
    m_heures = heures;
  }
}

Duree::~Duree() {
  // destructeur
}

void Duree::afficher() const {
  cout << m_heures << ":" << m_minutes << ":" << m_secondes;
}

bool Duree::estEgale(Duree duree) const {
  if(m_heures == duree.m_heures && m_minutes == duree.m_minutes && m_secondes == duree.m_secondes) {
    return true;
  }
  return false;
}

int Duree::enSecondes() const {
  return m_heures * 60 * 60 + m_minutes * 60 + m_secondes;
}

bool operator==(Duree const& a, Duree const& b) {
  return a.estEgale(b);
}

bool operator!=(Duree const& a, Duree const& b) {
  return !(a == b);
}

bool operator<(Duree const& a, Duree const& b) {
  if(a.enSecondes() < b.enSecondes()) {
    return true;
  }
  return false;
}

bool operator<=(Duree const& a, Duree const& b) {
  if(a.enSecondes() <= b.enSecondes()) {
    return true;
  }
  return false;
}

bool operator>(Duree const& a, Duree const& b) {
  return !(a < b);
}

bool operator>=(Duree const& a, Duree const& b) {
  if(a.enSecondes() >= b.enSecondes()) {
    return true;
  }
  return false;
}