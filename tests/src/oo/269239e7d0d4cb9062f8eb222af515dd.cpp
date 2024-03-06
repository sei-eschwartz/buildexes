// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void* func0 (abstract_5 v0, abstract_6 v1);
/* method id 403 */ void* func1 (abstract_6 v5);
C0 (special_constructor);
abstract_7 v6;
abstract_6 v7;
abstract_5 v8;
};
struct C1 : public virtual C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_6 v9;
abstract_6 v10;
abstract_6 v11;
abstract_6 v12;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
abstract_5 v29;
};
struct C3 : public virtual C1, public C2 {
/* method id 407 */ virtual void func0 ();
/* method id 408 */ ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_7 v32;
abstract_5 v33;
};
abstract_0**** func3 ();
abstract_0**** func4 (abstract_6 v38);
void** func5 (abstract_8 v39, C1 v40);
abstract_1* func6 (abstract_9 v42, abstract_9 v43, abstract_6 v44, C1 v45);
// definitions
/* method id 400 */ void C0::func0 () {
return;

}
/* method id 401 */ C0::C0 () {
return;

}
/* method id 402 */ void* C0::func0 (abstract_5 v0, abstract_6 v1) {
delete (new C1 ());
return ((void*) 0);

}
/* method id 403 */ void* C0::func1 (abstract_6 v5) {
return ((void*) 0);

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_7 v13 = abstract_7();
abstract_7 v14 = abstract_7();
abstract_6 v15 = abstract_6();
abstract_7 v16 = abstract_7();
return;

}
/* method id 406 */ C2::~C2 () {
abstract_6 v21 = abstract_6();
abstract_6 v22 = abstract_6();
abstract_6 v23 = abstract_6();
abstract_6 v24 = abstract_6();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ void C3::func0 () {
abstract_7 v30 = abstract_7();
return;

}
/* method id 408 */ C3::~C3 () {
abstract_5 v31 = abstract_5();
return;

}
/* method id 409 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0**** func3 () {
abstract_6 v34;
abstract_8 v35;
abstract_8 v36;
abstract_6 v37;

return new abstract_0*** ();

}
abstract_0**** func4 (abstract_6 v38) {

delete (new C0 ());
return new abstract_0*** ();

}
void** func5 (abstract_8 v39, C1 v40) {
abstract_6 v41;

delete (new C0 ());
return new void* ();

}
abstract_1* func6 (abstract_9 v42, abstract_9 v43, abstract_6 v44, C1 v45) {
abstract_6 v46;
abstract_6 v47;
abstract_10 v48;
abstract_6 v49;

return ((abstract_1*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var6: AbstractType{7}
8    | var7: AbstractType{6}
12   | var8: AbstractType{5}
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
class C1    size(36)
0    +---
0    | {vbptr}
4    | var9: AbstractType{6}
8    | var10: AbstractType{6}
12   | var11: AbstractType{6}
16   | var12: AbstractType{6}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var6: AbstractType{7}
28   | var7: AbstractType{6}
32   | var8: AbstractType{5}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: AbstractType{5}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var6: AbstractType{7}
20   | var7: AbstractType{6}
24   | var8: AbstractType{5}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var9: AbstractType{6}
36   | var10: AbstractType{6}
40   | var11: AbstractType{6}
44   | var12: AbstractType{6}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
 const size_t model_offset = 28;
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
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var29: AbstractType{5}
12   | +---
12   | var32: AbstractType{7}
16   | var33: AbstractType{5}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var6: AbstractType{7}
32   | var7: AbstractType{6}
36   | var8: AbstractType{5}
40   +---
40   +--- (virtual base class C1)
40   | {vbptr}
44   | var9: AbstractType{6}
48   | var10: AbstractType{6}
52   | var11: AbstractType{6}
56   | var12: AbstractType{6}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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
