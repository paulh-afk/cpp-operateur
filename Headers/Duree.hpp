#if !defined(DUREE)
#define DUREE

class Duree {
  private:
    int m_heures;
    int m_minutes;
    int m_secondes;

  public:
    Duree();
    Duree(int heures);
    Duree(int heures, int minutes);
    Duree(int heures, int minutes, int secondes);
    ~Duree();
    void afficher() const;
    bool estEgale(Duree duree) const;
    int enSecondes() const;
};

bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);

bool operator<(Duree const& a, Duree const& b);
bool operator<=(Duree const& a, Duree const& b);

bool operator>(Duree const& a, Duree const& b);
bool operator>=(Duree const& a, Duree const& b);

#endif // DUREE
