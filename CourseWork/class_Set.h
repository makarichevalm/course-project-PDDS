#pragma once

#include <iostream>
#include <string>
using namespace std;
namespace Set3 {
	struct Elem {
		int value;//значение элемента множества
		Elem* next;// указатель на след элем

	};
	class Set {
	private:
		Elem* first;
	public:
		//конструктор
		Set();
		Elem* getElem();// геттер, доступ к частному полю
		static Set createEmptySet();//создание пустого множества
		bool checkEmpty();//проверка на пустоту
		bool checkElemInSet(int val);//проверка принадлежности элем мн-ву
		void addNewElem(int val);// добавление нового элемента
		static Set createSet(int size, int min, int max);//создание множества    num - 4 или 7
		int sizeOfSet();//мощность множ-ва
		string printSet(const string symb);// вывод множества 
		void deleteSet();// удаление мн-ва
		static bool isSubsetAB(Set firstA, Set firstB);//проверка: A является подмножеством множества B
		static bool isEquallyAB(Set firstA, Set firstB);// проверка на равенство множеств A и B
		static Set consolidationAB(Set firstA, Set firstB);// объединение множеств
		static Set intersectionAB(Set firstA, Set firstB);//пересечение множеств
		static Set differenceAB(Set firstA, Set firstB);// разность множеств
		static Set symmetricDifferenceAB(Set firstA, Set firstB);//симметричная разность множеств

	};
}