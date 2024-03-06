// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 404 */ virtual void*** func1 (C1 v15, C1 v16, C1 v17);
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual void* func0 (abstract_0 v52, void*** v53);
C2 (special_constructor);
C1 v58;
C1 v59;
C1 v60;
void*** v61;
};
struct C3 : public C1 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v76;
C1 v77;
C1 v78;
};
// definitions
/* method id 400 */ C0::C0 () {
void*** v0 = new void** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void* C1::func1 () {
return ((void*) 0);

}
/* method id 402 */ C1::C1 () {
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void*** v11 = new void** ();
C1 v12 = *(&(*(((C1*) 0))));
C1 v13 = *(&(*(((C1*) 0))));
C1 v14 = *(&(*(((C1*) 0))));
return;

}
/* method id 404 */ void*** C2::func1 (C1 v15, C1 v16, C1 v17) {
C1 v18 = *(&(*(((C1*) 0))));
C1 v19 = *(((C1*) 0));
void*** v20 = new void** ();
abstract_0 v21 = abstract_0();
delete (new C3 ());
return ((void***) 0);

}
/* method id 405 */ C2::~C2 () {
abstract_0 v41 = abstract_0();
C1 v42 = *(((C1*) 0));
abstract_0 v43 = abstract_0();
C1 v44 = *(((C1*) 0));
return;

}
/* method id 406 */ void* C2::func0 (abstract_0 v52, void*** v53) {
abstract_0 v54 = abstract_0();
C1 v55 = *(((C1*) 0));
abstract_0 v56 = abstract_0();
C1 v57 = *(((C1*) 0));
return ((void*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
C1 v62 = *(((C1*) 0));
abstract_0 v63 = abstract_0();
C1 v64 = *(((C1*) 0));
C1 v65 = *(((C1*) 0));
return;

}
/* method id 408 */ C3::C3 () {
C1 v66 = *(((C1*) 0));
C1 v67 = *(((C1*) 0));
abstract_0 v68 = abstract_0();
abstract_0 v69 = abstract_0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
class C2    size(76)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var58: ClassType{1}
24   | var59: ClassType{1}
40   | var60: ClassType{1}
56   | var61: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
60   +---
60   +--- (virtual base class C0)
60   +---
60   +--- (virtual base class C1)
60   | {vfptr}
64   | {vbptr}
68   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
72   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
76   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 76;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 60;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
12   | | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
16   | +---
16   | var76: ClassType{1}
32   | var77: ClassType{1}
48   | var78: ClassType{1}
64   +---
64   +--- (virtual base class C0)
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
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
