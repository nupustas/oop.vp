#ifndef MANOLIB_H
#define MANOLIB_H

#include<vector>
#include<iomanip> 
#include<iostream>
#include<ctime>
#include<algorithm>
#include<fstream>
#include<chrono>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::setw;
using std::sort;
using std::left;
using std::fixed;
using std::setprecision;
using std::getline;
using std::ifstream;
using std::ofstream;


struct Stud
{
    string Vardas="a",Pavarde="b";
    vector <int> paz;
    int* pazArr = nullptr;
    int pazcount;
    double galutinis=2;
    int egz=1;
    char vm= 'a';
 };

const string MNames[25] = {
    "Andrius", "Dainius", "Jonas" , "Marius", "Orestas", "Povilas", 
    "Aidas",  "Tomas",  "Vejas", "Zygimantas",  "Vaidotas",
    "Linas", "Kestutis", "Vaidotas", "Martynas",   "Gintaras",
    "Tomas", "Antanas", "Paulius",   "Jonas", "Mantas", "Rokas", "Mindaugas",
    "Darius", "Dziugas"
};
const string MSurnames[25] = {
    "Petrauskas", "Jankauskas", "Kazlauskas", "Zukauskas", "Kavaliauskas", "Stankevicius", "Bieliauskas", 
    "Budvytis", "Giedraitis",  "Rimkus",  "Valiukas", "Juknevicius", "Vaitkevicius", 
     "Vasiliauskas", "Navickas",  "Urbonas", "Grigonis", "Rutkauskas",  
    "Vaitkus", "Pakalnis", "Norkus", "Skripka", "Butkevicius", "Nedzinskas", "Mickevicius",  
};
const string FNames[25] = {
    "Egle", "Indre", "Lina","Neringa","Sigute","Ugne","Laura","Viktorija",
    "Rasa","Gintare","Agne","Ieva", "Milda","Margarita","Aiste", "Vilma",
    "Ruta","Aiste","Gabija","Jurate","Jurgita", "Vaiva", "Ula", "Greta",
    "Kotryna"

};
const string FSurnames[25] = {
"Norkute","Petronyte","Seskinyte","Pakalnaite","Daugelaite","Simonaityte",
"Giedre","Zukaite", "Norkute", "Kaminskaite", "Dapsyte", "Kucinskaite", 
"Vaitkeviciute", "Vasiliauskaite", "Navickaite", "Urbonaite", "Grigoniene",
 "Rutkauskaite", "Vaitkute", "Pakalnyte", "Norkute", "Skripkaite", "Butkeviciute",
"Mickeviciute", "Brazaite"
};

#endif