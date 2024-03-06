// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
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
C1 (special_constructor);
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public C1, public virtual C0 {
/* method id 403 */ C2 ();
C2 (special_constructor);
C0 v8;
C0 v9;
C0 v10;
};
struct C3  {
/* method id 404 */ virtual ~C3 ();
/* method id 405 */ C3 ();
/* method id 406 */ virtual void func0 ();
/* method id 407 */ virtual void func0 (C0 v19, C0 v20, abstract_2 v21);
C3 (special_constructor);
abstract_0 v23;
abstract_0 v24;
};
void func1 (abstract_1 v25);
void func2 (C2 v28, abstract_0 v29);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
delete (new C0 ());
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
C0 v4 = *((new C0 ()));
C0 v5 = *((new C0 ()));
C0 v6 = *((new C0 ()));
C0 v7 = *((new C0 ()));
::func1(abstract_1());
v4 = v10;
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 404 */ C3::~C3 () {
abstract_0 v11 = abstract_0();
C2 v12 = *(&(*((new C2 ()))));
C2 v13 = *(&(*((new C2 ()))));
C0 v14 = *((new C0 ()));
delete (new C2 ());
return;

}
/* method id 405 */ C3::C3 () {
return;

}
/* method id 406 */ void C3::func0 () {
C0 v15 = *(&(*(((C0*) 0))));
void* v16 = ((void*) 0);
abstract_1 v17 = abstract_1();
abstract_0 v18 = abstract_0();
delete (new C1 ());
return ::func1(abstract_1());

}
/* method id 407 */ void C3::func0 (C0 v19, C0 v20, abstract_2 v21) {
void* v22 = ((void*) 0);
return;

}
C3::C3 (special_constructor)  {}

void func1 (abstract_1 v25) {
abstract_2 v26;
abstract_2 v27;

delete (new C1 ());
return;

}
void func2 (C2 v28, abstract_0 v29) {
C2 v30;
abstract_2 v31;
abstract_0 v32;
void* v33;

delete (new C3 ());
return;

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
class C1    size(3)
0    +---
0    | var1: ClassType{0}
1    | var2: ClassType{0}
2    | var3: ClassType{0}
3    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 3;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | +--- (base class C1)
0    | | var1: ClassType{0}
1    | | var2: ClassType{0}
2    | | var3: ClassType{0}
3    | +---
3    | alignment: VBPtr aligned to pointer size
4    | {vbptr}
8    | var8: ClassType{0}
9    | var9: ClassType{0}
10   | var10: ClassType{0}
11   | alignment: 
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | {vfptr}
4    | var23: AbstractType{0}
8    | var24: AbstractType{0}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
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
