// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_0** func0 ();
/* method id 401 */ ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
// definitions
/* method id 400 */ abstract_0** C0::func0 () {
abstract_1 v0 = abstract_1();
abstract_1 v1 = abstract_1();
abstract_1 v2 = abstract_1();
abstract_1 v3 = abstract_1();
return ((abstract_0**) 0);

}
/* method id 401 */ C0::~C0 () {
abstract_1 v8 = abstract_1();
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
abstract_3 v11 = abstract_3();
return;

}
/* method id 402 */ C0::C0 () {
abstract_4 v12 = abstract_4();
return;

}
C0::C0 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
