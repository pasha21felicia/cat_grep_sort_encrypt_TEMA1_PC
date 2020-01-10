/**
Digori Parascovia 313CC 

**/
Problema 1:
Citesc textul in care cautam intr-un vector de stringuri **line cu functia read_and_alloc
prin intermediul unui vector tmp auxiliar. Apelez functia countFreq, care primeste ca 
parametri o linie de text si sirul s, functia returneaza count=> numarul de aparitii al 
sirul s in linia respectiva. Verific daca count diferit de 0 se apeleaza functia color_string,
care primeste ca parametru linia, sirul s si count in acea linie. Se itereaza prin linie pentru 
a gasi pozitia la care incepe sirul cautat si aceste pozitii se insereaza intr-un vector indice[]. 
Iterez prin linie de count ori si la positia egala cu indice[] inserez sirul de setare culoare cu 
ajutorul functie strins(inspirata din slide-rile de curs). Deja de la aceeasi pozitie peste 
strlen(s)+7(caractere adaugate la setare culoare) se insereaza sirul de resetare culoare.
Updatez vectorul indice cu + 10 pozitii;
Problema asta mi-a luat ceeel mai mult timp pentru implemetare din cauza propriei neatentii la 
inserarea sirului de resetare culoare(se suprapunea).

Problema 2:
Cea mai draguta daca sincer problema, varianta de 20 de puncte am facut-o in vreo 2-3 ore mergand
pe un caz particular, iar pentru generalizare am mai facut 1 ora undeva.
Citesc ca la probl.1 cu functia read() liniile. Prin functia fields_transform() transform char fields
in int v_fields, mai intaii prin separarea lui char fields in cuvinte dupa delimitatori si 
inserare in temp_fields, apoi temp_fields il transform in int cu ajutorul functiei atoi.
Sortez v_fields pentru simplitate. In functia isWord() impart linia in tokenuri si le adaug intr-un
vector char aux[], apoi verific ce fielduri vor fi afisate si le afisez cu vectorul char output.

Problema 3:
Cu functia read(), citesc numerele de pe fiecare linie si realoc linia odata ce capacitatea este 
depasita, numar cate elemente(coloane) am pe linia respectiva si adaug intr-un vector care va 
pastra coloana v_col[i] a liniei i. Cu functia media_line() calculez media numerelor pe fiecare 
linie si o adaug intr-un vector de medii, ai. medii[i] este media liniei i. Copiez vectorul medii[] 
intr-un alt vector meddi_nesortate[] cu functia copy_medii(), apoi sortez vectorul medii[] cu 
bubblesort. Cu functia indici(), in vectorul indice[] pastrez pozitia la care se afla media 
nesortata inainte de a fi sortata. In print() afisez vectorul medii[](sortat) si cu ajutorul 
vectorului indice[] depistez ce linie in felul ei nesortat ii corespunde mediei sortate si afizes acea linie. 
Mi-a luat vreo 5-6 ore problema asta sigur si mai mult defapt, la care am mai revenit cu cazuri particulare, de vreo 2 ore.

Problema 4: 
Functia read() pentru citire si alocare de memorie ca la probl.1,2. In functia isWord() despart linia in cuvinte pe care le inserez in aux[] apoi le validez sau nu. Daca sunt valide le criptez cu functia cript_word() daca nu le afisez asa simplu.
