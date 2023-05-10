//граф социальных связей определенного круга людей
#include <iostream>
#include <Windows.h>
#include "SocialTree.h"


int main(char* ar[], int count)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    SocialNetwork sn;

    sn.addnewMan("Oleg");
    sn.addnewMan("Kostya");
    sn.addnewMan("Misha");
    sn.addnewMan("Vika");
    sn.addnewMan("Lesha");

    sn.delMan("Vika");
    sn.addnewMan("Anya");

    sn.addFriendship("Oleg", "Kostya");
    sn.addFriendship("Kostya", "Misha");
    sn.addFriendship("Misha", "Anya");
    sn.addFriendship("Anya", "Lesha");

    sn.showThreeHandshakes();

    return 0;
}