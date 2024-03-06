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
C0 v2;
C0 v3;
C0 v4;
};
struct C2 : public virtual C0, public C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v5;
};
struct C3 : public C2 {
/* method id 406 */ ~C3 ();
/* method id 407 */ void func1 (C0 v9, C0 v10, C0 v11, abstract_0 v12);
/* method id 408 */ virtual void func3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_0 v19;
void* v20;
abstract_0 v21;
abstract_0 v22;
};
void func5 (abstract_0 v23, C0 v24, abstract_0 v25, abstract_0 v26);
void func6 (abstract_0 v27, abstract_0 v28);
void func7 (abstract_0 v31, abstract_0 v32, abstract_0 v33, abstract_0 v34);
void func8 (abstract_0 v39, abstract_0 v40, abstract_0 v41, abstract_0 v42);
// definitions
/* method id 400 */ C0::~C0 () {
::func6(abstract_0(), abstract_0());
::func6(abstract_0(), abstract_0());
::func6(abstract_0(), abstract_0());
::func6(abstract_0(), abstract_0());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
C0 v1 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 406 */ C3::~C3 () {
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
::func6(v21, v21);
::func6(v21, v21);
::func6(v21, v21);
::func6(v21, v21);
return;

}
/* method id 407 */ void C3::func1 (C0 v9, C0 v10, C0 v11, abstract_0 v12) {
void* v13 = ((void*) 0);
void* v14 = ((void*) 0);
return ::func8(v22, v22, v22, v22);

}
/* method id 408 */ void C3::func3 () {
delete (new C1 ());
return ::func6(v19, v19);

}
/* method id 409 */ C3::C3 () {
abstract_0 v15 = abstract_0();
void* v16 = ((void*) 0);
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func5 (abstract_0 v23, C0 v24, abstract_0 v25, abstract_0 v26) {

return ::func7(v26, v26, v26, v26);

}
void func6 (abstract_0 v27, abstract_0 v28) {
abstract_0 v29;
abstract_0 v30;

return;

}
void func7 (abstract_0 v31, abstract_0 v32, abstract_0 v33, abstract_0 v34) {
abstract_0 v35;
abstract_0 v36;
abstract_0 v37;
abstract_0 v38;

delete (new C1 ());
return ::func6(v33, v33);

}
void func8 (abstract_0 v39, abstract_0 v40, abstract_0 v41, abstract_0 v42) {
void* v43;
void* v44;
abstract_0 v45;
abstract_0 v46;

return ::func6(v46, v46);

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
class C1    size(20)
0    +---
0    | {vbptr}
4    | var2: ClassType{0}
8    | var3: ClassType{0}
12   | var4: ClassType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(24)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var2: ClassType{0}
8    | | var3: ClassType{0}
12   | | var4: ClassType{0}
16   | +---
16   | var5: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
 const size_t model_offset = 20;
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
class C3    size(44)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | +--- (base class C1)
4    | | | {vbptr}
8    | | | var2: ClassType{0}
12   | | | var3: ClassType{0}
16   | | | var4: ClassType{0}
20   | | +---
20   | | var5: ClassType{0}
24   | +---
24   | var19: AbstractType{0}
28   | var20: PtrType{VoidType{}}
32   | var21: AbstractType{0}
36   | var22: AbstractType{0}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
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
