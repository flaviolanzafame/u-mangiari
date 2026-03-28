#include <iostream>
#include <string>
using namespace std;

int main() {
    const int nTav = 10;
    int posti[nTav] = {2, 3, 4, 4, 5, 5, 6, 7, 8, 8};
    bool occ[nTav] = {false};
    string nome[nTav], note[nTav];
    int persone[nTav], tav[nTav];
    int nPren = 0, scelta, tavTrov, i;

    do {
        cout << "\n--- 'U Mangiari ---\n";
        cout << "1. Prenota un tavolo\n";
        cout << "2. Riepilogo prenotazioni\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        if (scelta == 1) {
            if (nPren < nTav) {
                cin.ignore();
                cout << "\nNome: ";
                getline(cin, nome[nPren]);
                cout << "Persone: ";
                cin >> persone[nPren];

                tavTrov = -1;
                for (i = 0; i < nTav; i++) {
                    if (!occ[i] && posti[i] >= persone[nPren]) {
                        tavTrov = i;
                        break;
                    }
                }

                if (tavTrov != -1) {
                    cin.ignore();
                    cout << "Richieste particolari (compleanno, intolleranze, ecc...): ";
                    getline(cin, note[nPren]);

                    occ[tavTrov] = true;
                    tav[nPren] = tavTrov + 1;
                    nPren++;
                    cout << "\nPrenotazione effettuata. Tavolo " << tavTrov + 1 << endl;
                } else {
                    cout << "\nNessun tavolo disponibile per " << persone[nPren] << " persone.\n";
                }
            } else {
                cout << "\nTutti i tavoli sono già prenotati.\n";
            }
        }

        else if (scelta == 2) {
            cout << "\n--- Riepilogo prenotazioni ---\n";
            if (nPren == 0) {
                cout << "Nessuna prenotazione.\n";
            } else {
                for (i = 0; i < nPren; i++) {
                    cout << i + 1 << ") Tavolo " << tav[i];
                    cout << " - Nome: " << nome[i];
                    cout << " (" << persone[i] << " persone)";
                    cout << " - Note: " << note[i] << endl;
                }
            }
        }

        else if (scelta >= 3) {
            cout << "\nOpzione non valida.\n";
        }

    } while (scelta != 0);

    cout << "\nArrivederci!\n";
    return 0;
}
