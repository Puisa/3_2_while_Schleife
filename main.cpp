#include "std_lib_inc.h"

int main()
{
    double betrag;
    char waehrung;

    while (true)
    {
        cout << "Gib den Betrag und die Währung ein (Y für Yen, K für Kronen, P für Pfund, D für Dollar, Q zum Beenden): \n";
        cin >> betrag >> waehrung;

        if (waehrung == 'Q')
        {
            cout << "Programm beendet.\n";
            break;
        }
        else if (waehrung == 'Y')
        {
            cout << betrag << " Yen umgerechnet in Euro: " << betrag * 0.0067 << " Euro\n";
        }
        else if (waehrung == 'K')
        {
            cout << betrag << " Schwedische Kronen umgerechnet in Euro: " << betrag * 0.09 << " Euro\n";
        }
        else if (waehrung == 'P')
        {
            cout << betrag << " Pfund umgerechnet in Euro: " << betrag * 1.17 << " Euro\n";
        }
        else if (waehrung == 'D')
        {
            cout << betrag << " Dollar umgerechnet in Euro: " << betrag * 0.93 << " Euro\n";
        }
        else
        {
            cout << "Fehler: Unbekannte Währung '" << waehrung << "'. Bitte versuche es erneut.\n";
        }
    }
    return 0;
}
