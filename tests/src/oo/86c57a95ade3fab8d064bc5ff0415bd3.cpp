// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 (C0 v0);
/* method id 403 */ virtual abstract_0* func0 (abstract_1* v3);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_1* v6;
abstract_1* v7;
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual abstract_0 func1 (abstract_1* v8);
/* method id 407 */ virtual abstract_0* func4 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_0* func0 (abstract_1* v13);
C2 (special_constructor);
C0 v14;
abstract_1* v15;
abstract_1* v16;
};
struct C3 : public virtual C2 {
/* method id 411 */ virtual abstract_0* func1 (C0 v17);
/* method id 412 */ virtual abstract_0 func1 (abstract_1* v18);
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ C3 ();
C3 (special_constructor);
C0 v25;
C0 v26;
C0 v27;
abstract_1* v28;
};
C0* func7 ();
abstract_0*** func8 (abstract_0** v29, abstract_1* v30, abstract_0** v31);
abstract_0* func9 (abstract_2 v32, abstract_2 v33, C0 v34, C0 v35);
C0* func10 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 (C0 v0) {
C0 v1 = *(&(*(((C0*) 0))));
C0 v2 = *(&(*(((C0*) 0))));
return ((C0*) 0);

}
/* method id 403 */ abstract_0* C1::func0 (abstract_1* v3) {
abstract_1* v4 = new abstract_1 ();
C0 v5 = *(((C0*) 0));
return new abstract_0 ();

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_0 C2::func1 (abstract_1* v8) {
return abstract_0();

}
/* method id 407 */ abstract_0* C2::func4 () {
return ((abstract_0*) 0);

}
/* method id 408 */ C2::C2 () {
abstract_1* v9 = ((abstract_1*) 0);
C0 v10 = *(&(*(((C0*) 0))));
C0 v11 = *(&(*(((C0*) 0))));
abstract_1* v12 = ((abstract_1*) 0);
return;

}
/* method id 409 */ abstract_0* C2::func0 (abstract_1* v13) {
return ((abstract_0*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ abstract_0* C3::func1 (C0 v17) {
return new abstract_0 ();

}
/* method id 412 */ abstract_0 C3::func1 (abstract_1* v18) {
C0 v19 = *(&(*((new C0 ()))));
C0 v20 = *(&(*((new C0 ()))));
return abstract_0();

}
/* method id 413 */ C3::~C3 () {
return;

}
/* method id 414 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C0* func7 () {

return (new C0 ());

}
abstract_0*** func8 (abstract_0** v29, abstract_1* v30, abstract_0** v31) {

return new abstract_0** ();

}
abstract_0* func9 (abstract_2 v32, abstract_2 v33, C0 v34, C0 v35) {

::func7();
return new abstract_0 ();

}
C0* func10 () {
C0 v36;
C0 v37;
C0 v38;
C0 v39;

return ((C0*) 0);

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
8    | var6: PtrType{AbstractType{1}}
12   | var7: PtrType{AbstractType{1}}
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
8    | var14: ClassType{0}
12   | var15: PtrType{AbstractType{1}}
16   | var16: PtrType{AbstractType{1}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   | {vtordisp for vbase 1}
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var6: PtrType{AbstractType{1}}
40   | var7: PtrType{AbstractType{1}}
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
class C3    size(72)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: ClassType{0}
12   | var26: ClassType{0}
16   | var27: ClassType{0}
20   | var28: PtrType{AbstractType{1}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   | {vtordisp for vbase 1}
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var6: PtrType{AbstractType{1}}
44   | var7: PtrType{AbstractType{1}}
48   +---
48   | {vtordisp for vbase 2}
52   +--- (virtual base class C2)
52   | {vfptr}
56   | {vbptr}
60   | var14: ClassType{0}
64   | var15: PtrType{AbstractType{1}}
68   | var16: PtrType{AbstractType{1}}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 52;
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
