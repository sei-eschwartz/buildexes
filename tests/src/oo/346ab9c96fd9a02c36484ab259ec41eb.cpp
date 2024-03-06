// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2 : public virtual C0, public C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual void func2 ();
/* method id 406 */ ~C2 ();
C2 (special_constructor);
C1 v13;
};
struct C3 : public virtual C1 {
/* method id 407 */ virtual void func0 (C1 v14, abstract_0 v15, abstract_0 v16);
/* method id 408 */ C3 ();
/* method id 409 */ virtual void func0 (abstract_0 v25, C1 v26, void* v27);
/* method id 410 */ ~C3 ();
C3 (special_constructor);
C1 v42;
C1 v43;
C1 v44;
C1 v45;
};
void func5 (C1 v46, C1 v47, C1 v48, C1 v49);
void func6 (C1 v54, C1 v55, C0 v56);
void func7 (C1 v60, C1 v61, C1 v62, abstract_0 v63);
void func8 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
C1 v2 = *(((C1*) 0));
return;

}
/* method id 405 */ void C2::func2 () {
C0 v3 = *(&(*(((C0*) 0))));
C1 v4 = *((new C1 ()));
C1 v5 = *((new C1 ()));
abstract_0 v6 = abstract_0();
return ::func6(v4, v4, v1);

}
/* method id 406 */ C2::~C2 () {
C1 v7 = *(((C1*) 0));
C1 v8 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ void C3::func0 (C1 v14, abstract_0 v15, abstract_0 v16) {
C1 v17 = *(&(*(((C1*) 0))));
C1 v18 = *((new C1 ()));
C0 v19 = *(((C0*) 0));
C0 v20 = *(&(*((new C0 ()))));
delete (new C3 ());
return ::func8();

}
/* method id 408 */ C3::C3 () {
C0 v21 = *((new C0 ()));
void* v22 = ((void*) 0);
void* v23 = ((void*) 0);
void* v24 = ((void*) 0);
return;

}
/* method id 409 */ void C3::func0 (abstract_0 v25, C1 v26, void* v27) {
void* v28 = ((void*) 0);
void* v29 = ((void*) 0);
return ::func6(v42, v42, v1);

}
/* method id 410 */ C3::~C3 () {
C1 v38 = *(((C1*) 0));
C1 v39 = *(((C1*) 0));
C1 v40 = *(((C1*) 0));
C1 v41 = *(((C1*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func5 (C1 v46, C1 v47, C1 v48, C1 v49) {
C1 v50;
abstract_0 v51;
C1 v52;
void* v53;

delete (new C1 ());
return;

}
void func6 (C1 v54, C1 v55, C0 v56) {
C1 v57;
C1 v58;
void* v59;

return;

}
void func7 (C1 v60, C1 v61, C1 v62, abstract_0 v63) {
C1 v64;
C1 v65;
C1 v66;
C1 v67;

return;

}
void func8 () {

delete (new C3 ());
return;

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
0    | {vbptr}
4    | var0: ClassType{0}
8    | var1: ClassType{0}
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
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | {vbptr}
8    | | var0: ClassType{0}
12   | | var1: ClassType{0}
16   | +---
16   | var13: ClassType{1}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
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
 const size_t model_offset = 32;
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(88)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var42: ClassType{1}
24   | var43: ClassType{1}
40   | var44: ClassType{1}
56   | var45: ClassType{1}
72   +---
72   +--- (virtual base class C0)
72   | {vfptr}
76   +---
76   +--- (virtual base class C1)
76   | {vbptr}
80   | var0: ClassType{0}
84   | var1: ClassType{0}
88   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 76;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
