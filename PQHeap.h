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

#ifndef PQ_PQHEAP_H
#define PQ_PQHEAP_H

#include <iostream>
#include <vector>
#include "PriorityQueueADT.h"


using namespace std;


class PQHeap: public PriorityQueueADT{
private:

    vector<int> heap;

    int leftChild(int parent);
    int rightChild(int parent);
    int parent(int child);
    void upheap(int index);
    void downheap(int index);

public:

    bool empty();
    int size();
    int min();
    void insert(int x);
    void removeMin();
    void show();
};

#endif //PQ_PQHEAP_H
