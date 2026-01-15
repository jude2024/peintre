#pragma once
#include <string>
#include "peinture.h"
#include <vector>

class Gallerie
{
public:
    Gallerie(const std::string &nom);
    std::vector<Peinture> getList() const;

    void addPeinture(const Peinture &peinture);

    std::ostream operator<<(std::vector<Peinture> peintures) const;

private:
    std::string nom_;
    std::vector<Peinture> peintures_;
};