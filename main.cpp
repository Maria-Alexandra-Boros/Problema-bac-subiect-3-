/*Primii termeni ai șirului definit alăturat
(unde n este un număr natural nenul)
sunt:
0, 3, 8, 15, 24, 35, 48, 63, 80 ....
Se citesc de la tastatură două numere naturale din intervalul [0,109], x și y,
reprezentând valorile a doi termeni aflați pe poziții consecutive în şirul dat (x<y), şi se
cere să se scrie în fişierul text bac.txt, în ordine strict descrescătoare, separați prin câte
un spațiu, toţi termenii şirului mai mici sau egali cu y.
Proiectați un algoritm eficient din punctul de vedere al timpului de executare și al memoriei
utilizate.
Exemplu: dacă se citesc numerele
48 63
fişierul bac.txt conţine numerele
63 48 35 24 15 8 3 0
*/
#include <fstream>
#include<iostream>
using namespace std;
ofstream f("bac.txt");
int x,y,n;
int main()
{
    cin>>x>>y;
    f<<y<<" "<<x<<" ";
    while(n!=3)
    {
        n=2*x+2-y;
        f<<n<<" ";
        y=x;
        x=n;
    }
    f<<"0";
    f.close();
    return 0;
}
