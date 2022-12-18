
#include <iostream>

using namespace std;
class Repas{
private:
string nom;
int heur;
string decristion;


};
class element{
private:
string nom;
string type;
};
class chat{
private:
string type;
public:
int sauter();
Repas*chef;
};
class animal:public chat {
private:
string nom;
int age;
string genre;
};
class chien{
private:
string taille;
public :
 int ischass3();


};
class entraineur{
private:
string nom;
string decristion;
};
class compition {
private:
string date;
string nom;
int ordre;
};
class race :public chien{
protected:
string specificite;
 int isracehybride();
};
int main()
{



    return 0;
}

