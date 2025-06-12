#include "garbage_collector.hpp"
#include <iostream>

namespace gc{
    std::unordered_map<Object*, Object*> GarbageCollector::objects;

    void GarbageCollector::addObject(Object* obj){
        obj->addReference();
        objects[obj] = obj;
    }

    void GarbageCollector::removeObject(Object* obj){
        if(objects.find(obj) != objects.end()){
            obj->removeReference();
            objects.erase(obj);
        }
    }
}