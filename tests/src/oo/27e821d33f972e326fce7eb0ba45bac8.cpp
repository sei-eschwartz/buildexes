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
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual void func0 ();
/* method id 403 */ virtual void func1 (abstract_0** v4);
C0 (special_constructor);
void*** v9;
void* v10;
abstract_0** v11;
};
struct C1  {
/* method id 404 */ C1 ();
C1 (special_constructor);
void*** v12;
void*** v13;
abstract_1 v14;
abstract_0** v15;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_0** v16;
void*** v17;
void*** v18;
void*** v19;
};
struct C3 : public virtual C2, public virtual C0 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual void*** func2 (abstract_2 v22, void*** v23, abstract_0** v24);
C3 (special_constructor);
};
void** func5 (abstract_2 v35, abstract_0** v36);
void* func6 (void*** v41, void*** v42, void*** v43, void*** v44);
void* func7 (void*** v47, void*** v48, abstract_1 v49, void*** v50);
void* func8 (abstract_0** v53, abstract_2 v54, abstract_2 v55, abstract_2 v56);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0** v0 = new abstract_0* ();
return;

}
/* method id 401 */ C0::C0 () {
return;

}
/* method id 402 */ void C0::func0 () {
abstract_0** v1 = new abstract_0* ();
abstract_0** v2 = new abstract_0* ();
abstract_0** v3 = new abstract_0* ();
return;

}
/* method id 403 */ void C0::func1 (abstract_0** v4) {
abstract_0** v5 = new abstract_0* ();
void*** v6 = new void** ();
abstract_1 v7 = abstract_1();
abstract_1 v8 = abstract_1();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
void*** v20 = ((void***) 0);
abstract_0** v21 = new abstract_0* ();
return;

}
/* method id 407 */ void*** C3::func2 (abstract_2 v22, void*** v23, abstract_0** v24) {
abstract_2 v25 = abstract_2();
abstract_2 v26 = abstract_2();
abstract_2 v27 = abstract_2();
abstract_2 v28 = abstract_2();
return v9;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C0(special_constructor ()) {}

void** func5 (abstract_2 v35, abstract_0** v36) {
abstract_2 v37;
abstract_0** v38;
void*** v39;
void*** v40;

return new void* ();

}
void* func6 (void*** v41, void*** v42, void*** v43, void*** v44) {
void*** v45;
void*** v46;

return ::func8(new abstract_0* (), abstract_2(), abstract_2(), abstract_2());

}
void* func7 (void*** v47, void*** v48, abstract_1 v49, void*** v50) {
void*** v51;
void*** v52;

return ::func8(new abstract_0* (), abstract_2(), abstract_2(), abstract_2());

}
void* func8 (abstract_0** v53, abstract_2 v54, abstract_2 v55, abstract_2 v56) {
abstract_2 v57;
abstract_2 v58;
abstract_0** v59;

return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var9: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var10: PtrType{VoidType{}}
12   | var11: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(16)
0    +---
0    | var12: PtrType{PtrType{PtrType{VoidType{}}}}
4    | var13: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var14: AbstractType{1}
12   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(36)
0    +---
0    | {vbptr}
4    | var16: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var17: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var18: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var19: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C1)
20   | var12: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var13: PtrType{PtrType{PtrType{VoidType{}}}}
28   | var14: AbstractType{1}
32   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
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
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | var12: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var13: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var14: AbstractType{1}
20   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C2)
24   | {vbptr}
28   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var17: PtrType{PtrType{PtrType{VoidType{}}}}
36   | var18: PtrType{PtrType{PtrType{VoidType{}}}}
40   | var19: PtrType{PtrType{PtrType{VoidType{}}}}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   | var9: PtrType{PtrType{PtrType{VoidType{}}}}
52   | var10: PtrType{VoidType{}}
56   | var11: DeletablePtrType{PtrType{AbstractType{0}}}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
