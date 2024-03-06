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
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual void func0 ();
/* method id 403 */ virtual void func1 (abstract_0** v4);
C0 (special_constructor);
void*** v9;
void* v10;
abstract_0** v11;
};
struct C1 : public C0 {
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void* func0 (abstract_0** v15, void*** v16, void*** v17, void*** v18);
/* method id 406 */ C1 ();
/* method id 407 */ void* func2 (void*** v24, abstract_0** v25, abstract_1 v26);
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 408 */ C2 ();
/* method id 409 */ virtual void func0 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0 {
/* method id 411 */ void*** func3 ();
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_1 v38;
void*** v39;
C1 v40;
};
void* func5 (abstract_2 v41, void*** v42, abstract_3 v43, C1 v44);
void* func6 (void*** v48, void*** v49, void*** v50, void* v51);
abstract_0* func7 (C1 v52, abstract_3 v53, void*** v54, abstract_2 v55);
void* func8 (void*** v60, abstract_0** v61);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0** v0 = new abstract_0* ();
v11 = new abstract_0* ();
v11 = new abstract_0* ();
return;

}
/* method id 401 */ C0::C0 () {
delete (new C1 ());
return;

}
/* method id 402 */ void C0::func0 () {
abstract_0** v1 = new abstract_0* ();
abstract_0** v2 = new abstract_0* ();
abstract_0** v3 = new abstract_0* ();
delete (new C1 ());
return;

}
/* method id 403 */ void C0::func1 (abstract_0** v4) {
abstract_0** v5 = new abstract_0* ();
void*** v6 = new void** ();
abstract_1 v7 = abstract_1();
abstract_1 v8 = abstract_1();
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
return;

}
/* method id 405 */ void* C1::func0 (abstract_0** v15, void*** v16, void*** v17, void*** v18) {
void* v19 = ((void*) 0);
return v19;

}
/* method id 406 */ C1::C1 () {
void*** v20 = ((void***) 0);
void*** v21 = ((void***) 0);
void*** v22 = ((void***) 0);
abstract_0** v23 = new abstract_0* ();
return;

}
/* method id 407 */ void* C1::func2 (void*** v24, abstract_0** v25, abstract_1 v26) {
abstract_0** v27 = new abstract_0* ();
delete (new C3 ());
return v10;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {
void* v28 = ((void*) 0);
delete (new C1 ());
return;

}
/* method id 409 */ void C2::func0 () {
delete (new C2 ());
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1 v31 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ void*** C3::func3 () {
delete (new C1 ());
return v39;

}
/* method id 412 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

void* func5 (abstract_2 v41, void*** v42, abstract_3 v43, C1 v44) {
C1 v45;
C1 v46;
void*** v47;

(((C3*) 0))->C3::func3();
return ((void*) 0);

}
void* func6 (void*** v48, void*** v49, void*** v50, void* v51) {

return v51;

}
abstract_0* func7 (C1 v52, abstract_3 v53, void*** v54, abstract_2 v55) {
void*** v56;
void*** v57;
abstract_1 v58;
void*** v59;

delete (new C0 ());
return ((abstract_0*) 0);

}
void* func8 (void*** v60, abstract_0** v61) {
void*** v62;
void*** v63;
abstract_0** v64;
void*** v65;

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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: PtrType{PtrType{PtrType{VoidType{}}}}
8    | | var10: PtrType{VoidType{}}
12   | | var11: DeletablePtrType{PtrType{AbstractType{0}}}
16   | +---
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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | | var9: PtrType{PtrType{PtrType{VoidType{}}}}
8    | | | var10: PtrType{VoidType{}}
12   | | | var11: DeletablePtrType{PtrType{AbstractType{0}}}
16   | | +---
16   | +---
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
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
 }}}
/*
class C3    size(44)
0    +---
0    | {vbptr}
4    | var38: AbstractType{1}
8    | var39: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var40: ClassType{1}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   | var9: PtrType{PtrType{PtrType{VoidType{}}}}
36   | var10: PtrType{VoidType{}}
40   | var11: DeletablePtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 28;
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
