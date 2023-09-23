// TEMA II
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "Alerta.h"

Alerta::Alerta(int id, std::string timeStamp, std::string text, std::string atentionare)
    : Mesaj(id, timeStamp, text), atentionare(atentionare) {}

std::string Alerta::getAtentionare() { return atentionare; }
void Alerta::setAtentionare(std::string atentionare) { this->atentionare = atentionare; }

