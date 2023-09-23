Derivarea claselor. Această temă vă propune implementarea unui sistem de mesagerie în format text. Mesajele sunt de două tipuri: (a) mesaje simple care constau din data si ora la care au fost trimise și textul propriu-zis și (b) alerte care, pe lângă data și ora, respectiv text, afișează suplimentar un mesaj de atenționare. Vi se cere să scrieți o aplicație care implementează două clase, una care se folosește pentru instanțierea mesajelor simple și a doua pentru alerte.
Mesaj
int id
string timeStamp
string text
Alerta (derivată public din Mesaj)
string atentionare
Clasa Mesaj este clasă de bază pentru clasa Alerta.
Clasa Mesaj are următoarele proprietăți:
- id care reprezintă numărul de identificare;
- timeStamp care cuprinde data și ora mesajului;
- text care definește textul afișat.
Clasa Alerta este derivată public din clasa Mesaj și, pe lângă proprietățile moștenite, are și următoarea proprietate suplimentară:
- atentionare care este un mesaj suplimentar.
Setul minimal de funcționalități al claselor Mesaj şi Alerta este:
- Constructor;
- Funcții getter și setter pentru toate datele membre;
- Operatorul << supraîncărcat.
Implementare și test. Completați programul de mai jos astfel încât funcţia main să ruleze fără nicio modificare din partea voastră:
#include <iostream>
using namespace std;
class Mesaj{
public:
//constructor
//functii getter si setter pentru datele membre
private:
//date membre
};
class Alerta : public Mesaj{
public:
//constructor
//functii getter si setter pentru datele membre
private:
//date membre
};
ostream& operator<<(ostream& o, Mesaj m){
//codul aici...
}
ostream& operator<<(ostream& o, Alerta a){
//codul aici...
}
int main(){
Mesaj m1(1, "8-05-2023 08:23:56", "Retea wifi disponibila");
Alerta a2(2, "9-05-2023 17:11:38", "Atentie!", "Spatiu de stocare pe harddisk insuficient");
Mesaj m3(3, "10-05-2023 09:41:02", "Temperatura procesorului este de 53 de grade Celsius");
cout << m1 << endl << a2 << endl << m3 << endl;
}
Rezultatul rulării programului trebuie să fie:
1: 8-05-2023 08:23:56 - Retea wifi disponibila
2: Atentie! 9-05-2023 17:11:38 - Spatiu de stocare pe harddisk insuficient
3: 10-05-2023 09:41:02 - Temperatura procesorului este de 53 de grade Celsius
