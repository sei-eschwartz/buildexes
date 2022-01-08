#include "oohelper.hpp"

struct OtherBase {
    // OtherBase needs to have a vftable or Derived will include Base before OtherBase
    virtual void blah() {}
    int nonvirt () {
        return 2;
    }
    int y;
};

struct Base {
    virtual int foo() {
        return 8;
    };
};

struct Derived : public OtherBase, Base {
    int a;
    virtual int foo() override {
        // foo overrides Base::foo, but we call OtherBase::nonvirt whose pointer is different
        OtherBase::nonvirt ();
        // Negative offset to reach member in OtherBase as well
        return OtherBase::y;
    };
};

int main() {
    Derived d;
    d.foo ();

    Base b;
    b.foo ();
}
