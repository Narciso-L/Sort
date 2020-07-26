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

#include "PQHeap.h"


// checks if heap is empty
bool PQHeap::empty(){
    return heap.empty();
}


// returns heap's size
int PQHeap::size(){
    return heap.size();
}


// returns the smallest number of a heap
int PQHeap::min(){
    if (heap.size() == 0) return -1;
    else return heap.front();
}


// returns left child
int PQHeap::leftChild(int parent) {
    int left = 2*parent+1;
    if(left < heap.size()) return left;
    else return -1;
}


// returns right child
int PQHeap::rightChild(int parent){
    int right = 2*parent +2;
    if(right < heap.size()) return right;
    else return -1;
}

// returns child's parent
int PQHeap::parent(int child){
    int p = (child-1)/2;
    if(child == 0) return -1;
    else return p;
}


// swap between child and parent if there is no heap-order, bottom-up
void PQHeap::upheap(int index) {
    int parentIndex, tmp;

    if (index != 0) {
        parentIndex = parent(index);
        if (heap[parentIndex] > heap[index]){
            swap(heap[parentIndex],heap[index]);
        /*  tmp = heap[parentIndex];
            heap[parentIndex] = heap[index];
            heap[index] = tmp; */
            upheap(parentIndex);

            if (index == 0) return;
        }
    }
}


// swap between children and parent if there is no heap-order or b-tree property, top-down
void PQHeap::downheap(int index) {
    int leftChildIndex, rightChildIndex, minIndex, tmp;

    leftChildIndex = leftChild(index);
    rightChildIndex = rightChild(index);

    if (rightChildIndex >= heap.size()){
        if (leftChildIndex >= heap.size()) return;
        else minIndex = leftChildIndex;
    }
    else{
        if (heap[leftChildIndex] <= heap[rightChildIndex]) minIndex = leftChildIndex;
        else minIndex = rightChildIndex;
    }

    if (heap[index] > heap[minIndex]){
        swap(heap[index],heap[minIndex]);
     /* tmp = heap[minIndex];
        heap[minIndex] = heap[index];
        heap[index] = tmp;*/
        downheap(minIndex);
    }
}


// inserts into a heap
void PQHeap::insert(int x){
    heap.push_back(x);
    upheap(heap.size()-1);
}


// removes the smallest value from a heap, first position
void PQHeap::removeMin(){

    if (heap.size() == 0){
        cout<<"Empty heap"<<endl;
        return;
    }
    heap[0] = heap.at(heap.size()-1);
    heap.pop_back();
    downheap(0);
}


// displays the heap
void PQHeap::show(){

    vector<int>::iterator position = heap.begin();
    cout << "Heap = ";
    while( position != heap.end()){
        cout << *position << " ";
        ++position;
    }
    cout << endl;
}
