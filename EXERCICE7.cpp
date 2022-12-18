#include <iostream>
using namespace std;
class Point{
private:
 double x;
 double y;
protected:
 string nom;
public:
Point(double x=0.0, double y=0.0, string nom="");
double getX();
 void setX(double x);
 double getY();
 void setY(double y);
 string getNom();
 void setNom(string nom);
 void afficher();
};
class PointCouleur:public Point{
private:
 unsigned int couleur;
public:
 PointCouleur(double x=0.0, double y=0.0, string nom="",unsigned int couleur=0);
 unsigned int getCouleur();
 void setCouleur(unsigned int couleur);
 void Afficher();
};
int main()
{
 return 0;
}

