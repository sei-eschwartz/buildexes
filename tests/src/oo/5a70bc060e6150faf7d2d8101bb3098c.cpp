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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void* func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3);
/* method id 402 */ virtual void** func1 ();
/* method id 403 */ virtual void** func2 (abstract_1 v9, abstract_1 v10, abstract_2 v11);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1 v13;
abstract_0 v14;
};
struct C1 : public C0 {
/* method id 405 */ void func0 ();
/* method id 406 */ ~C1 ();
/* method id 407 */ virtual void* func3 (abstract_0 v20);
/* method id 408 */ virtual void func0 (abstract_1 v22, abstract_5 v23);
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_1 v24;
abstract_2 v25;
abstract_1 v26;
abstract_1 v27;
};
struct C2 : public virtual C1 {
/* method id 410 */ C2 ();
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v36;
abstract_1 v37;
abstract_1 v38;
};
struct C3 : public virtual C1 {
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v41;
abstract_1 v42;
abstract_1 v43;
abstract_6 v44;
};
void* func6 (C3 v45);
void* func7 ();
void* func8 (abstract_0 v51);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ void* C0::func1 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_1 v3) {
abstract_1 v4 = abstract_1();
abstract_0 v5 = abstract_0();
abstract_1 v6 = abstract_1();
abstract_0 v7 = abstract_0();
return ((void*) 0);

}
/* method id 402 */ void** C0::func1 () {
abstract_0 v8 = abstract_0();
delete (new C2 ());
return ((void**) 0);

}
/* method id 403 */ void** C0::func2 (abstract_1 v9, abstract_1 v10, abstract_2 v11) {
abstract_0 v12 = abstract_0();
return new void* ();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void C1::func0 () {
abstract_2 v15 = abstract_2();
abstract_0 v16 = abstract_0();
return;

}
/* method id 406 */ C1::~C1 () {
abstract_3 v17 = abstract_3();
abstract_1 v18 = abstract_1();
abstract_0 v19 = abstract_0();
return;

}
/* method id 407 */ void* C1::func3 (abstract_0 v20) {
abstract_4 v21 = abstract_4();
return ((void*) 0);

}
/* method id 408 */ void C1::func0 (abstract_1 v22, abstract_5 v23) {
return;

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_1 v28 = abstract_1();
abstract_1 v29 = abstract_1();
abstract_1 v30 = abstract_1();
abstract_3 v31 = abstract_3();
return;

}
/* method id 411 */ C2::~C2 () {
abstract_5 v32 = abstract_5();
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
abstract_1 v35 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_2 v39 = abstract_2();
abstract_5 v40 = abstract_5();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void* func6 (C3 v45) {
C3 v46;
abstract_1 v47;
abstract_3 v48;
abstract_1 v49;

return ::func7();

}
void* func7 () {
abstract_2 v50;

return ((void*) 0);

}
void* func8 (abstract_0 v51) {

return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var13: AbstractType{1}
8    | var14: AbstractType{0}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var13: AbstractType{1}
8    | | var14: AbstractType{0}
12   | +---
12   | var24: AbstractType{1}
16   | var25: AbstractType{2}
20   | var26: AbstractType{1}
24   | var27: AbstractType{1}
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
 const size_t model_offset = 0;
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
4    | var36: AbstractType{1}
8    | var37: AbstractType{1}
12   | var38: AbstractType{1}
16   +---
16   +--- (virtual base class C1)
16   | +--- (base class C0)
16   | | {vfptr}
20   | | var13: AbstractType{1}
24   | | var14: AbstractType{0}
28   | +---
28   | var24: AbstractType{1}
32   | var25: AbstractType{2}
36   | var26: AbstractType{1}
40   | var27: AbstractType{1}
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
class C3    size(48)
0    +---
0    | {vbptr}
4    | var41: AbstractType{1}
8    | var42: AbstractType{1}
12   | var43: AbstractType{1}
16   | var44: AbstractType{6}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var13: AbstractType{1}
28   | | var14: AbstractType{0}
32   | +---
32   | var24: AbstractType{1}
36   | var25: AbstractType{2}
40   | var26: AbstractType{1}
44   | var27: AbstractType{1}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
