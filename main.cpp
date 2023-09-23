// TEMA II
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include <iostream>
#include "Mesaj.h"
#include "Alerta.h"

std::ostream& operator<<(std::ostream& o, Mesaj& m) {
    o << m.getId() << ": " << m.getTimeStamp() << " - " << m.getText();
    return o;
}

std::ostream& operator<<(std::ostream& o, Alerta& a) {
    o << a.getId() << ": " << a.getAtentionare() << " ! " << a.getTimeStamp() << " - " << a.getText();
    return o;
}

int main() {
    Mesaj m1(1, "8-05-2023 08:23:56", "Retea wifi disponibila");
    Alerta a2(2, "9-05-2023 17:11:38", "Spatiu de stocare pe harddisk insuficient", "Atentie");
    Mesaj m3(3, "10-05-2023 09:41:02", "Temperatura procesorului este de 53 de grade Celsius");
    std::cout << m1 << std::endl << a2 << std::endl << m3 << std::endl;
    return 0;
}
