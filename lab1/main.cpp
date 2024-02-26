#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

int main()
{
    Prostokat prostokatL(2, 3);
    Trojkat trojkatL(3, 4, 5);
    Kolo koloL(3);

    Prostokat *prostokatP = new Prostokat(3, 4);
    Trojkat *trojkatP = new Trojkat(5, 12, 13);
    Kolo *koloP = new Kolo(5);

    FiguraPlaska *figury[] = {&prostokatL, &trojkatL, &koloL, prostokatP, trojkatP, koloP};

    for (int i = 0; i < 6; i++)
    {
        FiguraPlaska &figura = *figury[i];
        std::cout << figura << " Obwód: " << figura.Obwod() << " Pole: " << figura.Pole() << std::endl;
    }

    delete prostokatP;
    delete trojkatP;
    delete koloP;

    return 0;
}