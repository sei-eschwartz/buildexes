// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_1 func0 ();
/* method id 406 */ virtual abstract_1 func1 (abstract_0 v12, abstract_0 v13, abstract_0 v14);
/* method id 407 */ virtual abstract_1 func2 ();
/* method id 408 */ virtual abstract_1 func3 ();
/* method id 409 */ C1 ();
C1 (special_constructor);
};
abstract_1 func5 (abstract_3 v21, abstract_4* v22);
abstract_4 func6 (abstract_5 v23);
abstract_1 func7 (abstract_3 v24, abstract_2 v25, abstract_1* v26, abstract_2 v27);
abstract_1 func8 (abstract_2 v32, abstract_2 v33, abstract_2 v34);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
v0 = v0;
v0 = v0;
v0 = v0;
v0 = v0;
return ::func7(abstract_3(), abstract_2(), ((abstract_1*) 0), abstract_2());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func7(abstract_3(), abstract_2(), ((abstract_1*) 0), abstract_2());

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = ((abstract_1*) 0);
abstract_0 v11 = abstract_0();
delete (new C1 ());
return ::func7(abstract_3(), abstract_2(), new abstract_1 (), abstract_2());

}
/* method id 406 */ abstract_1 C1::func1 (abstract_0 v12, abstract_0 v13, abstract_0 v14) {
abstract_1* v15 = ((abstract_1*) 0);
abstract_1* v16 = ((abstract_1*) 0);
return abstract_1();

}
/* method id 407 */ abstract_1 C1::func2 () {
abstract_2 v17 = abstract_2();
abstract_3 v18 = abstract_3();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
return abstract_1();

}
/* method id 408 */ abstract_1 C1::func3 () {
return ::func8(abstract_2(), abstract_2(), abstract_2());

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func5 (abstract_3 v21, abstract_4* v22) {

return ::func8(abstract_2(), abstract_2(), abstract_2());

}
abstract_4 func6 (abstract_5 v23) {

delete (new C1 ());
return abstract_4();

}
abstract_1 func7 (abstract_3 v24, abstract_2 v25, abstract_1* v26, abstract_2 v27) {
abstract_2 v28;
abstract_2 v29;
abstract_2 v30;
abstract_2 v31;

return abstract_1();

}
abstract_1 func8 (abstract_2 v32, abstract_2 v33, abstract_2 v34) {
abstract_2 v35;
abstract_2 v36;

return abstract_1();

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
