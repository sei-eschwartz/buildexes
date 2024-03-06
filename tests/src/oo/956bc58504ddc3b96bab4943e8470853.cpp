// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C0  {
/* method id 400 */ void func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2);
/* method id 401 */ virtual void func0 ();
/* method id 402 */ ~C0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
};
// definitions
/* method id 400 */ void C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2) {
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return;

}
/* method id 401 */ void C0::func0 () {
abstract_0 v6 = abstract_0();
return;

}
/* method id 402 */ C0::~C0 () {
return;

}
/* method id 403 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

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
