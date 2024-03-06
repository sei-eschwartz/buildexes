// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ virtual abstract_1 func1 (abstract_1* v1, abstract_1* v2);
/* method id 403 */ C0 ();
C0 (special_constructor);
};
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
delete (new C0 ());
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1* v0 = ((abstract_1*) 0);
delete (new C0 ());
(((C0*) 0))->C0::func1(v0, ((abstract_1*) 0));
return;

}
/* method id 402 */ abstract_1 C0::func1 (abstract_1* v1, abstract_1* v2) {
abstract_2 v3 = abstract_2();
return abstract_1();

}
/* method id 403 */ C0::C0 () {
abstract_3 v4 = abstract_3();
abstract_1* v5 = ((abstract_1*) 0);
abstract_2 v6 = abstract_2();
abstract_2 v7 = abstract_2();
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
