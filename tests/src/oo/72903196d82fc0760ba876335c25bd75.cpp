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
struct C1 : public virtual C0 {
/* method id 401 */ virtual void* func1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
void*** v9;
void*** v10;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
void*** v21;
void*** v22;
void*** v23;
void*** v24;
};
struct C3 : public virtual C0, public C2 {
/* method id 405 */ virtual void func0 (void*** v25, void*** v26, void*** v27, void*** v28);
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual void* func1 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
};
void* func3 (abstract_2 v40, abstract_2 v41, abstract_1 v42, void*** v43);
void*** func4 (void*** v44);
// definitions
/* method id 400 */ C0::C0 () {
void*** v0 = new void** ();
::func4(new void** ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void* C1::func1 () {
return ((void*) 0);

}
/* method id 402 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void*** v11 = new void** ();
C1 v12 = *(((C1*) 0));
C1 v13 = *(((C1*) 0));
C1 v14 = *(((C1*) 0));
v13 = *(((C1*) 0));
v13 = *(((C1*) 0));
return;

}
/* method id 404 */ C2::~C2 () {
abstract_0 v18 = abstract_0();
C1 v19 = *(&(*((new C1 ()))));
void*** v20 = new void** ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ void C3::func0 (void*** v25, void*** v26, void*** v27, void*** v28) {
abstract_0 v29 = abstract_0();
void*** v30 = new void** ();
void*** v31 = new void** ();
void*** v32 = new void** ();
return;

}
/* method id 406 */ C3::~C3 () {
C1 v33 = *((new C1 ()));
C1 v34 = *((new C1 ()));
C1 v35 = *((new C1 ()));
abstract_1 v36 = abstract_1();
v24 = new void** ();
return;

}
/* method id 407 */ void* C3::func1 () {
C1 v37 = *(((C1*) 0));
C1 v38 = *(((C1*) 0));
C1 v39 = *(((C1*) 0));
return ::func3(abstract_2(), abstract_2(), abstract_1(), v10);

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

void* func3 (abstract_2 v40, abstract_2 v41, abstract_1 v42, void*** v43) {

v41 = abstract_2();
v41 = abstract_2();
v41 = abstract_2();
v41 = abstract_2();
return ((void*) 0);

}
void*** func4 (void*** v44) {
void*** v45;

return v45;

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   +---
16   +--- (virtual base class C0)
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
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var22: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var23: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   | var24: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
24   +---
24   +--- (virtual base class C0)
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
36   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var21: PtrType{PtrType{PtrType{VoidType{}}}}
12   | | var22: PtrType{PtrType{PtrType{VoidType{}}}}
16   | | var23: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
20   | | var24: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   +---
24   | {vtordisp for vbase 1}
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
40   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
