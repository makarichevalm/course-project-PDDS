#pragma once

#include <iostream>
#include <string>
using namespace std;

struct Elem {
	int value;//значение элемента множества
	Elem* next;// указатель на след элем

};
Elem* createEmptySet();//создание пустого множества
bool checkEmpty(Elem* first);//проверка на пустоту
bool checkElemInSet(Elem* first, int val);//проверка принадлежности элем мн-ву
Elem* addNewElem(Elem*& first, int val);// добавление нового элемента
Elem* createSet(int size, int min, int max);//создание множества    num - 4 или 7
int sizeOfSet(Elem* first);//мощность множ-ва
string printSet(Elem* first, string symb);// вывод множества
Elem* deleteSet(Elem*& first);// удаление мн-ва
bool isSubsetAB(Elem* firstA, Elem* firstB);//проверка: A является подмножеством множества B
bool isEquallyAB(Elem* firstA, Elem* firstB);// проверка на равенство множеств A и B
Elem* consolidationAB(Elem* firstA, Elem* firstB);// объединение множеств
Elem* intersectionAB(Elem* firstA, Elem* firstB);//пересечение множеств
Elem* differenceAB(Elem* firstA, Elem* firstB);// разность множеств
Elem* symmetricDifferenceAB(Elem* firstA, Elem* firstB);//симметричная разность множеств





