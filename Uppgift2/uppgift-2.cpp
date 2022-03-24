#include <iostream> // Inluderar iostream biblotek. Detta gör så att vi kan använda oss av input och output från användaren
#include <string> // Inkluderar string
#include <sstream> // Inkluderar sstream, Detta gör så att vi kan omvandla en string till en string ström
using namespace std; // Gör det enklare för oss, istället för att använda 'std::string' så skriver vi bara 'string'


template <typename T> // Detta gör så att vi kan skriva med en data typ i parametrarna av funktionen 'is'. Det gör funktionen mer allmän.
bool is(const string& s) { // En funktion som ser till att given sträng är en specific data typ

    istringstream iss(s); // Här omvandlar vi string 's' parametren till en string stream med hjälp av funktionen iss(string)
    T x; // Declarerar data typ parametren

    // Här retunerar vi 'iss >> noskipws >> x && iss.eof();'
    // iss är strömmen av strängen vi gav som parameter,
    // noskipws stänger av 'whitespace skipping' som strömmen i normala fall gör i operationen '>>'
    // x && iss.eof() ser till att strömmen är tom. Att tolkningen av 'T' har tagit upp hela strängen 
    return 
        iss >> 
        noskipws >> 
        x && iss.eof();
}

int main() {

    // Här skriver vi ut en informativ bit av text som förklarar vad programmet gör
    cout    << "\t------------------------------" << endl
            << "\t Transformera sekunder till" << endl 
            << "\t Timmar, Minuter, Sekunder" << endl 
            << "\t------------------------------" << endl
            << "\tCTRL + C - Avbryter programmet" << endl
            << endl;

    while (true) { // Vi ser till att koden nedanför aldrig tar slut. Efter att användaren fått ett svar så kan dem återigen skriva in ett nytt nummer och få ett till svar.
        long seconds, minutes, hours, days, weeks, months, years; // Variabler i data typen long, så vi kan ha längre nummer
        string input; // Variablen input är strängen användaren skriver in
        
        // En 'do while' loop som ser till att given input av användaren är giltig
        do {
            cout << "Ange sekunder: ";
            cin >> input;

            // Ett 'if else' uttalande där vi kollar om input variablen är INTE en typ av long med hjälp av vår is funktion
            if (!is<long>(input)){
                cout << "FEL! Skriv in bara heltal. Inga decimaler eller karaktärer tillåts!" << endl << endl;
            } else break; // Om input är typ av long så går vi ut ur loopen

        } while (true);

        seconds = stol(input); // stol(input) omvandlar strängen 'input' till en long, vi kan göra detta säkert eftersom vi vet att 'input' är en giltig long med hjälp av koden ovanför
        minutes = seconds / 60; // Minuter är sekunder/60
        hours = minutes / 60; // Timmar är minuter/60

        /*
            Här skriver vi ut flera saker till användaren:
                'input << " sekunder är lika med:"' - input är de givna sekunderna från användaren
                '(hours == 0 ? "" : "\t" + to_string(hours) + " timmar\n")' - Här ser vi till att om 'hours' variablen är lika med 0, då skriver vi inte ut den alls
            Resten är likadant som raden ovanför
        */
        cout << endl << input << " sekunder är lika med:" << endl
                << (hours == 0 ? "" : "\t" + to_string(hours) + " timmar\n")
                << (minutes%60 == 0 ? "" : "\t" + to_string(minutes%60) + " minuter\n")
                << (seconds%60 == 0 ? "" : "\t" + to_string(seconds%60) + " sekunder\n")
                << endl;
    }

}