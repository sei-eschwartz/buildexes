// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ virtual abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1** v9;
abstract_2 v10;
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual abstract_1 func1 ();
/* method id 407 */ virtual abstract_1 func3 (abstract_1** v12, abstract_1** v13, abstract_2 v14, abstract_1** v15);
/* method id 408 */ virtual abstract_1 func0 (abstract_2 v16, abstract_1** v17);
C1 (special_constructor);
abstract_2 v19;
abstract_1** v20;
abstract_1** v21;
abstract_1** v22;
};
struct C2 : public C1 {
/* method id 409 */ virtual ~C2 ();
/* method id 410 */ C2 ();
/* method id 411 */ virtual abstract_1 func4 (abstract_3 v31);
C2 (special_constructor);
};
struct C3  {
/* method id 412 */ C3 ();
/* method id 413 */ virtual abstract_1 func4 (abstract_0 v55, abstract_0 v56);
/* method id 414 */ virtual abstract_1 func0 (abstract_1* v57, abstract_3 v58);
/* method id 415 */ ~C3 ();
C3 (special_constructor);
C2 v67;
abstract_1* v68;
abstract_0 v69;
};
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
delete (new C1 ());
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
abstract_1** v8 = new abstract_1* ();
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
abstract_0 v11 = abstract_0();
v9 = v20;
v9 = v20;
v9 = v20;
v9 = v20;
return;

}
/* method id 406 */ abstract_1 C1::func1 () {
return abstract_1();

}
/* method id 407 */ abstract_1 C1::func3 (abstract_1** v12, abstract_1** v13, abstract_2 v14, abstract_1** v15) {
delete (new C3 ());
return abstract_1();

}
/* method id 408 */ abstract_1 C1::func0 (abstract_2 v16, abstract_1** v17) {
abstract_0 v18 = abstract_0();
delete (new C3 ());
return ((new C1 ()))->C1::func1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
abstract_1** v23 = new abstract_1* ();
abstract_1** v24 = new abstract_1* ();
abstract_1** v25 = new abstract_1* ();
abstract_1** v26 = new abstract_1* ();
v19 = v19;
return;

}
/* method id 410 */ C2::C2 () {
abstract_1** v27 = new abstract_1* ();
abstract_1** v28 = new abstract_1* ();
abstract_2 v29 = abstract_2();
abstract_3 v30 = abstract_3();
return;

}
/* method id 411 */ abstract_1 C2::func4 (abstract_3 v31) {
abstract_1** v32 = new abstract_1* ();
abstract_1** v33 = new abstract_1* ();
abstract_1** v34 = new abstract_1* ();
abstract_2 v35 = abstract_2();
delete (new C3 ());
return abstract_1();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_3 v51 = abstract_3();
abstract_1* v52 = new abstract_1 ();
abstract_2 v53 = abstract_2();
abstract_0 v54 = abstract_0();
(this)->C3::func0(v52, abstract_3());
(this)->C3::func0(v52, abstract_3());
(this)->C3::func0(v52, abstract_3());
(this)->C3::func0(v52, abstract_3());
return;

}
/* method id 413 */ abstract_1 C3::func4 (abstract_0 v55, abstract_0 v56) {
delete (new C1 ());
return abstract_1();

}
/* method id 414 */ abstract_1 C3::func0 (abstract_1* v57, abstract_3 v58) {
abstract_1** v59 = new abstract_1* ();
abstract_1** v60 = new abstract_1* ();
abstract_1** v61 = new abstract_1* ();
C2 v62 = *((new C2 ()));
return abstract_1();

}
/* method id 415 */ C3::~C3 () {
C2 v63 = *(&(*(((C2*) 0))));
abstract_0 v64 = abstract_0();
C2 v65 = *((new C2 ()));
abstract_1** v66 = new abstract_1* ();
return;

}
C3::C3 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var9: DeletablePtrType{PtrType{AbstractType{1}}}
8    | var10: AbstractType{2}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | {vfptr}
4    | {vbptr}
8    | var19: AbstractType{2}
12   | var20: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var21: DeletablePtrType{PtrType{AbstractType{1}}}
20   | var22: DeletablePtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var10: AbstractType{2}
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var19: AbstractType{2}
12   | | var20: DeletablePtrType{PtrType{AbstractType{1}}}
16   | | var21: DeletablePtrType{PtrType{AbstractType{1}}}
20   | | var22: DeletablePtrType{PtrType{AbstractType{1}}}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var10: AbstractType{2}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(48)
0    +---
0    | {vfptr}
4    | var67: ClassType{2}
40   | var68: PtrType{AbstractType{1}}
44   | var69: AbstractType{0}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
