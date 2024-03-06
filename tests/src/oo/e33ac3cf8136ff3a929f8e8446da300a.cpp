// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual abstract_1*** func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0 v16;
abstract_0 v17;
abstract_0 v18;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
};
abstract_1* func2 (abstract_0 v65, abstract_0 v66);
abstract_1** func3 (abstract_0 v71, abstract_0 v72, abstract_0 v73, abstract_3 v74);
void func4 (abstract_1* v77, abstract_3 v78, abstract_4** v79);
abstract_1*** func5 ();
// definitions
/* method id 400 */ abstract_1*** C0::func0 (abstract_0 v0, abstract_0 v1, abstract_0 v2, abstract_0 v3) {
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
v4 = v2;
v4 = v2;
v4 = v2;
v4 = v2;
return new abstract_1** ();

}
/* method id 401 */ C0::~C0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
delete (new C1 ());
return;

}
/* method id 404 */ C1::~C1 () {
abstract_0 v27 = abstract_0();
abstract_0 v28 = abstract_0();
abstract_0 v29 = abstract_0();
abstract_0 v30 = abstract_0();
v29 = v17;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1* func2 (abstract_0 v65, abstract_0 v66) {
abstract_0 v67;
abstract_0 v68;
abstract_0 v69;
abstract_0 v70;

return ((abstract_1*) 0);

}
abstract_1** func3 (abstract_0 v71, abstract_0 v72, abstract_0 v73, abstract_3 v74) {
abstract_3 v75;
abstract_0 v76;

v76 = v76;
v76 = v76;
return new abstract_1* ();

}
void func4 (abstract_1* v77, abstract_3 v78, abstract_4** v79) {
abstract_1** v80;
abstract_1** v81;
abstract_3 v82;
abstract_1* v83;

return;

}
abstract_1*** func5 () {
abstract_4** v84;

v84 = v84;
v84 = v84;
v84 = v84;
v84 = v84;
return new abstract_1** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var16: AbstractType{0}
8    | var17: AbstractType{0}
12   | var18: AbstractType{0}
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
class C1    size(20)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    | var16: AbstractType{0}
12   | var17: AbstractType{0}
16   | var18: AbstractType{0}
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
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
