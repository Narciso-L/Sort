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

#include "PQSorted.h"


// checks if list is empty
bool PQSorted::empty(){
    return mylist.empty();
}


// returns list's size
int PQSorted::size(){
    return mylist.size();
}


// returns the smallest number of a list
int PQSorted::min(){
    return mylist.front();
}


// inserts into a list in sorted order
void PQSorted::insert(int x){

    list<int>::iterator it;

    for (it = mylist.begin(); it != mylist.end(); it++){
        if (x < *it) break;
    }
    mylist.insert(it, x);
}


// removes the smallest value from a list, first position
void PQSorted::removeMin(){
    mylist.pop_front();
}


// displays list content
void PQSorted::show(){

    for(list<int>::iterator itt = mylist.begin(); itt != mylist.end(); itt++)
        cout<<" "<<*itt;

    cout << endl;
}
