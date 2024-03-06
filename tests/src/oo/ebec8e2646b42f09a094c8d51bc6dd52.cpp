// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual abstract_2 func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2 func0 (abstract_1 v4, abstract_1 v5);
/* method id 402 */ virtual abstract_2 func0 (abstract_0 v7, abstract_1 v8);
/* method id 403 */ virtual abstract_2 func0 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_2 func0 (abstract_1 v14, abstract_1 v15);
/* method id 406 */ virtual abstract_2 func1 (abstract_0 v20, abstract_0 v21);
/* method id 407 */ abstract_2 func1 (abstract_3 v26, abstract_1 v27);
/* method id 408 */ virtual abstract_2 func1 (abstract_1 v32, abstract_1 v33);
/* method id 409 */ C1 ();
C1 (special_constructor);
};
abstract_4 func3 (abstract_1 v35);
abstract_2 func4 ();
abstract_4 func5 (abstract_3 v40, abstract_0 v41, abstract_6 v42, abstract_6 v43);
abstract_2* func6 (abstract_6 v45, abstract_3 v46, abstract_1 v47, abstract_1 v48);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
return ::func4();

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
return abstract_2();

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
return ::func4();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
delete (new C0 ());
return ::func4();

}
/* method id 406 */ abstract_2 C1::func1 (abstract_0 v20, abstract_0 v21) {
abstract_1 v22 = abstract_1();
abstract_5 v23 = abstract_5();
abstract_5 v24 = abstract_5();
abstract_5 v25 = abstract_5();
return abstract_2();

}
/* method id 407 */ abstract_2 C1::func1 (abstract_3 v26, abstract_1 v27) {
abstract_5 v28 = abstract_5();
abstract_5 v29 = abstract_5();
abstract_0 v30 = abstract_0();
abstract_1 v31 = abstract_1();
return abstract_2();

}
/* method id 408 */ abstract_2 C1::func1 (abstract_1 v32, abstract_1 v33) {
abstract_1 v34 = abstract_1();
delete (new C1 ());
v32 = v32;
v32 = v32;
return abstract_2();

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_4 func3 (abstract_1 v35) {
abstract_5 v36;

return abstract_4();

}
abstract_2 func4 () {
abstract_6 v37;
abstract_1 v38;
abstract_6 v39;

delete (new C0 ());
return abstract_2();

}
abstract_4 func5 (abstract_3 v40, abstract_0 v41, abstract_6 v42, abstract_6 v43) {
abstract_1 v44;

delete (new C1 ());
return ::func3(abstract_1());

}
abstract_2* func6 (abstract_6 v45, abstract_3 v46, abstract_1 v47, abstract_1 v48) {
abstract_1 v49;

return new abstract_2 ();

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
/*
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
