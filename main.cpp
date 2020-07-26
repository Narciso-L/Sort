/*Copyright (C) <2016>  <Narciso López-López>
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/


#include <iostream>
#include <ctime>
#include "PQUnsorted.h"
#include "PQSorted.h"
#include "PQHeap.h"



int main(int argc, char *argv[]) {

    PriorityQueueADT* pq = new PQSorted();//new PQHeap(); new PQUnsorted(); //
    vector<int> V1, V2;

    int elements;
    cout << "Introduce el numero de elementos: ";
    cin >> elements;
    cout <<endl;


    int e = 0;
    srand (time(NULL));

    for(int i = 0;i<elements;i++){
        V1.push_back(rand()%200000);
    }

    vector<int>::iterator pos = V1.begin();
    cout << "Heap = ";
    while ( pos != V1.end() ) {
        cout << *pos << " ";
        ++pos;
    }
    cout << endl;

    cout << endl;
    clock_t clk = clock();

    clk = clock();

    for(int i=0; i<elements; i++){
        pq->insert(V1[i]);
    }

  //  pq->show();

    while(!pq->empty()){
        e = pq->min();
        V2.push_back(e);
        pq->removeMin();
    }

    cout<< "Tiempo total: "<< (double)(clock() - clk)/ CLOCKS_PER_SEC << " "<<endl;

    vector<int>::iterator position = V2.begin();
    cout << "Heap = ";
    while ( position != V2.end() ) {
        cout << *position << " ";
        ++position;
    }

    return EXIT_SUCCESS;
}

