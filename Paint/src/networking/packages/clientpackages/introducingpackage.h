#ifndef INTRODUCINGPACKAGE_H
#define INTRODUCINGPACKAGE_H
#include "../basicpackage.h"

/*
 * "Shortcut" for sending introducing package
*/
class IntroducingPackage : public BasicPackage
{
public:
    IntroducingPackage(const QVariant& data)
        : BasicPackage (data, networking::PType::INTRODUCING) {}
};

#endif // INTRODUCINGPACKAGE_H
