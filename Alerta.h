// TEMA II
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef ALERTA_H
#define ALERTA_H

#include "Mesaj.h"

// Clasa Alerta reprezinta un mesaj de alerta cu id, data/ora, text si un mesaj de atentionare
// Clasa alerta mosteneste membrii publici ai clasei Mesaj
class Alerta : public Mesaj {
public:
    Alerta(int id, std::string timeStamp, std::string text, std::string atentionare);

    std::string getAtentionare();
    void setAtentionare(std::string atentionare);

private:
    std::string atentionare;
};

#endif  // ALERTA_H

