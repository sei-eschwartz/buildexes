// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
/* method id 403 */ virtual void func0 (C0 v1, C0 v2, C0 v3, C0 v4);
/* method id 404 */ ~C1 ();
C1 (special_constructor);
C0 v15;
C0 v16;
};
struct C2 : public C0, public C1 {
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0 v17;
abstract_0 v18;
C0 v19;
};
struct C3 : public C1 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual void func0 (C1 v22, C1 v23, abstract_0 v24, C1 v25);
/* method id 408 */ ~C3 ();
C3 (special_constructor);
C0 v32;
abstract_0 v33;
C0 v34;
};
void func2 (abstract_2 v35, abstract_1 v36, abstract_0 v37);
void func3 (abstract_0 v38);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
::func2(abstract_2(), abstract_1(), abstract_0());
return ::func2(abstract_2(), abstract_1(), abstract_0());

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
delete (new C3 ());
return;

}
/* method id 403 */ void C1::func0 (C0 v1, C0 v2, C0 v3, C0 v4) {
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
delete (new C3 ());
delete (new C1 ());
return;

}
/* method id 404 */ C1::~C1 () {
C0 v11 = *(&(*(((C0*) 0))));
C0 v12 = *(&(*(((C0*) 0))));
C0 v13 = *(&(*(((C0*) 0))));
C0 v14 = *(&(*(((C0*) 0))));
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
void* v20 = ((void*) 0);
abstract_0 v21 = abstract_0();
v16 = *(&(v15));
v16 = *(&(v15));
return;

}
/* method id 407 */ void C3::func0 (C1 v22, C1 v23, abstract_0 v24, C1 v25) {
C0 v26 = *(((C0*) 0));
C0 v27 = *(((C0*) 0));
return ::func3(v33);

}
/* method id 408 */ C3::~C3 () {
C1 v28 = *((new C1 ()));
abstract_1 v29 = abstract_1();
C0 v30 = *((C0*)(((C2*) 0)));
abstract_0 v31 = abstract_0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func2 (abstract_2 v35, abstract_1 v36, abstract_0 v37) {

::func3(abstract_0());
::func3(abstract_0());
::func3(abstract_0());
return ::func3(abstract_0());

}
void func3 (abstract_0 v38) {
abstract_0 v39;
abstract_0 v40;
abstract_3 v41;
void* v42;

delete (new C3 ());
return ::func2(abstract_2(), abstract_1(), v39);

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(8)
0    +---
0    | {vfptr}
4    | var15: ClassType{0}
5    | var16: ClassType{0}
6    | alignment: 
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var15: ClassType{0}
5    | | var16: ClassType{0}
6    | | alignment: 
8    | +---
8    | alignment: Additional padding between non-virtual bases
9    | +--- (base class C0)
9    | +---
9    | alignment: 
12   | var17: AbstractType{0}
16   | var18: AbstractType{0}
20   | var19: ClassType{0}
21   | alignment: 
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 9;
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var15: ClassType{0}
5    | | var16: ClassType{0}
6    | | alignment: 
8    | +---
8    | var32: ClassType{0}
9    | alignment: 
12   | var33: AbstractType{0}
16   | var34: ClassType{0}
17   | alignment: 
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
