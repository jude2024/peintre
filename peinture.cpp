#include "peinture.h"

Peinture::Peinture(const std::string &nom, const Artiste &artiste) : nom_(nom), artiste_(artiste)
{
}

std::ostream &operator<<(std::ostream &os, const Peinture &peinture)
{

    os << " non  " << peinture.nom_ << " gr" << peinture.artiste_.getNom();
    return os;
}
