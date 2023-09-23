// TEMA II
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef MESAJ_H
#define MESAJ_H

#include <string>

// Clasa Mesaj reprezinta un mesaj simplu cu id, data/ora si text
class Mesaj {
public:
    Mesaj(int id, std::string timeStamp, std::string text);

    int getId();
    void setId(int id);

    std::string getTimeStamp();
    void setTimeStamp(std::string timeStamp);

    std::string getText();
    void setText(std::string text);

private:
    int id;
    std::string timeStamp;
    std::string text;
};

#endif  // MESAJ_H

