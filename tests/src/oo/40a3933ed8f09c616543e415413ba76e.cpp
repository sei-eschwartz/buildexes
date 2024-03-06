// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_5 v2;
abstract_5 v3;
abstract_5 v4;
abstract_5 v5;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
abstract_5 v10;
abstract_5 v11;
abstract_5 v12;
abstract_5 v13;
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
/* method id 403 */ virtual ~C2 ();
C2 (special_constructor);
abstract_5 v26;
abstract_5 v27;
abstract_5 v28;
};
struct C3 : public C2 {
/* method id 404 */ C3 ();
C3 (special_constructor);
abstract_5 v29;
};
abstract_0** func2 (abstract_6 v30, abstract_6 v31, abstract_5 v32);
abstract_4**** func3 (abstract_5 v37);
void**** func4 (C3 v42, abstract_6 v43, abstract_6 v44, abstract_6 v45);
abstract_1*** func5 (abstract_6 v47, abstract_6 v48, abstract_6 v49, abstract_6 v50);
// definitions
/* method id 400 */ C0::C0 () {
abstract_5 v0 = abstract_5();
abstract_5 v1 = abstract_5();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_5 v6 = abstract_5();
abstract_5 v7 = abstract_5();
abstract_5 v8 = abstract_5();
abstract_5 v9 = abstract_5();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
return;

}
/* method id 403 */ C2::~C2 () {
abstract_5 v22 = abstract_5();
abstract_5 v23 = abstract_5();
abstract_5 v24 = abstract_5();
abstract_5 v25 = abstract_5();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 404 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0** func2 (abstract_6 v30, abstract_6 v31, abstract_5 v32) {
abstract_5 v33;
abstract_6 v34;
C3 v35;
abstract_6 v36;

return new abstract_0* ();

}
abstract_4**** func3 (abstract_5 v37) {
abstract_6 v38;
abstract_6 v39;
abstract_6 v40;
abstract_6 v41;

delete (new C1 ());
return new abstract_4*** ();

}
void**** func4 (C3 v42, abstract_6 v43, abstract_6 v44, abstract_6 v45) {
abstract_6 v46;

return new void*** ();

}
abstract_1*** func5 (abstract_6 v47, abstract_6 v48, abstract_6 v49, abstract_6 v50) {
abstract_6 v51;
C3 v52;
C3 v53;
abstract_6 v54;

return new abstract_1** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var2: AbstractType{5}
4    | var3: AbstractType{5}
8    | var4: AbstractType{5}
12   | var5: AbstractType{5}
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
4    | var10: AbstractType{5}
8    | var11: AbstractType{5}
12   | var12: AbstractType{5}
16   | var13: AbstractType{5}
20   +---
20   +--- (virtual base class C0)
20   | var2: AbstractType{5}
24   | var3: AbstractType{5}
28   | var4: AbstractType{5}
32   | var5: AbstractType{5}
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
class C2    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var26: AbstractType{5}
12   | var27: AbstractType{5}
16   | var28: AbstractType{5}
20   +---
20   +--- (virtual base class C0)
20   | var2: AbstractType{5}
24   | var3: AbstractType{5}
28   | var4: AbstractType{5}
32   | var5: AbstractType{5}
36   +---
36   +--- (virtual base class C1)
36   | {vbptr}
40   | var10: AbstractType{5}
44   | var11: AbstractType{5}
48   | var12: AbstractType{5}
52   | var13: AbstractType{5}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
8    | | var26: AbstractType{5}
12   | | var27: AbstractType{5}
16   | | var28: AbstractType{5}
20   | +---
20   | var29: AbstractType{5}
24   +---
24   +--- (virtual base class C0)
24   | var2: AbstractType{5}
28   | var3: AbstractType{5}
32   | var4: AbstractType{5}
36   | var5: AbstractType{5}
40   +---
40   +--- (virtual base class C1)
40   | {vbptr}
44   | var10: AbstractType{5}
48   | var11: AbstractType{5}
52   | var12: AbstractType{5}
56   | var13: AbstractType{5}
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
