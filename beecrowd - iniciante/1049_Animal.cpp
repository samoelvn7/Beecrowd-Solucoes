#include <iostream>
#include <string>
using namespace std;
int main() {
    string palavra1, palavra2, palavra3;
    cin >> palavra1;
    cin >> palavra2;
    cin >> palavra3;
    if (palavra1 == "vertebrado" && palavra2 == "ave" && palavra3 == "carnivoro") {
        printf("aguia\n");
    }
    if (palavra1 == "vertebrado" && palavra2 == "ave" && palavra3 == "onivoro") {
        printf("pomba\n");
    }
    if (palavra1 == "vertebrado" && palavra2 == "mamifero" && palavra3 == "onivoro") {
        printf("homem\n");
    }
    if (palavra1 == "vertebrado" && palavra2 == "mamifero" && palavra3 == "herbivoro") {
        printf("vaca\n");
    }
    if (palavra1 == "invertebrado" && palavra2 == "inseto" && palavra3 == "hematofago") {
        printf("pulga\n");
    }
    if (palavra1 == "invertebrado" && palavra2 == "inseto" && palavra3 == "herbivoro") {
        printf("lagarta\n");
    }
    if (palavra1 == "invertebrado" && palavra2 == "anelideo" && palavra3 == "hematofago") {
        printf("sanguessuga\n");
    }
    if (palavra1 == "invertebrado" && palavra2 == "anelideo" && palavra3 == "onivoro") {
        printf("minhoca\n");
    }
    return 0;
}
