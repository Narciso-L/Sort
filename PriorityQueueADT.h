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

#ifndef PQ_PRIORITYQUEUEADT_H
#define PQ_PRIORITYQUEUEADT_H


class PriorityQueueADT {
public:
    virtual bool empty() = 0;
    virtual int size() = 0;
    virtual int min() = 0;
    virtual void insert(int x) = 0;
    virtual void removeMin() = 0;
    virtual void show() = 0;
};


#endif //PQ_PRIORITYQUEUEADT_H
