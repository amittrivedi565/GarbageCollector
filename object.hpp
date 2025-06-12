#ifndef OBJECT_HPP
#define OBJECT_HPP

namespace gc {

class Object {
public:
    Object();
    void addReference();
    void removeReference();

private:
    int refCount;
};

}
#endif // OBJECT_HPP
