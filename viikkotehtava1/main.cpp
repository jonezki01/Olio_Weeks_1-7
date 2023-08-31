#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int game(int maxnum) {

    srand(time(0));

    int satunnainenLuku = rand() % maxnum +1;
    int kayttajanNumero = -1;
    int montakoArvausta = 0;

    while(kayttajanNumero != satunnainenLuku)
    {
        cout << "Arvaa luku 1-" << maxnum << " valilta" << endl;
        cin >> kayttajanNumero;
        montakoArvausta++;

        if(satunnainenLuku > kayttajanNumero) {
            cout << "Antamasi luku on liian pieni!" << endl;
        }
        else if (satunnainenLuku < kayttajanNumero) {
            cout << "Antamasi luku on liian suuri!" << endl;
        }
        else {
            cout << "Onneksi olkoon! arvasit oikean luvun." << endl;
            break;
        }
    }
    return montakoArvausta;
}

int main()
{

    cout << "RANDMAX = " << RAND_MAX <<endl;
    cout << "Time = "<< time(0) <<endl;

    int maxnum = 40;
    int montakoArvausta = game(maxnum);

    cout << "Arvausten maara: " << montakoArvausta << endl;

    return 0;
}





