#include "object.hpp"
#include <iostream>

namespace gc {
    Object::Object():refCount(0){
        std::cout<<"Object Created. "<<std::endl;
    }

    void Object::addReference(){
        refCount++;
        std::cout<<"Object Reference Added. "<<std::endl;
    }

    void Object::removeReference(){
        refCount--;
        if(refCount == 0){
            std::cout<<"Object Destroyed. "<<std::endl;
            delete this;
        }
    }
}
