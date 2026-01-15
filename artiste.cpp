#include "artiste.h"

Artiste::Artiste(const std::string &nom) : nom_(nom)
{
}

std::string Artiste::getNom() const
{
    return nom_;
}