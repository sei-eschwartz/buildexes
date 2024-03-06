// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void* func0 ();
/* method id 401 */ void* func0 (abstract_1 v4, void** v5, abstract_1 v6, abstract_1 v7);
/* method id 402 */ virtual void* func0 (abstract_1 v9, void** v10, abstract_0 v11, abstract_2 v12);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0 v14;
abstract_0 v15;
abstract_2 v16;
};
struct C1 : public virtual C0 {
/* method id 404 */ void* func1 (abstract_0 v17, abstract_0 v18, abstract_2 v19, abstract_1 v20);
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
void** v24;
void** v25;
abstract_0 v26;
void** v27;
};
struct C2  {
/* method id 407 */ C2 ();
/* method id 408 */ virtual void* func1 (abstract_0 v31, abstract_1 v32, abstract_0 v33);
C2 (special_constructor);
void** v35;
C0 v36;
abstract_0 v37;
abstract_0 v38;
};
struct C3  {
/* method id 409 */ void* func2 (abstract_0 v39, void*** v40, abstract_0 v41);
/* method id 410 */ void func3 (abstract_0 v42, void** v43);
/* method id 411 */ void* func1 (void** v45);
/* method id 412 */ C3 ();
C3 (special_constructor);
void** v48;
};
void* func4 (void** v49);
void* func5 (abstract_0 v54, abstract_1 v55, abstract_0 v56, abstract_0 v57);
void* func6 (abstract_0 v62, abstract_0 v63, abstract_0 v64, abstract_0 v65);
void* func7 ();
// definitions
/* method id 400 */ void* C0::func0 () {
void** v0 = new void* ();
void** v1 = new void* ();
abstract_0 v2 = abstract_0();
abstract_1 v3 = abstract_1();
return ((void*) 0);

}
/* method id 401 */ void* C0::func0 (abstract_1 v4, void** v5, abstract_1 v6, abstract_1 v7) {
void** v8 = new void* ();
return ::func5(v15, v7, v15, v15);

}
/* method id 402 */ void* C0::func0 (abstract_1 v9, void** v10, abstract_0 v11, abstract_2 v12) {
abstract_0 v13 = abstract_0();
return ::func5(v13, v9, v13, v13);

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ void* C1::func1 (abstract_0 v17, abstract_0 v18, abstract_2 v19, abstract_1 v20) {
abstract_2 v21 = abstract_2();
return ::func5(v26, v20, v26, v26);

}
/* method id 405 */ C1::~C1 () {
abstract_2 v22 = abstract_2();
C0 v23 = *(((C0*) 0));
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v28 = abstract_0();
void** v29 = ((void**) 0);
abstract_3 v30 = abstract_3();
return;

}
/* method id 408 */ void* C2::func1 (abstract_0 v31, abstract_1 v32, abstract_0 v33) {
abstract_2 v34 = abstract_2();
return ::func5(v33, v32, v33, v33);

}
C2::C2 (special_constructor)  {}

/* method id 409 */ void* C3::func2 (abstract_0 v39, void*** v40, abstract_0 v41) {
return ::func5(abstract_0(), abstract_1(), abstract_0(), abstract_0());

}
/* method id 410 */ void C3::func3 (abstract_0 v42, void** v43) {
abstract_4 v44 = abstract_4();
return;

}
/* method id 411 */ void* C3::func1 (void** v45) {
abstract_3 v46 = abstract_3();
return ((void*) 0);

}
/* method id 412 */ C3::C3 () {
abstract_5 v47 = abstract_5();
return;

}
C3::C3 (special_constructor)  {}

void* func4 (void** v49) {
void** v50;
void** v51;
abstract_0 v52;
C0 v53;

return ::func5(v52, abstract_1(), v52, v52);

}
void* func5 (abstract_0 v54, abstract_1 v55, abstract_0 v56, abstract_0 v57) {
void*** v58;
C3 v59;
abstract_0 v60;
abstract_3 v61;

return ((void*) 0);

}
void* func6 (abstract_0 v62, abstract_0 v63, abstract_0 v64, abstract_0 v65) {
abstract_0 v66;
abstract_0 v67;
abstract_0 v68;
abstract_0 v69;

return ::func5(abstract_0(), abstract_1(), abstract_0(), abstract_0());

}
void* func7 () {
abstract_0 v70;
abstract_0 v71;

return ::func4(((void**) 0));

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var14: AbstractType{0}
8    | var15: AbstractType{0}
12   | var16: AbstractType{2}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var24: PtrType{PtrType{VoidType{}}}
12   | var25: PtrType{PtrType{VoidType{}}}
16   | var26: AbstractType{0}
20   | var27: PtrType{PtrType{VoidType{}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var14: AbstractType{0}
32   | var15: AbstractType{0}
36   | var16: AbstractType{2}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
4    | var35: PtrType{PtrType{VoidType{}}}
8    | var36: ClassType{0}
24   | var37: AbstractType{0}
28   | var38: AbstractType{0}
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
}
/*
class C3    size(4)
0    +---
0    | var48: PtrType{PtrType{VoidType{}}}
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
