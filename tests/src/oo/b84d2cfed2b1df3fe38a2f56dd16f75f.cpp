// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
C0 v8;
C0 v9;
abstract_0 v10;
};
struct C2 : public C0, public virtual C1 {
/* method id 403 */ virtual void func0 ();
/* method id 404 */ virtual void func1 ();
/* method id 405 */ ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
C0 v23;
C0 v24;
C0* v25;
};
struct C3  {
/* method id 407 */ virtual void func0 (C0* v26);
/* method id 408 */ C3 ();
C3 (special_constructor);
};
C0 func3 (C3 v27);
void func4 (C0* v31, C0* v32, C3 v33, C0* v34);
C0* func5 (C0* v39, C0* v40, C0 v41, C0* v42);
abstract_1 func6 (C0 v47, C3 v48, C0* v49);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
v1 = v1;
v1 = v1;
v1 = v1;
v1 = v1;
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 () {
abstract_0 v11 = abstract_0();
C0* v12 = ((C0*) 0);
return;

}
/* method id 404 */ void C2::func1 () {
return (((C2*) 0))->C2::func0();

}
/* method id 405 */ C2::~C2 () {
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
return;

}
/* method id 406 */ C2::C2 () {
C0* v19 = &(*((new C0 ())));
C0* v20 = &(*((new C0 ())));
C0* v21 = &(*((new C0 ())));
C0* v22 = &(*((new C0 ())));
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ void C3::func0 (C0* v26) {
return;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

C0 func3 (C3 v27) {
C0 v28;
C0 v29;
C3 v30;

return *((new C0 ()));

}
void func4 (C0* v31, C0* v32, C3 v33, C0* v34) {
C0* v35;
C0* v36;
C0* v37;
C0* v38;

delete (new C0 ());
return;

}
C0* func5 (C0* v39, C0* v40, C0 v41, C0* v42) {
C0 v43;
C0* v44;
C0* v45;
C3 v46;

return &(::func3(*((new C3 ()))));

}
abstract_1 func6 (C0 v47, C3 v48, C0* v49) {
abstract_0 v50;

return abstract_1();

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | var8: ClassType{0}
5    | var9: ClassType{0}
6    | alignment: 
8    | var10: AbstractType{0}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    | var23: ClassType{0}
9    | var24: ClassType{0}
10   | alignment: 
12   | var25: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var8: ClassType{0}
21   | var9: ClassType{0}
22   | alignment: 
24   | var10: AbstractType{0}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
