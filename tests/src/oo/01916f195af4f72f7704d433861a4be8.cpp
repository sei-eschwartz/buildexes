// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7);
/* method id 403 */ virtual ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
abstract_2 func2 (abstract_4 v12, abstract_4 v13, abstract_0 v14, abstract_4 v15);
abstract_2 func3 ();
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
v3 = abstract_1();
v3 = abstract_1();
v3 = abstract_1();
v3 = abstract_1();
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
v4 = abstract_1();
v4 = abstract_1();
v4 = abstract_1();
v4 = abstract_1();
return ::func2(abstract_4(), abstract_4(), v6, abstract_4());

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7) {
return abstract_2();

}
/* method id 403 */ C0::~C0 () {
abstract_0 v8 = abstract_0();
abstract_3 v9 = abstract_3();
abstract_3 v10 = abstract_3();
abstract_1 v11 = abstract_1();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_2 func2 (abstract_4 v12, abstract_4 v13, abstract_0 v14, abstract_4 v15) {

((new C0 ()))->C0::func0(abstract_1(), abstract_1());
return abstract_2();

}
abstract_2 func3 () {
abstract_1 v16;
abstract_5 v17;
abstract_1 v18;
abstract_1 v19;

return ::func2(abstract_4(), abstract_4(), abstract_0(), abstract_4());

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
