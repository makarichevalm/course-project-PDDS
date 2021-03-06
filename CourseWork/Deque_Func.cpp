#include "Deque.h"
using namespace Set6;

Set::Set() {
	myDeque = deque<int>();
}
Set Set::createEmptySet() {
	Set* newSet = new Set();
	return *newSet;
}
//???????? ?? ???????
bool Set::checkEmpty() {
	return myDeque.empty();
}
//???????? ?????????????? ???? ??-??
bool Set::checkElemInSet(int val) {
	if (checkEmpty()) return false;
	for (auto i = myDeque.begin(); i != myDeque.end(); i++) {
		if (*i == val) {
			return true;
		}
	}
	return false;
}
// ?????????? ?????? ????????
void Set::addNewElem(int val) {
	if(!checkElemInSet(val))
		myDeque.push_front(val);
	return;
}
//???????? ?????????    num - 4 ??? 7
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
//???????? ????-??
int Set::sizeOfSet() {
	return myDeque.size();
}
// ????? ????????? 
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
// ???????? ??-??
void Set::deleteSet() {
	myDeque.clear();
}
//????????: A ???????? ????????????? ????????? B
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
// ???????? ?? ????????? ???????? A ? B
bool Set::isEquallyAB(Set firstA, Set firstB) {
	return (isSubsetAB(firstB, firstA) && isSubsetAB(firstA, firstB));
}
// ??????????? ????????
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
//??????????? ????????
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
// ???????? ????????
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
//???????????? ???????? ????????
Set Set::symmetricDifferenceAB(Set firstA, Set firstB) {
	return differenceAB(consolidationAB(firstA, firstB), intersectionAB(firstA, firstB));
}