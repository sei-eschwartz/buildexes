// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0 func0 (C0* v0, C0* v1);
/* method id 403 */ virtual C0 func1 (C0* v6, C0* v7, C0* v8, C0* v9);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
C0* v44;
C0* v45;
C0* v46;
C0* v47;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_0*** func0 (C0* v55, C0* v56, C0* v57);
C3 (special_constructor);
C0* v60;
C0* v61;
};
C0 func3 (C0* v62);
abstract_0* func4 (C0* v63, C0* v64, abstract_1 v65, C0* v66);
abstract_0* func5 (abstract_1 v68, abstract_1 v69, abstract_1 v70, abstract_1 v71);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0 C1::func0 (C0* v0, C0* v1) {
C0* v2 = ((C0*) 0);
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C0* v5 = ((C0*) 0);
v4 = v2;
v4 = v2;
v4 = v2;
return *(&(::func3(v2)));

}
/* method id 403 */ C0 C1::func1 (C0* v6, C0* v7, C0* v8, C0* v9) {
v7 = v47;
return (((C1*) 0))->C1::func0(v6, v6);

}
/* method id 404 */ C1::C1 () {
C0* v10 = ((C0*) 0);
C0* v11 = ((C0*) 0);
C0* v12 = ((C0*) 0);
C0* v13 = ((C0*) 0);
return;

}
/* method id 405 */ C1::~C1 () {
C0* v40 = (new C0 ());
C0* v41 = (new C0 ());
C0* v42 = (new C0 ());
C0* v43 = (new C0 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
C0* v48 = (new C0 ());
C0* v49 = (new C0 ());
C0* v50 = (new C0 ());
C0* v51 = &(*(&(*(((C0*) 0)))));
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
C0* v52 = ((C0*) 0);
v60 = &(::func3(v60));
v60 = &(::func3(v60));
v60 = &(::func3(v60));
return;

}
/* method id 409 */ C3::C3 () {
C0* v53 = ((C0*) 0);
C0* v54 = &(*(&(*((new C0 ())))));
return;

}
/* method id 410 */ abstract_0*** C3::func0 (C0* v55, C0* v56, C0* v57) {
C0* v58 = ((C0*) 0);
delete (new C2 ());
return new abstract_0** ();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C0 func3 (C0* v62) {

v62 = (new C0 ());
return *(v62);

}
abstract_0* func4 (C0* v63, C0* v64, abstract_1 v65, C0* v66) {
abstract_1 v67;

v65 = abstract_1();
v65 = abstract_1();
v65 = abstract_1();
v65 = abstract_1();
return ((abstract_0*) 0);

}
abstract_0* func5 (abstract_1 v68, abstract_1 v69, abstract_1 v70, abstract_1 v71) {
C3 v72;
C3 v73;
abstract_1 v74;

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var44: PtrType{ClassType{0}}
12   | var45: PtrType{ClassType{0}}
16   | var46: PtrType{ClassType{0}}
20   | var47: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(32)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | {vbptr}
16   | var44: PtrType{ClassType{0}}
20   | var45: PtrType{ClassType{0}}
24   | var46: PtrType{ClassType{0}}
28   | var47: PtrType{ClassType{0}}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | +---
8    | var60: PtrType{ClassType{0}}
12   | var61: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var44: PtrType{ClassType{0}}
32   | var45: PtrType{ClassType{0}}
36   | var46: PtrType{ClassType{0}}
40   | var47: PtrType{ClassType{0}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
