// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0 v0;
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
/* method id 403 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0 v6;
abstract_0 v7;
C0 v8;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
abstract_0 v9;
abstract_0 v10;
C0 v11;
C0 v12;
};
struct C3 : public virtual C1, public C2 {
/* method id 406 */ void func0 (C0 v13);
/* method id 407 */ C3 ();
/* method id 408 */ ~C3 ();
C3 (special_constructor);
};
void func5 (C0 v42, C0 v43, C0 v44);
void func6 (C0 v48);
void func7 (C0 v49);
void func8 (C0 v50, C0 v51, C0 v52, abstract_0 v53);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
return;

}
/* method id 403 */ C1::~C1 () {
delete (new C2 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 406 */ void C3::func0 (C0 v13) {
C0 v14 = *(((C0*) 0));
abstract_0 v15 = abstract_0();
abstract_0 v16 = abstract_0();
return ::func8(v8, v8, v8, abstract_0());

}
/* method id 407 */ C3::C3 () {
C0 v17 = *(&(*(((C0*) 0))));
C0 v18 = *(&(*(((C0*) 0))));
C0 v19 = *(&(*(((C0*) 0))));
abstract_0 v20 = abstract_0();
v0 = v0;
v0 = v0;
v0 = v0;
v0 = v0;
return;

}
/* method id 408 */ C3::~C3 () {
C0 v38 = *(((C0*) 0));
C0 v39 = *(((C0*) 0));
C0 v40 = *(((C0*) 0));
abstract_0 v41 = abstract_0();
v8 = v38;
v8 = v38;
v8 = v38;
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func5 (C0 v42, C0 v43, C0 v44) {
C0 v45;
C0 v46;
C0 v47;

return ::func6(v43);

}
void func6 (C0 v48) {

delete (new C3 ());
return;

}
void func7 (C0 v49) {

v49 = *((new C0 ()));
v49 = *((new C0 ()));
v49 = *((new C0 ()));
v49 = *((new C0 ()));
return ::func6(*((new C0 ())));

}
void func8 (C0 v50, C0 v51, C0 v52, abstract_0 v53) {
C0 v54;
void* v55;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | var0: AbstractType{0}
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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var6: AbstractType{0}
12   | var7: AbstractType{0}
16   | var8: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | var0: AbstractType{0}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(44)
0    +---
0    | {vbptr}
4    | var9: AbstractType{0}
8    | var10: AbstractType{0}
12   | var11: ClassType{0}
16   | var12: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | var0: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var6: AbstractType{0}
36   | var7: AbstractType{0}
40   | var8: ClassType{0}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
0    | | {vbptr}
4    | | var9: AbstractType{0}
8    | | var10: AbstractType{0}
12   | | var11: ClassType{0}
16   | | var12: ClassType{0}
20   | +---
20   +---
20   +--- (virtual base class C0)
20   | var0: AbstractType{0}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var6: AbstractType{0}
36   | var7: AbstractType{0}
40   | var8: ClassType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
