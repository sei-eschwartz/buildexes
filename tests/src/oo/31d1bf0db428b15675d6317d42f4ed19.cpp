// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4);
/* method id 403 */ virtual void func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
void* v12;
abstract_1** v13;
abstract_1** v14;
abstract_1** v15;
};
struct C1  {
/* method id 405 */ C1 ();
/* method id 406 */ virtual ~C1 ();
/* method id 407 */ virtual void* func3 (abstract_1** v28, abstract_1** v29);
/* method id 408 */ virtual void func1 ();
C1 (special_constructor);
void* v77;
abstract_1** v78;
void* v79;
abstract_1** v80;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 409 */ C2 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1** v172;
abstract_1** v173;
};
struct C3 : public virtual C1, public virtual C0, public virtual C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
};
void* func4 (abstract_1** v468, abstract_1** v469);
abstract_1 func5 ();
void* func6 (abstract_1** v475, abstract_1** v476, abstract_1** v477);
void* func7 (void* v482, abstract_1** v483, abstract_1** v484, abstract_1** v485);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return ::func5();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func5();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4) {
abstract_1** v5 = new abstract_1* ();
v5 = new abstract_1* ();
v5 = new abstract_1* ();
v5 = new abstract_1* ();
return ::func5();

}
/* method id 403 */ void C0::func1 (abstract_1** v6, abstract_0 v7) {
void* v8 = ((void*) 0);
void* v9 = ((void*) 0);
abstract_1** v10 = new abstract_1* ();
abstract_1** v11 = new abstract_1* ();
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_1** v16 = new abstract_1* ();
return;

}
/* method id 406 */ C1::~C1 () {
abstract_1** v17 = new abstract_1* ();
abstract_1** v18 = new abstract_1* ();
abstract_1** v19 = new abstract_1* ();
return;

}
/* method id 407 */ void* C1::func3 (abstract_1** v28, abstract_1** v29) {
abstract_0 v30 = abstract_0();
delete (new C1 ());
return v79;

}
/* method id 408 */ void C1::func1 () {
void* v76 = ((void*) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 409 */ C2::C2 () {
abstract_1** v81 = new abstract_1* ();
abstract_1** v82 = new abstract_1* ();
abstract_1** v83 = new abstract_1* ();
void* v84 = ((void*) 0);
return;

}
/* method id 410 */ C2::~C2 () {
abstract_1** v85 = new abstract_1* ();
abstract_1** v86 = new abstract_1* ();
delete (new C2 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
void* v174 = ((void*) 0);
abstract_1** v175 = new abstract_1* ();
abstract_1** v176 = new abstract_1* ();
abstract_1** v177 = new abstract_1* ();
return;

}
/* method id 412 */ C3::~C3 () {
abstract_1** v187 = new abstract_1* ();
abstract_1** v188 = new abstract_1* ();
abstract_1** v189 = new abstract_1* ();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()), C2(special_constructor ()) {}

void* func4 (abstract_1** v468, abstract_1** v469) {
abstract_0 v470;

delete (new C2 ());
return ((void*) 0);

}
abstract_1 func5 () {
void* v471;
void* v472;
abstract_1** v473;
void* v474;

return abstract_1();

}
void* func6 (abstract_1** v475, abstract_1** v476, abstract_1** v477) {
abstract_1** v478;
abstract_1** v479;
abstract_1** v480;
abstract_1** v481;

delete (new C2 ());
return ((void*) 0);

}
void* func7 (void* v482, abstract_1** v483, abstract_1** v484, abstract_1** v485) {
abstract_1** v486;

return v482;

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var12: PtrType{VoidType{}}
8    | var13: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var14: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var15: DeletablePtrType{PtrType{AbstractType{1}}}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
0    | {vfptr}
4    | var77: PtrType{VoidType{}}
8    | var78: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var79: PtrType{VoidType{}}
16   | var80: DeletablePtrType{PtrType{AbstractType{1}}}
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
}
/*
class C2    size(52)
0    +---
0    | {vbptr}
4    | var172: DeletablePtrType{PtrType{AbstractType{1}}}
8    | var173: DeletablePtrType{PtrType{AbstractType{1}}}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var77: PtrType{VoidType{}}
20   | var78: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var79: PtrType{VoidType{}}
28   | var80: DeletablePtrType{PtrType{AbstractType{1}}}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var12: PtrType{VoidType{}}
40   | var13: DeletablePtrType{PtrType{AbstractType{1}}}
44   | var14: DeletablePtrType{PtrType{AbstractType{1}}}
48   | var15: DeletablePtrType{PtrType{AbstractType{1}}}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(56)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | {vfptr}
8    | var77: PtrType{VoidType{}}
12   | var78: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var79: PtrType{VoidType{}}
20   | var80: DeletablePtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var12: PtrType{VoidType{}}
32   | var13: DeletablePtrType{PtrType{AbstractType{1}}}
36   | var14: DeletablePtrType{PtrType{AbstractType{1}}}
40   | var15: DeletablePtrType{PtrType{AbstractType{1}}}
44   +---
44   +--- (virtual base class C2)
44   | {vbptr}
48   | var172: DeletablePtrType{PtrType{AbstractType{1}}}
52   | var173: DeletablePtrType{PtrType{AbstractType{1}}}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 const size_t model_offset = 44;
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
