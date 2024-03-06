// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
/* method id 406 */ abstract_1 func0 (abstract_2 v8, abstract_2 v9, abstract_2 v10, abstract_2 v11);
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v12;
abstract_2 v13;
abstract_2 v14;
};
struct C2 : public virtual C1 {
/* method id 408 */ virtual abstract_1 func2 (abstract_2 v15);
/* method id 409 */ virtual abstract_1 func2 (abstract_0 v16);
/* method id 410 */ abstract_1 func0 (abstract_0 v18, abstract_2 v19, abstract_1* v20, abstract_1* v21);
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_1* v22;
};
struct C3  {
/* method id 413 */ C3 ();
/* method id 414 */ virtual ~C3 ();
C3 (special_constructor);
};
abstract_1 func5 (abstract_1* v43, abstract_2 v44, C1 v45, abstract_2 v46);
abstract_1 func6 (abstract_2 v51, abstract_2 v52, C1 v53, abstract_2 v54);
abstract_1 func7 (abstract_2 v59, abstract_2 v60, abstract_2 v61, C1 v62);
abstract_1 func8 (abstract_2 v66, abstract_2 v67, abstract_2 v68, abstract_2 v69);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func8(abstract_2(), abstract_2(), abstract_2(), abstract_2());

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

/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ abstract_1 C1::func0 (abstract_2 v8, abstract_2 v9, abstract_2 v10, abstract_2 v11) {
return abstract_1();

}
/* method id 407 */ C1::~C1 () {
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_1 C2::func2 (abstract_2 v15) {
return abstract_1();

}
/* method id 409 */ abstract_1 C2::func2 (abstract_0 v16) {
abstract_3 v17 = abstract_3();
return abstract_1();

}
/* method id 410 */ abstract_1 C2::func0 (abstract_0 v18, abstract_2 v19, abstract_1* v20, abstract_1* v21) {
return abstract_1();

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
return;

}
/* method id 414 */ C3::~C3 () {
abstract_2 v27 = abstract_2();
abstract_2 v28 = abstract_2();
abstract_2 v29 = abstract_2();
return;

}
C3::C3 (special_constructor)  {}

abstract_1 func5 (abstract_1* v43, abstract_2 v44, C1 v45, abstract_2 v46) {
abstract_2 v47;
abstract_3 v48;
abstract_2 v49;
abstract_2 v50;

return abstract_1();

}
abstract_1 func6 (abstract_2 v51, abstract_2 v52, C1 v53, abstract_2 v54) {
abstract_2 v55;
abstract_3 v56;
abstract_2 v57;
abstract_1** v58;

return ::func7(v52, v52, v52, v53);

}
abstract_1 func7 (abstract_2 v59, abstract_2 v60, abstract_2 v61, C1 v62) {
abstract_2 v63;
abstract_3 v64;
abstract_2 v65;

delete (new C1 ());
return ::func6(v59, v59, v62, v59);

}
abstract_1 func8 (abstract_2 v66, abstract_2 v67, abstract_2 v68, abstract_2 v69) {
abstract_1* v70;
abstract_2 v71;
C2 v72;

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: AbstractType{0}
12   | var13: AbstractType{2}
16   | var14: AbstractType{2}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
8    | var22: PtrType{AbstractType{1}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var12: AbstractType{0}
28   | var13: AbstractType{2}
32   | var14: AbstractType{2}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
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
