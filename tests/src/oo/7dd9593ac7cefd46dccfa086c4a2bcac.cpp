// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ ~C0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v13;
abstract_4 v14;
abstract_4 v15;
abstract_0 v16;
};
abstract_2 func2 (abstract_1 v17);
abstract_2 func3 (abstract_0 v22, abstract_0 v23, abstract_1 v24, abstract_1 v25);
abstract_2 func4 (abstract_0 v30);
abstract_2 func5 (abstract_5 v31, abstract_3 v32);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
::func2(v3);
::func2(v3);
::func2(v3);
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
return abstract_2();

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
::func2(v8);
::func2(v8);
::func2(v8);
return ::func3(v7, v7, v13, v13);

}
/* method id 403 */ C0::~C0 () {
::func2(v13);
::func2(v13);
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

abstract_2 func2 (abstract_1 v17) {
abstract_1 v18;
abstract_1 v19;
abstract_5 v20;
abstract_0 v21;

((new C0 ()))->C0::func0(v21, abstract_1());
((new C0 ()))->C0::func0(v21, abstract_1());
((new C0 ()))->C0::func0(v21, abstract_1());
((new C0 ()))->C0::func0(v21, abstract_1());
return abstract_2();

}
abstract_2 func3 (abstract_0 v22, abstract_0 v23, abstract_1 v24, abstract_1 v25) {
abstract_0 v26;
abstract_1 v27;
abstract_1 v28;
abstract_0 v29;

delete (new C0 ());
v29 = v22;
v29 = v22;
v29 = v22;
return abstract_2();

}
abstract_2 func4 (abstract_0 v30) {

delete (new C0 ());
return abstract_2();

}
abstract_2 func5 (abstract_5 v31, abstract_3 v32) {
abstract_6 v33;
abstract_1 v34;
abstract_0 v35;

return abstract_2();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var13: AbstractType{1}
8    | var14: AbstractType{4}
12   | var15: AbstractType{4}
16   | var16: AbstractType{0}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
