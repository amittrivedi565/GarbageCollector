#ifndef GC
#define GC
#include "object.hpp"
#include <unordered_map>

namespace gc{
    class GarbageCollector{
        public:
            static void addObject(Object* obj);
            static void removeObject(Object* obj);
        private:
            static std::unordered_map<Object*,Object*> objects;
    };
}


#endif
