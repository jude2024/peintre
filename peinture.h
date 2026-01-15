#pragma once
#include <string>
#include "artiste.h"
#include <iostream>
#include <algorithm>

class Peinture
{

public:
    Peinture(const std::string &nom, const Artiste &artiste);

    friend std::ostream &operator<<(std::ostream &os, const Peinture &peinture);

private:
    std::string nom_;
    Artiste artiste_;
};