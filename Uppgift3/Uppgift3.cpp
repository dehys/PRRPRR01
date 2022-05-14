#include <iostream> //Inkluderar iostream biblotek. Detta g�r s� att vi kan anv�nda oss av input och output fr�n anv�ndaren
#include <string> //Inkluderar string biblotek. Detta g�r s� att vi kan anv�nda stoi funktionen f�r att convertera std::string till en integer

bool isNumeric(std::string str) { //En funktion som kollar om givet v�rde (string) �r ett nummer med hj�lp av isdigit funktionen
    for (int i = 0; i < str.length(); i++) { //En loop som loopar x antal g�nger beroende p� hur m�nga karakt�rer som finns i str
        if (isdigit(str[i]) == false) return false; //N�r ett icke-tal v�rde hittas, retunera false
    }
    return true;
}

int main() {
    std::string input;
    int rows = 3;


    while (rows != 0) { //En while loop som stoppar bara om rows=0
        std::cout << "Ange antal rader (ange 0 f�r avslut): "; //H�r skriver vi ut imformation till anv�ndaren
        std::cin >> input; //H�r h�mtar vi in angivet v�rde av anv�ndaren till input variablen

        if (isNumeric(input)) { //Om input (angivet v�rde av anv�ndaren) �r ett nummer, s� forts�tter vi vidare i kodblocket
            rows = stoi(input); //Omvandlar input variablen till en int, detta kan vi g�ra med s�kerhet eftersom vi kollade f�rst att input var ett giltigt nummer

            for (int i = 0; i < rows; i++) { //En loop som loopar x antal g�nger beroende p� given input
                for (int j = 0; j < i + 1; j++) { //En nestad loop som loopar x antal g�nger beroende p� loopen den �r innanf�r.
                    std::cout << "*"; //H�r skrivs varje rad ut var f�r sig
                }
                std::cout << std::endl; //H�r hoppar vi till en ny linje efter varje rad har skrivits ut
            }

        }
        else { //Om input inte �r ett nummer
            std::cout << "FEL! Ange ett heltal." << std::endl; //Skriv ut ett informativt fel meddelande
        }
    }
}
