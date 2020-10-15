# BGT_TASK_1
Hash generatoriaus kūrimas

## Įdiegimo ir naudojimosi instrukcija
• Parsisiuskite vieną iš releas'ų [Releas'ai](https://github.com/ugniusado/Obj-Task2/releases) 

• *įsidiegti C++ kompiliatorių*

• *terminale, įvesti programos vieta diske*

• *Sukurti .txt failą projekto aplanke ir įvesti tekstą ar duomenis, kurie bus hash'uojami*

• *Kompiliuoti jūsų programą*

• *Visos kitos instrukcijos bus rodomos konsolėje*

## Programos versijos 

**[v0.12](https://github.com/ugniusado/BGT_TASK_1/releases/tag/v0.12)**

Šioje programos versijoje, nepilnai išbaigta hash funkcija, neveikia spausdinimas į failą, bet pakeitus spausdinimo būdą į konsolę veikia.

**[v0.13](https://github.com/ugniusado/BGT_TASK_1/releases/tag/v0.13)**

Šioje programoje sutvarkytas spausdinimo į failą bug'as, spausdinimas įmanomas ir į failą ir į konsolę.

**[v0.14](https://github.com/ugniusado/BGT_TASK_1/releases/tag/v0.14)**

Šioje programos versijoje pridėta biblioteka <chrono> išmatuoti programos efektyvumą, bei programos efektyvumui pagerinti programos kodas išskaidytas dalimis.

## Programos testavimas

**Rezultatai hash'uojant tą pati žodį, tik mažąją raidę pakeičiant didžiąja:**

Žodis lietuva: https://prnt.sc/v04hok

Žodis Lietuva: https://prnt.sc/v04gyo

**Rezultatai hash'uojant atsitiktinų 1000 raidžiu/skaičių string'o : **

https://prnt.sc/v04ndh

Laikas: https://prnt.sc/v04ml4

**Rezultatai hash'uojant tuščią failą : **

https://prnt.sc/v04osw

Laikas : https://prnt.sc/v04o5j

## Programos efektyvumas

Lyginant programos darbą su SHA 256:

•Programa neveikia, jei įvedamas bent vienas ne tekstinis ar ne skaitmeninis simbolis

•Lyginant su SHA 256 programa veikia labai lėtai ir yra neefektyvi

•Programai kyla problemų su atmintim dirbant su didesnės apimties failais

## Išvados

•Sunku surasti du tokius pačius hash'us, kuriamus iš skirtingų argumentų

•Kartais programai crash'inant ir spausdinant per ilgą hash išeiga, buvo bandyta tvarkyti declare'inant fixed hasho dydį, bet tada programa neveikdavo.

•Palyginus su kitais hash'avimo metodais programa veikia labai neefektyviai
