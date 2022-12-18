
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout; using std::endl;
using std::string; using std::vector;
//a bull
template<typename T>
void printVector(const vector<T> &vec) {
 for (auto &i : vec) {
 cout << i << "; ";
 }
 cout << endl;
}
template<typename T>
void bubbleSort(vector<T> &vec) {
 for (size_t i = 0; i < vec.size() - 1; ++i) {
 for (size_t j = 0; j < vec.size() - i - 1; ++j) {
 if (vec.at(j) > vec.at(j + 1))
 std::swap(vec.at(j), vec.at(j + 1));
 }
 }
}
int main()
{
 vector<int> vec1 = { 43, 5, 123, 94, 359, -23, 2, -1 };
 printVector(vec1);
 bubbleSort(vec1);
 printVector(vec1);
 return EXIT_SUCCESS;
}
//par insertion
void afficher(list <int> liste)
{
 for (int elem : liste) {
 cout << elem <<" ";
 }
 cout << "\n";
}
int main (){
 list<int> liste1; // liste vide
 cout<< "Contenu de Liste1 : "<<"\n";
 afficher(liste1);
 list<int> liste2 = { 12, 5, 10, 9 }; // liste avec 4 éléments
 cout<< "Contenu de Liste2 : "<<"\n";
 afficher(liste2);
 list<int> liste3(4,2); // liste avec 4 éléments
 cout<< "Contenu de Liste3 : "<<"\n";
 afficher(liste3);
 list<int> liste4=liste2; // opérateur d'affectation
 cout<< "Contenu de Liste4 : "<<"\n";
 afficher(liste4);
 return 0;
}
 //par sélection
 int main()
{
 vector<int> vr{35,67,11,-9,7,-22}; //vector
 cout << "The vector after partial sorting is : \n";
 partial_sort(vr.begin(),vr.begin()+2,vr.end());
 for (int i = 0; i < vr.size(); ++i)
 cout << vr[i] << " ";
 return 0;
}

