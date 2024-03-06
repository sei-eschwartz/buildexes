// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void func0 (abstract_2 v1);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
abstract_0**** func2 (abstract_2 v8, abstract_2 v9);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_1** v0 = new abstract_1* ();
::func2(abstract_2(), abstract_2());
::func2(abstract_2(), abstract_2());
::func2(abstract_2(), abstract_2());
return;

}
/* method id 401 */ void C0::func0 (abstract_2 v1) {
abstract_1** v2 = new abstract_1* ();
abstract_1** v3 = new abstract_1* ();
abstract_1** v4 = new abstract_1* ();
abstract_2 v5 = abstract_2();
return;

}
/* method id 402 */ C0::C0 () {
abstract_1** v6 = new abstract_1* ();
abstract_1** v7 = new abstract_1* ();
::func2(abstract_2(), abstract_2());
::func2(abstract_2(), abstract_2());
(((C0*) 0))->C0::func0(abstract_2());
::func2(abstract_2(), abstract_2());
return;

}
C0::C0 (special_constructor)  {}

abstract_0**** func2 (abstract_2 v8, abstract_2 v9) {

v9 = v9;
return new abstract_0*** ();

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
