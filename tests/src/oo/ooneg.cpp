#include "oohelper.hpp"

struct OtherBase {
    // OtherBase needs to have a vftable or Derived will include Base before OtherBase
    virtual void blah() {}
    int nonvirt () {
      y = 10;
      return y;
    }
    int y;
};

struct Base {

  int x = 42;

    virtual int foo() {
        return x;
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
