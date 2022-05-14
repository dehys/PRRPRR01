#include <iostream> //Inkluderar iostream biblotek. Detta gör så att vi kan använda oss av input och output från användaren
#include <string> //Inkluderar string biblotek. Detta gör så att vi kan använda stoi funktionen för att convertera std::string till en integer

bool isNumeric(std::string str) { //En funktion som kollar om givet värde (string) är ett nummer med hjälp av isdigit funktionen
    for (int i = 0; i < str.length(); i++) { //En loop som loopar x antal gånger beroende på hur många karaktärer som finns i str
        if (isdigit(str[i]) == false) return false; //När ett icke-tal värde hittas, retunera false
    }
    return true;
}

int main() {
    std::string input;
    int rows = 3;


    while (rows != 0) { //En while loop som stoppar bara om rows=0
        std::cout << "Ange antal rader (ange 0 för avslut): "; //Här skriver vi ut imformation till användaren
        std::cin >> input; //Här hämtar vi in angivet värde av användaren till input variablen

        if (isNumeric(input)) { //Om input (angivet värde av användaren) är ett nummer, så fortsätter vi vidare i kodblocket
            rows = stoi(input); //Omvandlar input variablen till en int, detta kan vi göra med säkerhet eftersom vi kollade först att input var ett giltigt nummer

            for (int i = 0; i < rows; i++) { //En loop som loopar x antal gånger beroende på given input
                for (int j = 0; j < i + 1; j++) { //En nestad loop som loopar x antal gånger beroende på loopen den är innanför.
                    std::cout << "*"; //Här skrivs varje rad ut var för sig
                }
                std::cout << std::endl; //Här hoppar vi till en ny linje efter varje rad har skrivits ut
            }

        }
        else { //Om input inte är ett nummer
            std::cout << "FEL! Ange ett heltal." << std::endl; //Skriv ut ett informativt fel meddelande
        }
    }
}
