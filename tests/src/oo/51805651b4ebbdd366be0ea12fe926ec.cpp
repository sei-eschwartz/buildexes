// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
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
struct C2 : public virtual C1, public C0 {
/* method id 403 */ virtual void func0 ();
/* method id 404 */ virtual void func1 ();
/* method id 405 */ virtual void func0 (C0 v5, C0 v6);
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 407 */ virtual void func1 ();
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual abstract_0 func1 (C1 v19);
C3 (special_constructor);
C1 v20;
C1 v21;
abstract_1 v22;
C1 v23;
};
abstract_2 func3 (C3 v24, C3 v25, C1 v26, C3 v27);
void* func4 (abstract_1 v31, C1 v32, C1 v33, C3 v34);
void* func5 (C1 v35, C3 v36, C1 v37, C3 v38);
void* func6 (C1 v43, C1 v44, C1 v45, C1 v46);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 () {
C0 v4 = *((new C0 ()));
return;

}
/* method id 404 */ void C2::func1 () {
return;

}
/* method id 405 */ void C2::func0 (C0 v5, C0 v6) {
C0 v7 = *(&(*((new C0 ()))));
return (((C2*) 0))->C2::func1();

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ void C3::func1 () {
C0 v8 = *((new C0 ()));
C0 v9 = *((new C0 ()));
C0 v10 = *((new C0 ()));
C0 v11 = *((new C0 ()));
return (&(v21))->C1::func0();

}
/* method id 408 */ C3::C3 () {
C0 v12 = *(((C0*) 0));
C0 v13 = *((new C0 ()));
return;

}
/* method id 409 */ C3::~C3 () {
C1 v14 = *(((C1*) 0));
C1 v15 = *(((C1*) 0));
C0 v16 = *((new C0 ()));
return;

}
/* method id 410 */ abstract_0 C3::func1 (C1 v19) {
return abstract_0();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_2 func3 (C3 v24, C3 v25, C1 v26, C3 v27) {
C3 v28;
C1 v29;
C3 v30;

return abstract_2();

}
void* func4 (abstract_1 v31, C1 v32, C1 v33, C3 v34) {

return ::func6(v33, v33, v33, v33);

}
void* func5 (C1 v35, C3 v36, C1 v37, C3 v38) {
C1 v39;
C1 v40;
C3 v41;
C1 v42;

return ((void*) 0);

}
void* func6 (C1 v43, C1 v44, C1 v45, C1 v46) {
C1 v47;
C1 v48;
C1 v49;
C1 v50;

return ((void*) 0);

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
class C2    size(11)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | var1: ClassType{0}
9    | var2: ClassType{0}
10   | var3: ClassType{0}
11   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 11;
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
 }} {
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
 }}}
/*
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var20: ClassType{1}
11   | var21: ClassType{1}
14   | alignment: 
16   | var22: AbstractType{1}
20   | var23: ClassType{1}
23   | alignment: 
24   +---
24   +--- (virtual base class C1)
24   | var1: ClassType{0}
25   | var2: ClassType{0}
26   | var3: ClassType{0}
27   +---
27   | alignment: 
28   | {vtordisp for vbase 2}
32   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 2, which leads with zero sized base.
36   +--- (virtual base class C2)
36   | {vfptr}
40   | +--- (base class C0)
40   | +---
40   | {vbptr}
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
 const size_t model_offset = 36;
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
