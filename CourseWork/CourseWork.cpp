#include "struct_List.h"
#include "class_Set.h"
#include "List.h"
#include "Set.h"
#include "Deque.h"
#include<chrono>
//using namespace Set6;
void timeStructList(__int64* timet, int N) {

    Elem* setA = createSet(N, 0, N * 10);
    Elem* setB = createSet(N, 0, N * 10);

    auto start1 = std::chrono::high_resolution_clock::now();
    createSet(N, 0, N * 10);
    auto finish1 = std::chrono::high_resolution_clock::now();
    auto time1 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish1 - start1);
    timet[0] = time1.count();
    auto start2 = std::chrono::high_resolution_clock::now();
    sizeOfSet(setA);
    auto finish2 = std::chrono::high_resolution_clock::now();
    auto time2 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish2 - start2);
    timet[1] = time2.count();
    auto start3 = std::chrono::high_resolution_clock::now();
    isSubsetAB(setA, setA);
    auto finish3 = std::chrono::high_resolution_clock::now();
    auto time3 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish3 - start3);
    timet[2] = time3.count();
    auto start4 = std::chrono::high_resolution_clock::now();
    isSubsetAB(setA, setB);
    auto finish4 = std::chrono::high_resolution_clock::now();
    auto time4 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish4 - start4);
    timet[3] = time4.count();
    auto start5 = std::chrono::high_resolution_clock::now();
    isEquallyAB(setA, setA);
    auto finish5 = std::chrono::high_resolution_clock::now();
    auto time5 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish5 - start5);
    timet[4] = time5.count();
    auto start6 = std::chrono::high_resolution_clock::now();
    isEquallyAB(setA, setB);
    auto finish6 = std::chrono::high_resolution_clock::now();
    auto time6 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish6 - start6);
    timet[5] = time6.count();
    auto start7 = std::chrono::high_resolution_clock::now();
    consolidationAB(setA, setB);
    auto finish7 = std::chrono::high_resolution_clock::now();
    auto time7 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish7 - start7);
    timet[6] = time7.count();
    auto start8 = std::chrono::high_resolution_clock::now();
    intersectionAB(setA, setB);
    auto finish8 = std::chrono::high_resolution_clock::now();
    auto time8 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish8 - start8);
    timet[7] = time8.count();
    auto start9 = std::chrono::high_resolution_clock::now();
    differenceAB(setA, setB);
    auto finish9 = std::chrono::high_resolution_clock::now();
    auto time9 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish9 - start9);
    timet[8] = time9.count();
    auto start10 = std::chrono::high_resolution_clock::now();
    symmetricDifferenceAB(setA, setB);
    auto finish10 = std::chrono::high_resolution_clock::now();
    auto time10 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish10 - start10);
    timet[9] = time10.count();
}
void timeclassSet(__int64* timet, int N) {

    Set3::Set A = Set3::Set::createSet(N, 0, N * 10);
    Set3::Set B = Set3::Set::createSet(N, 0, N * 10);

    auto start1 = std::chrono::high_resolution_clock::now();
    Set3::Set::createSet(N, 0, N * 10);
    auto finish1 = std::chrono::high_resolution_clock::now();
    auto time1 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish1 - start1);
    timet[0] = time1.count();
    auto start2 = std::chrono::high_resolution_clock::now();
    A.sizeOfSet();
    auto finish2 = std::chrono::high_resolution_clock::now();
    auto time2 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish2 - start2);
    timet[1] = time2.count();
    auto start3 = std::chrono::high_resolution_clock::now();
    Set3::Set::isSubsetAB(A, A);
    auto finish3 = std::chrono::high_resolution_clock::now();
    auto time3 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish3 - start3);
    timet[2] = time3.count();
    auto start4 = std::chrono::high_resolution_clock::now();
    Set3::Set::isSubsetAB(A, B);
    auto finish4 = std::chrono::high_resolution_clock::now();
    auto time4 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish4 - start4);
    timet[3] = time4.count();
    auto start5 = std::chrono::high_resolution_clock::now();
    Set3::Set::isEquallyAB(A, A);
    auto finish5 = std::chrono::high_resolution_clock::now();
    auto time5 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish5 - start5);
    timet[4] = time5.count();
    auto start6 = std::chrono::high_resolution_clock::now();
    Set3::Set::isEquallyAB(A, B);
    auto finish6 = std::chrono::high_resolution_clock::now();
    auto time6 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish6 - start6);
    timet[5] = time6.count();
    auto start7 = std::chrono::high_resolution_clock::now();
    Set3::Set::consolidationAB(A, B);
    auto finish7 = std::chrono::high_resolution_clock::now();
    auto time7 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish7 - start7);
    timet[6] = time7.count();
    auto start8 = std::chrono::high_resolution_clock::now();
    Set3::Set::intersectionAB(A, B);
    auto finish8 = std::chrono::high_resolution_clock::now();
    auto time8 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish8 - start8);
    timet[7] = time8.count();
    auto start9 = std::chrono::high_resolution_clock::now();
    Set3::Set::differenceAB(A, B);
    auto finish9 = std::chrono::high_resolution_clock::now();
    auto time9 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish9 - start9);
    timet[8] = time9.count();
    auto start10 = std::chrono::high_resolution_clock::now();
    Set3::Set::symmetricDifferenceAB(A, B);
    auto finish10 = std::chrono::high_resolution_clock::now();
    auto time10 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish10 - start10);
    timet[9] = time10.count();
}
void timeList(__int64* timet, int N) {

    Set4::Set A = Set4::Set::createSet(N, 0, N * 10);
    Set4::Set B = Set4::Set::createSet(N, 0, N * 10);

    auto start1 = std::chrono::high_resolution_clock::now();
    Set4::Set::createSet(N, 0, N * 10);
    auto finish1 = std::chrono::high_resolution_clock::now();
    auto time1 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish1 - start1);
    timet[0] = time1.count();
    auto start2 = std::chrono::high_resolution_clock::now();
    A.sizeOfSet();
    auto finish2 = std::chrono::high_resolution_clock::now();
    auto time2 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish2 - start2);
    timet[1] = time2.count();
    auto start3 = std::chrono::high_resolution_clock::now();
    Set4::Set::isSubsetAB(A, A);
    auto finish3 = std::chrono::high_resolution_clock::now();
    auto time3 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish3 - start3);
    timet[2] = time3.count();
    auto start4 = std::chrono::high_resolution_clock::now();
    Set4::Set::isSubsetAB(A, B);
    auto finish4 = std::chrono::high_resolution_clock::now();
    auto time4 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish4 - start4);
    timet[3] = time4.count();
    auto start5 = std::chrono::high_resolution_clock::now();
    Set4::Set::isEquallyAB(A, A);
    auto finish5 = std::chrono::high_resolution_clock::now();
    auto time5 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish5 - start5);
    timet[4] = time5.count();
    auto start6 = std::chrono::high_resolution_clock::now();
    Set4::Set::isEquallyAB(A, B);
    auto finish6 = std::chrono::high_resolution_clock::now();
    auto time6 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish6 - start6);
    timet[5] = time6.count();
    auto start7 = std::chrono::high_resolution_clock::now();
    Set4::Set::consolidationAB(A, B);
    auto finish7 = std::chrono::high_resolution_clock::now();
    auto time7 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish7 - start7);
    timet[6] = time7.count();
    auto start8 = std::chrono::high_resolution_clock::now();
    Set4::Set::intersectionAB(A, B);
    auto finish8 = std::chrono::high_resolution_clock::now();
    auto time8 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish8 - start8);
    timet[7] = time8.count();
    auto start9 = std::chrono::high_resolution_clock::now();
    Set4::Set::differenceAB(A, B);
    auto finish9 = std::chrono::high_resolution_clock::now();
    auto time9 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish9 - start9);
    timet[8] = time9.count();
    auto start10 = std::chrono::high_resolution_clock::now();
    Set4::Set::symmetricDifferenceAB(A, B);
    auto finish10 = std::chrono::high_resolution_clock::now();
    auto time10 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish10 - start10);
    timet[9] = time10.count();
}
void timeSet(__int64* timet, int N) {

    Set5::Set A = Set5::Set::createSet(N, 0, N * 10);
    Set5::Set B = Set5::Set::createSet(N, 0, N * 10);

    auto start1 = std::chrono::high_resolution_clock::now();
    Set5::Set::createSet(N, 0, N * 10);
    auto finish1 = std::chrono::high_resolution_clock::now();
    auto time1 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish1 - start1);
    timet[0] = time1.count();
    auto start2 = std::chrono::high_resolution_clock::now();
    A.sizeOfSet();
    auto finish2 = std::chrono::high_resolution_clock::now();
    auto time2 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish2 - start2);
    timet[1] = time2.count();
    auto start3 = std::chrono::high_resolution_clock::now();
    Set5::Set::isSubsetAB(A, A);
    auto finish3 = std::chrono::high_resolution_clock::now();
    auto time3 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish3 - start3);
    timet[2] = time3.count();
    auto start4 = std::chrono::high_resolution_clock::now();
    Set5::Set::isSubsetAB(A, B);
    auto finish4 = std::chrono::high_resolution_clock::now();
    auto time4 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish4 - start4);
    timet[3] = time4.count();
    auto start5 = std::chrono::high_resolution_clock::now();
    Set5::Set::isEquallyAB(A, A);
    auto finish5 = std::chrono::high_resolution_clock::now();
    auto time5 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish5 - start5);
    timet[4] = time5.count();
    auto start6 = std::chrono::high_resolution_clock::now();
    Set5::Set::isEquallyAB(A, B);
    auto finish6 = std::chrono::high_resolution_clock::now();
    auto time6 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish6 - start6);
    timet[5] = time6.count();
    auto start7 = std::chrono::high_resolution_clock::now();
    Set5::Set::consolidationAB(A, B);
    auto finish7 = std::chrono::high_resolution_clock::now();
    auto time7 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish7 - start7);
    timet[6] = time7.count();
    auto start8 = std::chrono::high_resolution_clock::now();
    Set5::Set::intersectionAB(A, B);
    auto finish8 = std::chrono::high_resolution_clock::now();
    auto time8 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish8 - start8);
    timet[7] = time8.count();
    auto start9 = std::chrono::high_resolution_clock::now();
    Set5::Set::differenceAB(A, B);
    auto finish9 = std::chrono::high_resolution_clock::now();
    auto time9 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish9 - start9);
    timet[8] = time9.count();
    auto start10 = std::chrono::high_resolution_clock::now();
    Set5::Set::symmetricDifferenceAB(A, B);
    auto finish10 = std::chrono::high_resolution_clock::now();
    auto time10 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish10 - start10);
    timet[9] = time10.count();
}
void timeDeque(__int64* timet, int N) {
    Set6::Set A = Set6::Set::createSet(N, 0, N * 10);
    Set6::Set B = Set6::Set::createSet(N, 0, N * 10);

    auto start1 = std::chrono::high_resolution_clock::now();
    Set6::Set::createSet(N, 0, N * 10);
    auto finish1 = std::chrono::high_resolution_clock::now();
    auto time1 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish1 - start1);
    timet[0] = time1.count();
    auto start2 = std::chrono::high_resolution_clock::now();
    A.sizeOfSet();
    auto finish2 = std::chrono::high_resolution_clock::now();
    auto time2 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish2 - start2);
    timet[1] = time2.count();
    auto start3 = std::chrono::high_resolution_clock::now();
    Set6::Set::isSubsetAB(A, A);
    auto finish3 = std::chrono::high_resolution_clock::now();
    auto time3 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish3 - start3);
    timet[2] = time3.count();
    auto start4 = std::chrono::high_resolution_clock::now();
    Set6::Set::isSubsetAB(A, B);
    auto finish4 = std::chrono::high_resolution_clock::now();
    auto time4 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish4 - start4);
    timet[3] = time4.count();
    auto start5 = std::chrono::high_resolution_clock::now();
    Set6::Set::isEquallyAB(A, A);
    auto finish5 = std::chrono::high_resolution_clock::now();
    auto time5 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish5 - start5);
    timet[4] = time5.count();
    auto start6 = std::chrono::high_resolution_clock::now();
    Set6::Set::isEquallyAB(A, B);
    auto finish6 = std::chrono::high_resolution_clock::now();
    auto time6 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish6 - start6);
    timet[5] = time6.count();
    auto start7 = std::chrono::high_resolution_clock::now();
    Set6::Set::consolidationAB(A, B);
    auto finish7 = std::chrono::high_resolution_clock::now();
    auto time7 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish7 - start7);
    timet[6] = time7.count();
    auto start8 = std::chrono::high_resolution_clock::now();
    Set6::Set::intersectionAB(A, B);
    auto finish8 = std::chrono::high_resolution_clock::now();
    auto time8 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish8 - start8);
    timet[7] = time8.count();
    auto start9 = std::chrono::high_resolution_clock::now();
    Set6::Set::differenceAB(A, B);
    auto finish9 = std::chrono::high_resolution_clock::now();
    auto time9 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish9 - start9);
    timet[8] = time9.count();
    auto start10 = std::chrono::high_resolution_clock::now();
    Set6::Set::symmetricDifferenceAB(A, B);
    auto finish10 = std::chrono::high_resolution_clock::now();
    auto time10 = std::chrono::duration_cast<std::chrono::nanoseconds>(finish10 - start10);
    timet[9] = time10.count();
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Введите количество элементов: \n";
    cin >> N;
    cout << endl;
    __int64 t1[10];
    timeStructList(t1, N);
    __int64 t2[10];
    timeclassSet(t2, N);
    __int64 t3[10];
    timeList(t3, N);
    __int64 t4[10];
    timeSet(t4, N);
    __int64 t5[10];
    timeDeque(t5, N);

    string title[10] = { "Создание множества    ","Мощность множества    ","Подмножество АА       ","Подмножество АВ       ",
        "Равенство А=А         ","Равенство А=В         ","Объединение           ","Пересечение           ",
        "Разность              ", "Симметричная разность " };
	
    cout << "+-----------------------+--------------------+-------------------+--------------+--------------+---------------+" << endl;
    cout << "|   Название операции   | Односвязный список | Класс 'Множество' |     List     |      Set     |     Deque     |" << endl;
    cout << "+-----------------------+--------------------+-------------------+--------------+--------------+---------------+" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "| " << title[i];
        cout.setf(ios::left);
        cout.width(10);
        cout << "|  ";
        cout.setf(ios::left);
        cout.width(10);
        cout << t1[i];
        cout.setf(ios::left);
        cout.width(10);
        cout << " |  ";
        cout.setf(ios::left);
        cout.width(10);
        cout << t2[i];
        cout.setf(ios::left);
        cout.width(5);
        cout << " |  ";
        cout.setf(ios::left);
        cout.width(10);
        cout << t3[i];
        cout.setf(ios::left);
        cout.width(5);
        cout << " |  ";
        cout.setf(ios::left);
        cout.width(10);
        cout << t4[i];
        cout.setf(ios::left);
        cout.width(5);
        cout << " |  ";
        cout.setf(ios::left);
        cout.width(10);
        cout << t5[i];
        cout.setf(ios::left);
        cout.width(10);
        cout << "  |  " << endl;
        
    }
    cout << "+-----------------------+--------------------+-------------------+--------------+--------------+---------------+";
    return 0;
    return 0;
}