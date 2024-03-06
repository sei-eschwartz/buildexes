// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ virtual abstract_1 func0 (abstract_0 v1, abstract_0 v2);
/* method id 402 */ abstract_3 func0 (abstract_2 v8);
/* method id 403 */ virtual abstract_3 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
abstract_4 func2 (abstract_2 v52, abstract_2 v53);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2) {
return abstract_1();

}
/* method id 402 */ abstract_3 C0::func0 (abstract_2 v8) {
abstract_2 v9 = abstract_2();
abstract_0 v10 = abstract_0();
return abstract_3();

}
/* method id 403 */ abstract_3 C0::func0 () {
abstract_2 v51 = abstract_2();
return abstract_3();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_4 func2 (abstract_2 v52, abstract_2 v53) {
abstract_0 v54;
abstract_2 v55;

return abstract_4();

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
