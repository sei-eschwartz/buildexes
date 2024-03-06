// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_0 func0 (abstract_0* v0);
/* method id 401 */ virtual abstract_0 func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
abstract_0 func2 (abstract_1 v6, abstract_1 v7, abstract_1 v8, C0 v9);
abstract_0 func3 ();
abstract_0 func4 (abstract_1 v15);
abstract_0 func5 (abstract_2 v16, C0 v17);
// definitions
/* method id 400 */ abstract_0 C0::func0 (abstract_0* v0) {
abstract_0* v1 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 () {
abstract_0* v2 = ((abstract_0*) 0);
abstract_0* v3 = ((abstract_0*) 0);
abstract_0* v4 = ((abstract_0*) 0);
abstract_0* v5 = ((abstract_0*) 0);
delete (new C0 ());
return abstract_0();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_0 func2 (abstract_1 v6, abstract_1 v7, abstract_1 v8, C0 v9) {
abstract_1 v10;

return abstract_0();

}
abstract_0 func3 () {
abstract_1 v11;
abstract_2 v12;
abstract_2 v13;
abstract_1 v14;

v11 = v14;
return abstract_0();

}
abstract_0 func4 (abstract_1 v15) {

return abstract_0();

}
abstract_0 func5 (abstract_2 v16, C0 v17) {
abstract_2 v18;

delete (new C0 ());
return abstract_0();

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
