#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//functie de citire si alocare de memorie
void read(char **line, int n){
    char tmp[201];
    
    for (int i = 0; i < n; i++){
        fgets(tmp, 201, stdin);
        line[i] = (char*) malloc(strlen(tmp) * sizeof(char) + 1);
        strcpy(line[i], tmp);
        //scot \n din linie
        line[i][strcspn(line[i], "\n")] = 0; 
    }
}
//functie de criptare a cuvantului valid caracter cu caracter
void cript_word(char *word) {
    int cripted;
    int len = strlen(word);
    if(word[0] != '\0'){
        printf("%c", word[0]);
        for (int i = 1; i < len; i++){
            cripted = word[i] + word[0] % 256;
            printf("%c", cripted);
        }
    }
    
    
}
//functie in care se desparte linia in cuvinte 
//cuvintele sunt validate sau nu
//daca valide =>se cripteaza si afiseaza
//daca nu se afiseaza in forma lor numerica initiala
void isWord(char *line, char aux[101][201]) {
    
    int k=0;
    int ok;
    int count = 0;
    for(int i = 0; i <= strlen(line); i++) {  
        if(line[i] == ' '|| line[i] == '\n' || line[i] == '\0') {
            aux[count][k] = '\0';
            count++; 
            k = 0;    
        }
        else{
            aux[count][k] = line[i];  // adaug cuvintele in aux
            k++;
        }
    }
    //valideaza cuvintele prin numararea cate cifre are cuvantul
    for(int i = 0; i < count; i++) {
        ok = 1;
        k = 0;   
        for(int j = 0; j < strlen(aux[i]); j++) {

            if (aux[i][j] >= '0' && aux[i][j] <= '9') 
                     k++;
            if(k == strlen(aux[i])) //nr de cifre = cu lungimea 
                ok = 0;  //invalid
            else 
                ok = 1; //valid

        }
        //printez pana la penultimul cuvant cu " "
        if(ok == 1 && i < count-1) 
            {
                cript_word(aux[i]);
                printf(" ");            
            }
        else if (ok == 0 && i < count-1) 
            printf("%s ", aux[i]);

        //printez ultimul cuvant
        if(ok == 1 && i == count-1)
            cript_word(aux[i]);

        if(ok == 0 && i == count-1 )
            printf("%s", aux[i]);
    }   
    //scap de ultimul spatiu daca exista
    for(int i = 0; i < strlen(line); i++)
        if(line[strlen(line)] == ' ') line[strlen(line)] = '\0';
}
  
int main()
{
    int n;
    scanf("%d",&n);
    char *line[201];
    char aux[101][201];

    getchar();
    read(line, n);

    for (int i = 0; i < n; i++) {
        isWord(line[i], aux);
        printf("\n");
    }
    
    for(int i = 0; i < n; i++)
        free(line[i]);
    return 0;
}