#include <iostream>
#include "garbage_collector.hpp"

int main(){
    gc::Object* obj1 = new gc::Object();

    gc::GarbageCollector::addObject(obj1);
    gc::GarbageCollector::removeObject(obj1);

    return 0;
}

