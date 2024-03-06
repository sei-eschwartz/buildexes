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
struct C1 : public C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 404 */ C2 ();
C2 (special_constructor);
C1 v0;
C1 v1;
};
struct C3 : public C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual void func0 ();
/* method id 407 */ void func4 (C1 v9);
/* method id 408 */ virtual void func0 (C1 v15, C1 v16, C1 v17, C1 v18);
C3 (special_constructor);
C1 v20;
abstract_0* v21;
abstract_0* v22;
};
void func5 (C1 v23, abstract_0* v24, C1 v25, C1 v26);
void func6 (C1 v28);
void func7 ();
void func8 (C1 v34);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
return;

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 405 */ C3::C3 () {
C1 v2 = *(((C1*) 0));
C1 v3 = *(((C1*) 0));
C1 v4 = *(((C1*) 0));
C1 v5 = *(((C1*) 0));
return;

}
/* method id 406 */ void C3::func0 () {
C1 v6 = *(((C1*) 0));
C1 v7 = *(&(*((new C1 ()))));
C1 v8 = *(&(*((new C1 ()))));
delete (new C1 ());
return;

}
/* method id 407 */ void C3::func4 (C1 v9) {
C1 v10 = *(((C1*) 0));
return;

}
/* method id 408 */ void C3::func0 (C1 v15, C1 v16, C1 v17, C1 v18) {
C1 v19 = *((new C1 ()));
return ::func8(*((new C1 ())));

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func5 (C1 v23, abstract_0* v24, C1 v25, C1 v26) {
abstract_0* v27;

::func8(v25);
::func8(v25);
return;

}
void func6 (C1 v28) {
C1 v29;
C1 v30;
abstract_0* v31;
abstract_0* v32;

return;

}
void func7 () {
abstract_0* v33;

v33 = v33;
v33 = v33;
return;

}
void func8 (C1 v34) {
abstract_0* v35;
abstract_0* v36;
abstract_0* v37;

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
class C1    size(4)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
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
class C2    size(8)
0    +---
0    | var0: ClassType{1}
4    | var1: ClassType{1}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(28)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | +---
4    | {vbptr}
8    | var20: ClassType{1}
12   | var21: PtrType{AbstractType{0}}
16   | var22: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C2)
20   | var0: ClassType{1}
24   | var1: ClassType{1}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
