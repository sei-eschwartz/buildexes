// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 404 */ virtual void* func1 ();
C2 (special_constructor);
abstract_0 v17;
};
struct C3 : public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v45;
abstract_1 v46;
abstract_0 v47;
abstract_0 v48;
};
void* func4 (abstract_1 v49, abstract_0 v50, abstract_0 v51, abstract_0 v52);
// definitions
/* method id 400 */ C0::C0 () {
void*** v0 = new void** ();
(&(*((new C1 ()))))->C1::func1();
(&(*((new C1 ()))))->C1::func1();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void* C1::func1 () {
delete (new C1 ());
return ::func4(abstract_1(), abstract_0(), abstract_0(), abstract_0());

}
/* method id 402 */ C1::C1 () {
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void*** v11 = new void** ();
abstract_0 v12 = abstract_0();
void*** v13 = new void** ();
return;

}
/* method id 404 */ void* C2::func1 () {
abstract_0 v15 = abstract_0();
void*** v16 = new void** ();
return ((void*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
void*** v18 = new void** ();
delete (new C3 ());
return;

}
/* method id 406 */ C3::~C3 () {
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func4 (abstract_1 v49, abstract_0 v50, abstract_0 v51, abstract_0 v52) {
abstract_0 v53;
abstract_0 v54;
abstract_0 v55;
abstract_0 v56;

return (((C1*) 0))->C1::func1();

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
class C2    size(28)
0    +---
0    | {vbptr}
4    | var17: AbstractType{0}
8    +---
8    +--- (virtual base class C0)
8    +---
8    | {vtordisp for vbase 1}
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var9: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
24   | var10: DeletablePtrType{PtrType{PtrType{VoidType{}}}}
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
 }}}
/*
class C3    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var45: AbstractType{0}
12   | var46: AbstractType{1}
16   | var47: AbstractType{0}
20   | var48: AbstractType{0}
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
44   +--- (virtual base class C2)
44   | {vbptr}
48   | var17: AbstractType{0}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
