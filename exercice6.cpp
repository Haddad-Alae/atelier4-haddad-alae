#include <iostream>
using namespace std;
class test
{
static int tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5};
static int division(int indice,int diviseur){return tableau[indice]/diviseur;}
public static void main(String[] args)
{int x, y;bool eanok =true;
do
 {try{Terminal.ecrireString("Entrezl'indicedel'entieradiviser:");
x = Terminal.lireInt();
Terminal.ecrireString("Entrezlediviseur:");
y = Terminal.lireInt();
Terminal.ecrireStringln("Leresultatdeladivisionest:");
Terminal.ecrireIntln(division(x,y));}
catch(ArithmeticException e){Terminal.ecrireStringln("Lediviseurnedoitpasetrenul.");
ok =false;
}
catch(ArrayIndexOutOfBoundsException e)
{Terminal.ecrireString("L'indicedoitetrecomprisentre0");
Terminal.ecrireStringln("et" + (tableau.length -1) + ".");
ok =false;}catch(TerminalException e)
{Terminal.ecrireStringln("Vousdevezentrerunnombreentier.");
ok =false;}
while(!ok);}}

