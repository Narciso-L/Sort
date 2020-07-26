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

#include "PQUnsorted.h"


// checks if vector is empty
bool PQUnsorted::empty(){
    return V.empty();
}


// returns vector's size
int PQUnsorted::size(){
    return V.size();
}


// returns the smallest number of a vector
int PQUnsorted::min(){
    int smallest = 10000000;

    for(int i=0; i<V.size();i++){
        if(V[i]<smallest)
            smallest = V[i];
    }

    return smallest;
}


// inserts into a vector at the end
void PQUnsorted::insert(int x){
    V.push_back(x);
}


// removes the smallest value from a vector
void PQUnsorted::removeMin(){
    int smallest = 10000000;
    int pos = 0;

    for(int i=0;i<V.size();i++){
        if(V[i]<smallest) {
            smallest = V[i];
            pos = i;
        }
    }
   // cout << "pos: " << pos << endl;
    V.erase(V.begin()+pos);

}


// displays vector content
void PQUnsorted::show(){

    for(int i = 0;i<V.size();i++){
        cout <<" "<< V[i];
    }
    cout << endl;
}
