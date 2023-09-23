// TEMA II
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#include "Mesaj.h"

Mesaj::Mesaj(int id, std::string timeStamp, std::string text)
    : id(id), timeStamp(timeStamp), text(text) {}

int Mesaj::getId() { return id; }
void Mesaj::setId(int id) { this->id = id; }

std::string Mesaj::getTimeStamp() { return timeStamp; }
void Mesaj::setTimeStamp(std::string timeStamp) { this->timeStamp = timeStamp; }

std::string Mesaj::getText() { return text; }
void Mesaj::setText(std::string text) { this->text = text; }

