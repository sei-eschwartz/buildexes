// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void*** func1 ();
/* method id 402 */ void* func2 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1 v8;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual void* func4 ();
/* method id 405 */ virtual void*** func1 ();
/* method id 406 */ void func0 ();
/* method id 407 */ C1 ();
C1 (special_constructor);
abstract_1 v15;
abstract_2 v16;
abstract_1 v17;
abstract_1 v18;
};
struct C2 : public virtual C1 {
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
/* method id 411 */ virtual void*** func1 ();
C2 (special_constructor);
void**** v33;
};
struct C3 : public virtual C2 {
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ void* func7 (abstract_1 v34, void**** v35);
/* method id 414 */ C3 ();
C3 (special_constructor);
abstract_1 v39;
abstract_1 v40;
};
void* func8 (abstract_2 v41, abstract_2 v42, void**** v43);
void* func9 (abstract_1 v48, abstract_1 v49, abstract_1 v50, abstract_2 v51);
void* func10 (abstract_1 v54, abstract_1 v55, abstract_1 v56, abstract_1 v57);
void**** func11 (abstract_1 v62, abstract_1 v63, abstract_1 v64, abstract_1 v65);
// definitions
/* method id 400 */ C0::~C0 () {
void**** v0 = new void*** ();
abstract_1 v1 = abstract_1();
void**** v2 = new void*** ();
void**** v3 = new void*** ();
return;

}
/* method id 401 */ void*** C0::func1 () {
void**** v4 = new void*** ();
void**** v5 = new void*** ();
void**** v6 = new void*** ();
void**** v7 = new void*** ();
return new void** ();

}
/* method id 402 */ void* C0::func2 () {
return ((void*) 0);

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void* C1::func4 () {
abstract_1 v9 = abstract_1();
abstract_2 v10 = abstract_2();
void**** v11 = new void*** ();
abstract_2 v12 = abstract_2();
return ((void*) 0);

}
/* method id 405 */ void*** C1::func1 () {
abstract_1 v13 = abstract_1();
return new void** ();

}
/* method id 406 */ void C1::func0 () {
return;

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
abstract_2 v19 = abstract_2();
abstract_1 v20 = abstract_1();
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
return;

}
/* method id 410 */ C2::C2 () {
abstract_2 v31 = abstract_2();
return;

}
/* method id 411 */ void*** C2::func1 () {
abstract_2 v32 = abstract_2();
return new void** ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::~C3 () {
return;

}
/* method id 413 */ void* C3::func7 (abstract_1 v34, void**** v35) {
return ::func9(v15, v15, v15, v16);

}
/* method id 414 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func8 (abstract_2 v41, abstract_2 v42, void**** v43) {
abstract_2 v44;
abstract_1 v45;
abstract_1 v46;
abstract_1 v47;

return ((void*) 0);

}
void* func9 (abstract_1 v48, abstract_1 v49, abstract_1 v50, abstract_2 v51) {
abstract_1 v52;
abstract_1 v53;

return ((void*) 0);

}
void* func10 (abstract_1 v54, abstract_1 v55, abstract_1 v56, abstract_1 v57) {
abstract_1 v58;
abstract_1 v59;
abstract_1 v60;
abstract_1 v61;

return ::func9(v55, v55, v55, abstract_2());

}
void**** func11 (abstract_1 v62, abstract_1 v63, abstract_1 v64, abstract_1 v65) {
abstract_2 v66;
abstract_2 v67;
abstract_1 v68;
abstract_1 v69;

return new void*** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var8: AbstractType{1}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var15: AbstractType{1}
12   | var16: AbstractType{2}
16   | var17: AbstractType{1}
20   | var18: AbstractType{1}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var8: AbstractType{1}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
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
class C2    size(44)
0    +---
0    | {vbptr}
4    | var33: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var8: AbstractType{1}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var15: AbstractType{1}
32   | var16: AbstractType{2}
36   | var17: AbstractType{1}
40   | var18: AbstractType{1}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(56)
0    +---
0    | {vbptr}
4    | var39: AbstractType{1}
8    | var40: AbstractType{1}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var8: AbstractType{1}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var15: AbstractType{1}
36   | var16: AbstractType{2}
40   | var17: AbstractType{1}
44   | var18: AbstractType{1}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   | var33: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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
