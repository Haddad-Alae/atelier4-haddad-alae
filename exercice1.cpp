#include <iostream>
#include<math.h>
using namespace std;
class Complexe{
private:
 double re, im;
 double PI;
public:
Complexe ( double re , double im )
{ re = re ; im = im ; }
double module ( )
{ return sqrt( re* re + im* im ) ; }
double argument ( ) { return re==0? PI /2 : atan ( im / re ) ; }
double partieReelle ( ) { return re ; }
double parteImaginaire ( ) { return im ; }
Complexe somme ( Complexe z ) {
Complexe res = z ;
res.re += re ;
res.im += im ;
return res ;
}
Complexe produit( Complexe z ) {
Complexe res=z;
res.re = re *z.re - im * z.im ;
res.im = re*z.im + im*z.re ;
return res;
}
void printComplexe ( Complexe z ) {
cout << "( "
<< z.partieReelle ( )
<<" +i"
<<z.parteImaginaire ( )
<<")\n " ;
}
};
int main()
{
Complexe z1(0,0); // = 0
Complexe z2 (2,0 ) ; // = 2 + 0 i
Complexe z3 ( 1,1 ) ; // = 1 + i
z1.printComplexe(z1) ;
z2.printComplexe ( z2 ) ;
z3.printComplexe ( z3 ) ;
cout << "module = " << z3.module ( ) << endl ;
cout << "argument = " << z3.argument ( ) << endl ;
cout << "somme = " ;z3.printComplexe ( z3.somme ( z3 ) ) ;
cout << "produit = " ; z3.printComplexe ( z3.produit ( z3 ) ) ;
return 0 ;
}

