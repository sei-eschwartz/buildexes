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
/* method id 401 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2  {
/* method id 402 */ abstract_0** func0 (C0 v2, C0 v3);
/* method id 403 */ virtual ~C2 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v8;
abstract_0** v9;
};
struct C3 : public virtual C0, public virtual C2, public C1 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual abstract_0* func2 ();
/* method id 407 */ virtual abstract_0** func3 (abstract_0** v12, abstract_0** v13, abstract_0** v14, abstract_0** v15);
/* method id 408 */ virtual ~C3 ();
C3 (special_constructor);
C0 v32;
abstract_0** v33;
abstract_0** v34;
abstract_0** v35;
};
abstract_0* func4 (abstract_0** v36, C0 v37, abstract_0** v38, abstract_0** v39);
abstract_0* func5 (abstract_0** v40, abstract_0** v41, abstract_0** v42);
abstract_0** func6 (abstract_0** v46, abstract_0** v47, abstract_0** v48, abstract_0** v49);
abstract_0* func7 (abstract_0** v54, abstract_0** v55, abstract_0** v56, C0 v57);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ abstract_0** C2::func0 (C0 v2, C0 v3) {
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
return v9;

}
/* method id 403 */ C2::~C2 () {
return;

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 405 */ C3::C3 () {
delete (new C1 ());
return;

}
/* method id 406 */ abstract_0* C3::func2 () {
C0 v10 = *((new C0 ()));
abstract_0** v11 = new abstract_0* ();
v10 = v0;
v10 = v0;
v10 = v0;
v10 = v0;
return ((abstract_0*) 0);

}
/* method id 407 */ abstract_0** C3::func3 (abstract_0** v12, abstract_0** v13, abstract_0** v14, abstract_0** v15) {
abstract_0** v16 = new abstract_0* ();
C0 v17 = *((new C0 ()));
abstract_0** v18 = new abstract_0* ();
abstract_0** v19 = new abstract_0* ();
return v9;

}
/* method id 408 */ C3::~C3 () {
abstract_0** v28 = ((abstract_0**) 0);
abstract_0** v29 = ((abstract_0**) 0);
abstract_0** v30 = ((abstract_0**) 0);
abstract_0** v31 = ((abstract_0**) 0);
::func5(v33, v33, v33);
::func5(v33, v33, v33);
::func5(v33, v33, v33);
::func5(v33, v33, v33);
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0* func4 (abstract_0** v36, C0 v37, abstract_0** v38, abstract_0** v39) {

return ((abstract_0*) 0);

}
abstract_0* func5 (abstract_0** v40, abstract_0** v41, abstract_0** v42) {
abstract_0** v43;
abstract_0** v44;
abstract_0** v45;

return ((abstract_0*) 0);

}
abstract_0** func6 (abstract_0** v46, abstract_0** v47, abstract_0** v48, abstract_0** v49) {
abstract_0** v50;
abstract_0** v51;
abstract_0** v52;
abstract_0** v53;

::func5(v52, v52, v52);
::func5(v52, v52, v52);
::func5(v52, v52, v52);
::func5(v52, v52, v52);
return v49;

}
abstract_0* func7 (abstract_0** v54, abstract_0** v55, abstract_0** v56, C0 v57) {
abstract_0** v58;
abstract_0** v59;
abstract_0** v60;
abstract_0** v61;

delete (new C1 ());
return new abstract_0 ();

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
class C1    size(2)
0    +---
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 2;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | {vfptr}
4    | var8: ClassType{0}
5    | alignment: 
8    | var9: PtrType{PtrType{AbstractType{0}}}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
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
4    | +--- (base class C1)
4    | | var0: ClassType{0}
5    | | var1: ClassType{0}
6    | +---
6    | alignment: VBPtr aligned to pointer size
8    | alignment: Weird msvc alignment bug
10   | alignment: Weird msvc alignment bug: final alignment
12   | {vbptr}
16   | var32: ClassType{0}
17   | alignment: 
20   | var33: PtrType{PtrType{AbstractType{0}}}
24   | var34: PtrType{PtrType{AbstractType{0}}}
28   | var35: PtrType{PtrType{AbstractType{0}}}
32   +---
32   +--- (virtual base class C0)
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | var8: ClassType{0}
37   | alignment: 
40   | var9: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 32;
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
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
