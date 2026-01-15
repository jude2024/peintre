#include "gallerie.h"

Gallerie::Gallerie(const std::string &nom) : nom_(nom) {}

void Gallerie::addPeinture(const Peinture &peinture)
{
    peintures_.push_back(peinture);
}
std::vector<Peinture> Gallerie::getList() const
{

    return peintures_;
}


    
