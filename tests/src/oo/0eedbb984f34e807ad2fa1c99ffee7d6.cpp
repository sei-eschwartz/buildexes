// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void* func0 ();
/* method id 401 */ virtual void* func0 (abstract_0 v0);
/* method id 402 */ virtual void func0 (abstract_0 v1, abstract_0 v2);
/* method id 403 */ virtual abstract_1 func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v9;
abstract_0 v10;
abstract_0 v11;
abstract_0 v12;
};
struct C1 : public C0 {
/* method id 405 */ void func1 (abstract_0 v13, abstract_0 v14, abstract_0 v15, abstract_0 v16);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v50;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
};
void*** func2 (abstract_0 v78, abstract_0 v79);
void func3 ();
abstract_2 func4 (abstract_0 v83);
abstract_2 func5 ();
// definitions
/* method id 400 */ void* C0::func0 () {
return ((void*) 0);

}
/* method id 401 */ void* C0::func0 (abstract_0 v0) {
return ((void*) 0);

}
/* method id 402 */ void C0::func0 (abstract_0 v1, abstract_0 v2) {
abstract_0 v3 = abstract_0();
return;

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v5, abstract_0 v6, abstract_0 v7, abstract_0 v8) {
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void C1::func1 (abstract_0 v13, abstract_0 v14, abstract_0 v15, abstract_0 v16) {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
return;

}
/* method id 406 */ C1::C1 () {
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
delete (new C0 ());
delete (new C3 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
::func4(v50);
::func4(v50);
::func4(v50);
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v55 = abstract_0();
abstract_0 v56 = abstract_0();
abstract_0 v57 = abstract_0();
abstract_0 v58 = abstract_0();
v55 = v55;
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_0 v71 = abstract_0();
abstract_0 v72 = abstract_0();
abstract_0 v73 = abstract_0();
return;

}
/* method id 410 */ C3::C3 () {
abstract_0 v74 = abstract_0();
abstract_0 v75 = abstract_0();
abstract_0 v76 = abstract_0();
abstract_0 v77 = abstract_0();
delete (new C0 ());
return;

}
C3::C3 (special_constructor)  {}

void*** func2 (abstract_0 v78, abstract_0 v79) {
abstract_0 v80;

return new void** ();

}
void func3 () {
abstract_0 v81;
abstract_0 v82;

v82 = abstract_0();
v82 = abstract_0();
v82 = abstract_0();
v82 = abstract_0();
return;

}
abstract_2 func4 (abstract_0 v83) {

return ::func5();

}
abstract_2 func5 () {

return ::func4(abstract_0());

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var9: AbstractType{0}
8    | var10: AbstractType{0}
12   | var11: AbstractType{0}
16   | var12: AbstractType{0}
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
/*
class C1    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: AbstractType{0}
8    | | var10: AbstractType{0}
12   | | var11: AbstractType{0}
16   | | var12: AbstractType{0}
20   | +---
20   | var50: AbstractType{0}
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | +--- (base class C0)
8    | | {vfptr}
12   | | var9: AbstractType{0}
16   | | var10: AbstractType{0}
20   | | var11: AbstractType{0}
24   | | var12: AbstractType{0}
28   | +---
28   | var50: AbstractType{0}
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
