// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void func0 (void* v0);
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
C1 (special_constructor);
abstract_0 v13;
abstract_0 v14;
void* v15;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0 v320;
};
struct C3 : public C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
abstract_0 v347;
abstract_0 v348;
abstract_0 v349;
abstract_0 v350;
};
void func2 (C1 v351, abstract_0 v352, abstract_0 v353, abstract_0 v354);
void func3 (abstract_0 v355);
void func4 ();
void func5 (abstract_0 v363, abstract_0 v364, abstract_0 v365, abstract_0 v366);
// definitions
/* method id 400 */ void C0::func0 (void* v0) {
void* v1 = ((void*) 0);
return ::func5(abstract_0(), abstract_0(), abstract_0(), abstract_0());

}
/* method id 401 */ C0::~C0 () {
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
void* v4 = ((void*) 0);
void* v5 = ((void*) 0);
return;

}
/* method id 402 */ C0::C0 () {
void* v6 = ((void*) 0);
delete (new C0 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
v15 = ((void*) 0);
v15 = ((void*) 0);
v15 = ((void*) 0);
v15 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
return;

}
/* method id 406 */ C2::~C2 () {
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
delete (new C3 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
abstract_0 v321 = abstract_0();
abstract_0 v322 = abstract_0();
abstract_0 v323 = abstract_0();
C1 v324 = *(((C1*) 0));
return;

}
/* method id 408 */ C3::~C3 () {
abstract_0 v325 = abstract_0();
abstract_0 v326 = abstract_0();
abstract_0 v327 = abstract_0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func2 (C1 v351, abstract_0 v352, abstract_0 v353, abstract_0 v354) {

return ::func3(v353);

}
void func3 (abstract_0 v355) {
abstract_0 v356;
abstract_0 v357;
abstract_0 v358;

return (((C0*) 0))->C0::func0(((void*) 0));

}
void func4 () {
abstract_0 v359;
abstract_0 v360;
abstract_0 v361;
abstract_0 v362;

delete (new C1 ());
return;

}
void func5 (abstract_0 v363, abstract_0 v364, abstract_0 v365, abstract_0 v366) {
C1 v367;
abstract_0 v368;
abstract_0 v369;

delete (new C1 ());
return;

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
4    | var13: AbstractType{0}
8    | var14: AbstractType{0}
12   | var15: PtrType{VoidType{}}
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
class C2    size(28)
0    +---
0    | {vbptr}
4    | var320: AbstractType{0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   +--- (virtual base class C1)
12   | {vbptr}
16   | var13: AbstractType{0}
20   | var14: AbstractType{0}
24   | var15: PtrType{VoidType{}}
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
class C3    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var13: AbstractType{0}
8    | | var14: AbstractType{0}
12   | | var15: PtrType{VoidType{}}
16   | +---
16   | var347: AbstractType{0}
20   | var348: AbstractType{0}
24   | var349: AbstractType{0}
28   | var350: AbstractType{0}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
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
