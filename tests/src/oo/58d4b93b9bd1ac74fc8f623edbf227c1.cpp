// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void*** func1 ();
/* method id 402 */ C0 ();
/* method id 403 */ virtual void*** func2 (abstract_1 v10, void**** v11);
C0 (special_constructor);
};
void*** func3 (void*** v13, void**** v14, abstract_1 v15, void*** v16);
// definitions
/* method id 400 */ C0::~C0 () {
void**** v0 = new void*** ();
abstract_1 v1 = abstract_1();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
return;

}
/* method id 401 */ void*** C0::func1 () {
void**** v4 = new void*** ();
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
v6 = v6;
v6 = v6;
return new void** ();

}
/* method id 402 */ C0::C0 () {
abstract_2 v8 = abstract_2();
abstract_2 v9 = abstract_2();
return;

}
/* method id 403 */ void*** C0::func2 (abstract_1 v10, void**** v11) {
abstract_3 v12 = abstract_3();
return ((void***) 0);

}
C0::C0 (special_constructor)  {}

void*** func3 (void*** v13, void**** v14, abstract_1 v15, void*** v16) {
void**** v17;

return (((C0*) 0))->C0::func1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
