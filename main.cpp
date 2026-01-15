#include <iostream>
#include "gallerie.h"
#include "peinture.h"

int main()
{

    Artiste artiste("jude");
    Peinture peint("jude", artiste);

    Gallerie gallerie("Garl");

    gallerie.addPeinture(peint);

    for(auto peintre : gallerie.getList())
    {
        std::cout<< peintre;
    }

   

    return 0;
}