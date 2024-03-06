// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v5);
/* method id 404 */ virtual abstract_0* func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9);
/* method id 405 */ virtual abstract_2 func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0** v10;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual abstract_2 func0 ();
/* method id 408 */ virtual abstract_0** func1 (abstract_0** v15, abstract_0** v16, abstract_0** v17, abstract_0** v18);
/* method id 409 */ C2 ();
C2 (special_constructor);
abstract_5 v21;
abstract_5 v22;
abstract_0** v23;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
C3 (special_constructor);
abstract_5 v40;
abstract_5 v41;
abstract_5 v42;
abstract_5 v43;
};
abstract_0* func3 (abstract_0** v44, abstract_5 v45, abstract_5 v46, abstract_5 v47);
abstract_0* func4 (abstract_5 v48);
abstract_4 func5 ();
abstract_0 func6 (abstract_0** v56, abstract_0** v57, abstract_0** v58, abstract_5 v59);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
delete (new C3 ());
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
delete (new C1 ());
return ((abstract_0*) 0);

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
v5 = v5;
v5 = v5;
v5 = v5;
v5 = v5;
return new abstract_0 ();

}
/* method id 404 */ abstract_0* C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
return new abstract_0 ();

}
/* method id 405 */ abstract_2 C1::func0 () {
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_2 C2::func0 () {
abstract_0** v11 = ((abstract_0**) 0);
abstract_0** v12 = ((abstract_0**) 0);
abstract_0** v13 = new abstract_0* ();
abstract_0** v14 = new abstract_0* ();
delete (new C3 ());
v21 = v21;
return abstract_2();

}
/* method id 408 */ abstract_0** C2::func1 (abstract_0** v15, abstract_0** v16, abstract_0** v17, abstract_0** v18) {
abstract_0** v19 = new abstract_0* ();
abstract_0** v20 = new abstract_0* ();
return v17;

}
/* method id 409 */ C2::C2 () {
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_5 v24 = abstract_5();
abstract_5 v25 = abstract_5();
abstract_0** v26 = new abstract_0* ();
abstract_5 v27 = abstract_5();
((C1*)(((C2*) 0)))->C1::func0(((abstract_0**) 0));
((C1*)(((C2*) 0)))->C1::func0(((abstract_0**) 0));
((C1*)(((C2*) 0)))->C1::func0(((abstract_0**) 0));
((C1*)(((C2*) 0)))->C1::func0(((abstract_0**) 0));
return;

}
/* method id 411 */ C3::~C3 () {
abstract_5 v32 = abstract_5();
abstract_5 v33 = abstract_5();
abstract_5 v34 = abstract_5();
abstract_5 v35 = abstract_5();
v23 = v10;
v23 = v10;
((C1*)(((C3*) 0)))->C1::func0();
((C1*)(((C3*) 0)))->C1::func0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func3 (abstract_0** v44, abstract_5 v45, abstract_5 v46, abstract_5 v47) {

return new abstract_0 ();

}
abstract_0* func4 (abstract_5 v48) {
abstract_5 v49;
abstract_5 v50;
abstract_5 v51;

return ((abstract_0*) 0);

}
abstract_4 func5 () {
abstract_5 v52;
abstract_5 v53;
abstract_5 v54;
abstract_5 v55;

return abstract_4();

}
abstract_0 func6 (abstract_0** v56, abstract_0** v57, abstract_0** v58, abstract_5 v59) {
abstract_0** v60;
abstract_0** v61;
abstract_5 v62;
abstract_5 v63;

return abstract_0();

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
0    | {vfptr}
4    | {vbptr}
8    | var10: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: AbstractType{5}
12   | var22: AbstractType{5}
16   | var23: PtrType{PtrType{AbstractType{0}}}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   | {vtordisp for vbase 1}
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var10: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 24;
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
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(68)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var40: AbstractType{5}
12   | var41: AbstractType{5}
16   | var42: AbstractType{5}
20   | var43: AbstractType{5}
24   | {vtordisp for vbase 0}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
32   | {vtordisp for vbase 1}
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var10: PtrType{PtrType{AbstractType{0}}}
48   +---
48   +--- (virtual base class C2)
48   | {vfptr}
52   | {vbptr}
56   | var21: AbstractType{5}
60   | var22: AbstractType{5}
64   | var23: PtrType{PtrType{AbstractType{0}}}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
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
 const size_t model_offset = 48;
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
