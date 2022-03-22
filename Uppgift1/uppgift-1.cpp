#include <iostream> //Inkluderar ett biblotek som låter oss använda cout och cin från std
using namespace std; //Detta gör det enklare för oss, vi behöver inte nämna std varje gång. Istället för 'std::string' så skriver vi bara 'string'

/*
    UPPGIFT 1:
        Kostnaderna för att hyra en hyrbil räknas fram enligt följande:
        -500 kr fast avgift per dag + 2 kr per mil om man hyr bilen upp till 3 dagar.
        -990 kr per dag och fri milkostnad om man hyr bilen mer än 3 dagar.
        Uthyrningsfirman vill ha ett enkelt program som hjälper till att ta fram hyreskostnaderna för hyrbilen om man anger antal hyrdagar och eventuellt antal mil som man har åkt med bilen.
*/

int main(){
    int days = 0; // Dagar bilen hyrdes
    int miles = 0; // Miltal på bilen efter hyrelsen
    int milage_price = 2; // Pris per mil om price[0]
    int price[2] = {500, 990}; // 2 olika priser

    cout << endl << "Dagar bilen ska hyras: "; // Här skriver vi ut en prompt fråga för att kunna få in ett svar av användaren
    cin >> days; // Här hämtar vi in vad användaren skrev in efter hen tryckt på ENTER knappen

    // IF ELSE uttalande för att besluta vilken av priserna vi ska använda oss av
    if (days <= 3) {
        cout << "Mil bilen har åkt: "; // Här skriver vi ut en till prompt fråga till användaren för ayy få in ett svar på hur långt bilen har åkt
        cin >> miles; // Hämtar in input av användaren in till variablen 'miles'
        //Här skriver vi ut svaret, vi använder oss av cout igen
        //och vi adderar milage_price * miles med price[0] för att få fram priset givet
        //på användarens input till programmet
        cout << endl << "Pris: "
                << price[0] + (milage_price*miles)
                << "kr"
                << endl << endl;
    } else {
        //Samma sak som förut, vi skriver ut svaret,
        //Denna gången så skriver vi bara ut price[1] eftersom
        //om hyresdagarna var över 3 så skulle det vara ett fast pris
        //på 990kr
        cout << endl << "Pris: "
                << price[1]
                << "kr"
                << endl << endl;
    }
}