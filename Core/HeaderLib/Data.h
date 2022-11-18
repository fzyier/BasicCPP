#include "Header.h"

const int packages_col = 3;
std::string packages_names[packages_col] = { "Standard", "Premium", "Lux" };
int packages_prices[packages_col] = { 100,230,500 };

std::string* standard = &packages_names[0];
int* standard_price = &packages_prices[0];

std::string* premium = &packages_names[1];
int* premium_price = &packages_prices[1];

std::string* lux = &packages_names[2];
int* lux_price = &packages_prices[2];


const int clients_col = 10;
const int clients_row = 3;
std::string clients[clients_col][clients_row] = { {"Alex Newman", "Clewn 23", *standard}, {"Andrew Flegski", "Afrog 3", *standard}, {"Mike Ross", "Calendayk 90", *standard},
{"Harwey Spektr", "Sitaly 156", *standard}, {"Donna Polson", "Malose 88", *standard}, {"Johnat Padaleki", "Furie 35", *standard}, {"Lone Fox", "Cilore 66", *premium},
{"Kane Flake", "Jeyfreld 57", *premium}, {"Ennie Krushinsky", "Houcher 73", *premium}, {"Alex Newman", "Pildes 1", *lux} };