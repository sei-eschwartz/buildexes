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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ virtual void func1 (void** v0, void** v1, void** v2, void** v3);
/* method id 403 */ void func1 (void** v7, void** v8, void** v9);
/* method id 404 */ void func2 (void** v11, void** v12);
/* method id 405 */ virtual void func1 (void** v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v16;
};
struct C2  {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual void func3 (abstract_0 v89, abstract_0 v90);
/* method id 410 */ virtual void func2 ();
C2 (special_constructor);
abstract_0 v143;
abstract_0 v144;
abstract_2 v145;
void** v146;
};
struct C3 : public virtual C0, public virtual C2 {
/* method id 411 */ virtual void func1 (abstract_0 v147, abstract_0 v148, abstract_2 v149, abstract_1 v150);
/* method id 412 */ C3 ();
C3 (special_constructor);
abstract_3 v153;
abstract_0 v154;
void** v155;
};
void func5 (abstract_0 v156, abstract_0 v157, abstract_1 v158, abstract_0 v159);
void func6 (abstract_0 v164, abstract_0 v165, abstract_0 v166);
void func7 (abstract_0 v169, abstract_0 v170, abstract_0 v171, abstract_0 v172);
void func8 (abstract_0 v177, abstract_0 v178, abstract_0 v179, abstract_0 v180);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func1 (void** v0, void** v1, void** v2, void** v3) {
void** v4 = new void* ();
void** v5 = new void* ();
void** v6 = new void* ();
return;

}
/* method id 403 */ void C1::func1 (void** v7, void** v8, void** v9) {
void** v10 = new void* ();
return ::func6(abstract_0(), abstract_0(), abstract_0());

}
/* method id 404 */ void C1::func2 (void** v11, void** v12) {
abstract_0 v13 = abstract_0();
::func6(v13, v13, v13);
::func6(v13, v13, v13);
::func6(v13, v13, v13);
::func6(v13, v13, v13);
return;

}
/* method id 405 */ void C1::func1 (void** v14) {
abstract_0 v15 = abstract_0();
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
return;

}
/* method id 409 */ void C2::func3 (abstract_0 v89, abstract_0 v90) {
abstract_1 v91 = abstract_1();
abstract_0 v92 = abstract_0();
abstract_0 v93 = abstract_0();
abstract_0 v94 = abstract_0();
delete (new C1 ());
return ::func6(v89, abstract_0(), v89);

}
/* method id 410 */ void C2::func2 () {
delete (new C3 ());
return ::func6(v144, v144, v144);

}
C2::C2 (special_constructor)  {}

/* method id 411 */ void C3::func1 (abstract_0 v147, abstract_0 v148, abstract_2 v149, abstract_1 v150) {
abstract_2 v151 = abstract_2();
abstract_2 v152 = abstract_2();
::func6(v143, v143, v143);
::func6(v143, v143, v143);
::func6(v143, v143, v143);
::func6(v143, v143, v143);
return ::func6(v143, v143, v143);

}
/* method id 412 */ C3::C3 () {
::func6(v144, v144, v144);
::func6(v144, v144, v144);
::func6(v144, v144, v144);
::func6(v144, v144, v144);
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

void func5 (abstract_0 v156, abstract_0 v157, abstract_1 v158, abstract_0 v159) {
abstract_0 v160;
abstract_0 v161;
abstract_0 v162;
abstract_0 v163;

return;

}
void func6 (abstract_0 v164, abstract_0 v165, abstract_0 v166) {
abstract_0 v167;
abstract_0 v168;

return;

}
void func7 (abstract_0 v169, abstract_0 v170, abstract_0 v171, abstract_0 v172) {
abstract_0 v173;
abstract_0 v174;
abstract_0 v175;
abstract_0 v176;

delete (new C2 ());
return ::func5(v174, v174, abstract_1(), v174);

}
void func8 (abstract_0 v177, abstract_0 v178, abstract_0 v179, abstract_0 v180) {
abstract_0 v181;
abstract_0 v182;
abstract_0 v183;
abstract_0 v184;

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var16: AbstractType{0}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
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
class C2    size(20)
0    +---
0    | {vfptr}
4    | var143: AbstractType{0}
8    | var144: AbstractType{0}
12   | var145: AbstractType{2}
16   | var146: DeletablePtrType{PtrType{VoidType{}}}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var153: AbstractType{3}
12   | var154: AbstractType{0}
16   | var155: DeletablePtrType{PtrType{VoidType{}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C2)
24   | {vfptr}
28   | var143: AbstractType{0}
32   | var144: AbstractType{0}
36   | var145: AbstractType{2}
40   | var146: DeletablePtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 20;
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
 const size_t model_offset = 24;
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
