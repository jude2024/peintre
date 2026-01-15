#pragma once

#include <string>

class Artiste
{
public:
    Artiste(const std::string &nom);
    std::string getNom() const;

private:
    std::string nom_;
};