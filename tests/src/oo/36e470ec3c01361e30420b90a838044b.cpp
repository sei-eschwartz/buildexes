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

struct C2;

struct C3;

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
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_5 v23;
abstract_0 v24;
abstract_0 v25;
abstract_1 v26;
};
struct C2  {
/* method id 408 */ virtual abstract_2 func0 (abstract_5 v27);
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C3 ();
C3 (special_constructor);
};
abstract_2 func4 (abstract_2* v29, abstract_0 v30, abstract_0 v31);
abstract_4 func5 (abstract_1 v34, abstract_1 v35, abstract_1 v36, abstract_1 v37);
abstract_2 func6 (abstract_1 v40, abstract_2* v41, abstract_2* v42, abstract_4* v43);
abstract_4 func7 (abstract_6 v47, abstract_2* v48, abstract_2* v49);
// definitions
/* method id 400 */ abstract_2 C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
delete (new C0 ());
return abstract_2();

}
/* method id 401 */ abstract_2 C0::func0 (abstract_1 v4, abstract_1 v5) {
abstract_0 v6 = abstract_0();
delete (new C2 ());
return ::func6(v5, new abstract_2 (), new abstract_2 (), ((abstract_4*) 0));

}
/* method id 402 */ abstract_2 C0::func0 (abstract_0 v7, abstract_1 v8) {
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_3 v11 = abstract_3();
abstract_3 v12 = abstract_3();
v9 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
v9 = abstract_0();
return ::func4(new abstract_2 (), v9, v10);

}
/* method id 403 */ abstract_2 C0::func0 () {
abstract_0 v13 = abstract_0();
delete (new C3 ());
return ::func6(abstract_1(), new abstract_2 (), new abstract_2 (), ((abstract_4*) 0));

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_2 C1::func0 (abstract_1 v14, abstract_1 v15) {
abstract_1 v16 = abstract_1();
abstract_1 v17 = abstract_1();
abstract_5 v18 = abstract_5();
abstract_5 v19 = abstract_5();
delete (new C2 ());
return ::func6(abstract_1(), new abstract_2 (), new abstract_2 (), ((abstract_4*) 0));

}
/* method id 406 */ C1::~C1 () {
return;

}
/* method id 407 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_2 C2::func0 (abstract_5 v27) {
delete (new C2 ());
return ::func6(abstract_1(), new abstract_2 (), new abstract_2 (), new abstract_4 ());

}
/* method id 409 */ C2::~C2 () {
return;

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::~C3 () {
return;

}
/* method id 412 */ C3::C3 () {
abstract_1 v28 = abstract_1();
return;

}
C3::C3 (special_constructor)  {}

abstract_2 func4 (abstract_2* v29, abstract_0 v30, abstract_0 v31) {
abstract_2* v32;
abstract_0 v33;

return abstract_2();

}
abstract_4 func5 (abstract_1 v34, abstract_1 v35, abstract_1 v36, abstract_1 v37) {
abstract_1 v38;
abstract_1 v39;

return abstract_4();

}
abstract_2 func6 (abstract_1 v40, abstract_2* v41, abstract_2* v42, abstract_4* v43) {
abstract_4* v44;
abstract_4* v45;
abstract_5 v46;

delete (new C2 ());
return abstract_2();

}
abstract_4 func7 (abstract_6 v47, abstract_2* v48, abstract_2* v49) {

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
/*
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var23: AbstractType{5}
12   | var24: AbstractType{0}
16   | var25: AbstractType{0}
20   | var26: AbstractType{1}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
