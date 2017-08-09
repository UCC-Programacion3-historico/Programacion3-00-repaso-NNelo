#include <iostream>
#include <ctime>

using namespace std;

int main() {
    clock_t begin;
    begin = clock();

    cout << "Comenzando a medir Tiempo\n" << endl;

    int array[100024];

    for (int i = 0; i < 100024; ++i)
        array[i] = i;

    clock_t end = clock();

    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

    cout << "Tardo elapsed_secs" << elapsed_secs << "\n" << std::endl;
    return 0;
}