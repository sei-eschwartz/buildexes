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
struct C1  {
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ void* func0 (C0 v3);
/* method id 403 */ virtual void* func1 (C0 v4, abstract_0 v5);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0 v6;
C0 v7;
C0 v8;
C0 v9;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
C0 v40;
C0 v41;
C0 v42;
C0 v43;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
abstract_0 v2 = abstract_0();
v2 = v6;
v2 = v6;
return;

}
/* method id 402 */ void* C1::func0 (C0 v3) {
return (this)->C1::func1(v9, v6);

}
/* method id 403 */ void* C1::func1 (C0 v4, abstract_0 v5) {
delete (new C1 ());
return ((void*) 0);

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::C2 () {
C0 v10 = *(((C0*) 0));
C1 v11 = *((new C1 ()));
abstract_0 v12 = abstract_0();
C0 v13 = *(&(*((new C0 ()))));
return;

}
/* method id 406 */ C2::~C2 () {
C0 v18 = *(&(*(((C0*) 0))));
C0 v19 = *(&(*(((C0*) 0))));
C0 v20 = *(&(*(((C0*) 0))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
C1 v44 = *(((C1*) 0));
C1 v45 = *(((C1*) 0));
C0 v46 = *((new C0 ()));
C0 v47 = *((new C0 ()));
(&(v45))->C1::func0(v9);
(&(v45))->C1::func0(v9);
(&(v45))->C1::func0(v9);
(&(v45))->C1::func0(v9);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

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
4    | var6: AbstractType{0}
8    | var7: ClassType{0}
9    | var8: ClassType{0}
10   | var9: ClassType{0}
11   | alignment: 
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
class C2    size(24)
0    +---
0    | {vbptr}
4    | var40: ClassType{0}
5    | var41: ClassType{0}
6    | var42: ClassType{0}
7    | var43: ClassType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var6: AbstractType{0}
16   | var7: ClassType{0}
17   | var8: ClassType{0}
18   | var9: ClassType{0}
19   | alignment: 
20   +---
20   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
24   +--- (virtual base class C0)
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | {vfptr}
8    | var6: AbstractType{0}
12   | var7: ClassType{0}
13   | var8: ClassType{0}
14   | var9: ClassType{0}
15   | alignment: 
16   +---
16   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C2)
20   | {vbptr}
24   | var40: ClassType{0}
25   | var41: ClassType{0}
26   | var42: ClassType{0}
27   | var43: ClassType{0}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
