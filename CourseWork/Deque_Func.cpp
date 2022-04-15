#include "Deque.h"
using namespace Set6;

Set::Set() {
	myDeque = deque<int>();
}
Set Set::createEmptySet() {
	Set* newSet = new Set();
	return *newSet;
}
//проверка на пустоту
bool Set::checkEmpty() {
	return myDeque.empty();
}
//проверка принадлежности элем мн-ву
bool Set::checkElemInSet(int val) {
	if (checkEmpty()) return false;
	for (auto i = myDeque.begin(); i != myDeque.end(); i++) {
		if (*i == val) {
			return true;
		}
	}
	return false;
}
// добавление нового элемента
void Set::addNewElem(int val) {
	if(!checkElemInSet(val))
		myDeque.push_front(val);
	return;
}
//создание множества    num - 4 или 7
Set Set::createSet(int size, int min, int max) {
	Set new_set = *new Set();
	int s = 0;
	while (s < size) {
		int temp = min + rand() % (max - min + 1);
		new_set.addNewElem(temp);
		s++;
	}
	return new_set;
}
//мощность множ-ва
int Set::sizeOfSet() {
	return myDeque.size();
}
// вывод множества 
string Set::printSet(const string symb) {
	if (checkEmpty())
		return "Set is empty!";
	string result;
	for (auto i = myDeque.begin(); i != myDeque.end(); i++) {
		if (*i == *std::prev(myDeque.end()))
			result += to_string(*i);
		else result += to_string(*i) + symb;
	}
	return result;
}
// удаление мн-ва
void Set::deleteSet() {
	myDeque.clear();
}
//проверка: A является подмножеством множества B
bool Set::isSubsetAB(Set firstA, Set firstB) {
	if (firstA.checkEmpty())
		return true;
	if (firstA.sizeOfSet() > firstB.sizeOfSet())
		return false;

	for (auto i = firstA.myDeque.begin(); i != firstA.myDeque.end(); i++) {
		if (!firstB.checkElemInSet(*i))
			return false;
	}
	return true;
}
// проверка на равенство множеств A и B
bool Set::isEquallyAB(Set firstA, Set firstB) {
	return (isSubsetAB(firstB, firstA) && isSubsetAB(firstA, firstB));
}
// объединение множеств
Set Set::consolidationAB(Set firstA, Set firstB) {
	if (firstA.checkEmpty())
		return firstB;
	if (firstB.checkEmpty())
		return firstA;
	Set firstC = firstA;

	for (auto i = firstB.myDeque.begin(); i != firstB.myDeque.end(); i++) {
		firstC.addNewElem(*i);
	}
	return firstC;
}
//пересечение множеств
Set Set::intersectionAB(Set firstA, Set firstB) {
	if (firstA.checkEmpty() || firstB.checkEmpty())
		return createEmptySet();
	Set firstC = createEmptySet();
	for (auto i = firstA.myDeque.begin(); i != firstA.myDeque.end(); i++) {
		if (firstB.checkElemInSet(*i)) {
			firstC.addNewElem(*i);
		}
	}
	return firstC;
}
// разность множеств
Set Set::differenceAB(Set firstA, Set firstB) {
	Set firstC = createEmptySet();
	if (firstA.checkEmpty())
		return firstC;
	if (firstB.checkEmpty())
		return firstA;
	for (auto i = firstA.myDeque.begin(); i != firstA.myDeque.end(); i++) {
		if (!firstB.checkElemInSet(*i)) {
			firstC.addNewElem(*i);
		}
	}
	return firstC;
}
//симметричная разность множеств
Set Set::symmetricDifferenceAB(Set firstA, Set firstB) {
	return differenceAB(consolidationAB(firstA, firstB), intersectionAB(firstA, firstB));
}