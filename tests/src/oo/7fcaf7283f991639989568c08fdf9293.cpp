// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v5);
/* method id 404 */ virtual abstract_0* func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9);
/* method id 405 */ virtual abstract_2 func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0** v10;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ abstract_2 func0 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual abstract_0* func0 (abstract_0** v12, abstract_0** v13, abstract_0** v14);
/* method id 410 */ virtual abstract_3 func3 (abstract_0** v16, abstract_0** v17, abstract_0** v18, abstract_0** v19);
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_0** v22;
};
struct C3  {
/* method id 412 */ abstract_0* func4 (C2 v23, C2 v24, C2 v25, C2 v26);
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ C3 ();
/* method id 415 */ virtual abstract_0** func5 (abstract_5 v34, abstract_5 v35, C2 v36, abstract_0** v37);
C3 (special_constructor);
abstract_5 v40;
C2 v41;
C2 v42;
C2 v43;
};
abstract_0* func6 (C2 v44, C2 v45, C2 v46, abstract_0** v47);
abstract_0 func7 ();
abstract_0* func8 (abstract_6 v51);
abstract_0* func9 (abstract_6 v56, C2 v57, C2 v58, C2 v59);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
v1 = new abstract_0* ();
v1 = new abstract_0* ();
return new abstract_0 ();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
return new abstract_0 ();

}
/* method id 404 */ abstract_0* C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
return ((abstract_0*) 0);

}
/* method id 405 */ abstract_2 C1::func0 () {
delete (new C1 ());
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_2 C2::func0 () {
return abstract_2();

}
/* method id 408 */ C2::~C2 () {
abstract_0** v11 = ((abstract_0**) 0);
return;

}
/* method id 409 */ abstract_0* C2::func0 (abstract_0** v12, abstract_0** v13, abstract_0** v14) {
v22 = v10;
v22 = v10;
return ((abstract_0*) 0);

}
/* method id 410 */ abstract_3 C2::func3 (abstract_0** v16, abstract_0** v17, abstract_0** v18, abstract_0** v19) {
abstract_0** v20 = new abstract_0* ();
abstract_0** v21 = new abstract_0* ();
delete (new C1 ());
return abstract_3();

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ abstract_0* C3::func4 (C2 v23, C2 v24, C2 v25, C2 v26) {
v41 = *((new C2 ()));
return new abstract_0 ();

}
/* method id 413 */ C3::~C3 () {
C2 v27 = *(((C2*) 0));
C2 v28 = *(((C2*) 0));
C2 v29 = *(((C2*) 0));
v40 = v40;
v40 = v40;
v40 = v40;
v40 = v40;
return;

}
/* method id 414 */ C3::C3 () {
abstract_0** v30 = new abstract_0* ();
C2 v31 = *((new C2 ()));
abstract_5 v32 = abstract_5();
C2 v33 = *((new C2 ()));
return;

}
/* method id 415 */ abstract_0** C3::func5 (abstract_5 v34, abstract_5 v35, C2 v36, abstract_0** v37) {
abstract_0** v38 = new abstract_0* ();
C2 v39 = *(&(*(((C2*) 0))));
delete (new C1 ());
return v38;

}
C3::C3 (special_constructor)  {}

abstract_0* func6 (C2 v44, C2 v45, C2 v46, abstract_0** v47) {
C2 v48;
C2 v49;

delete (new C1 ());
return new abstract_0 ();

}
abstract_0 func7 () {
abstract_6 v50;

return abstract_0();

}
abstract_0* func8 (abstract_6 v51) {
C2 v52;
C2 v53;
abstract_6 v54;
C2 v55;

return new abstract_0 ();

}
abstract_0* func9 (abstract_6 v56, C2 v57, C2 v58, C2 v59) {
abstract_5 v60;
C2 v61;
C2 v62;

return ((abstract_0*) 0);

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var10: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   | {vtordisp for vbase 1}
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var10: PtrType{PtrType{AbstractType{0}}}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(116)
0    +---
0    | {vfptr}
4    | var40: AbstractType{5}
8    | var41: ClassType{2}
44   | var42: ClassType{2}
80   | var43: ClassType{2}
116  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 116;
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
