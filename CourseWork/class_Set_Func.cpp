#include "class_Set.h"
using namespace Set3;

Elem* Set::getElem() {
	return first;
}
Set::Set() {
	first = nullptr;
}

//создание пустого множества
Set Set::createEmptySet() {
	Set *newSet = new Set();
	return *newSet;
}

//проверка на пустоту
bool Set::checkEmpty() {
	return first == nullptr;
}

//проверка принадлежности элем мн-ву
bool Set::checkElemInSet(int val) {
	if (checkEmpty()) return false;
	Elem* temp = first;
	while (temp->next && temp->value != val) {
		temp = temp->next;
	}
	return temp->value == val;
}

// добавление нового элемента в начало списка
void Set:: addNewElem(int val) {
	if (!checkElemInSet(val)) {
		Elem* new_elem = new Elem;
		new_elem->value = val;
		new_elem->next = first;
		first = new_elem;
	}
	return;
}

//создание множества
Set Set:: createSet(int size, int min, int max) {
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
	int size = 0;
	if (checkEmpty())
		return 0;
	Elem* temp = first;
	while (temp != nullptr) {
		size++;
		temp = temp->next;
	}
	return size;
}

//вывод множества
string Set:: printSet(const string symb) {
	if (this->checkEmpty())
		return "Set is empty!";
	Elem* temp = first;
	string result;
	while (temp->next) {
		result += to_string(temp->value) + symb;
		temp = temp->next;
	}
	result += to_string(temp->value);
	return result;
}

// удаление мн-ва
void Set:: deleteSet() {
	Elem* cur = first;
	while (cur) {
		Elem* temp = cur;
		cur = cur->next;
		delete temp;
	}
	first = nullptr;
}

//проверка: A является подмножеством множества B
bool Set::isSubsetAB(Set firstA, Set firstB) {
	if (firstA.checkEmpty())
		return true;
	if (firstA.sizeOfSet() > firstB.sizeOfSet())
		return false;
	Elem* temp = firstA.getElem();
	while (temp->next) {
		if (!firstB.checkElemInSet(temp->value))
			return false;
		temp = temp->next;
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
	Elem* temp = firstB.getElem();
	while (temp != nullptr) {
		if (!firstC.checkElemInSet(temp->value)) {
			firstC.addNewElem(temp->value);
		}
		temp = temp->next;
	}
	return firstC;

}

//пересечение множеств
Set Set::intersectionAB(Set firstA, Set firstB) {
	if (firstA.checkEmpty() || firstB.checkEmpty())
		return createEmptySet();
	Set firstC = createEmptySet();
	Elem* temp = firstA.getElem();
	while (temp != nullptr) {
		if (firstB.checkElemInSet(temp->value)) {
			firstC.addNewElem(temp->value);
		}
		temp = temp->next;
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
	Elem* temp = firstA.getElem();
	while (temp != nullptr) {
		if (!firstB.checkElemInSet(temp->value)) {
			firstC.addNewElem(temp->value);
		}
		temp = temp->next;
	}
	return firstC;
}

//симметричная разность множеств
Set Set::symmetricDifferenceAB(Set firstA, Set firstB) {
	return differenceAB(consolidationAB(firstA, firstB), intersectionAB(firstA, firstB));
}
