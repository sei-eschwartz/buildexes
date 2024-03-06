// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
/* method id 411 */ abstract_1 func0 (abstract_1** v57, abstract_2 v58, abstract_3 v59, abstract_1** v60);
C2 (special_constructor);
};
struct C3 : public C0 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual ~C3 ();
/* method id 414 */ virtual abstract_1 func1 ();
/* method id 415 */ virtual abstract_1 func3 (abstract_1** v63, abstract_1** v64, abstract_2 v65, abstract_1** v66);
C3 (special_constructor);
abstract_0 v67;
};
abstract_1 func5 ();
abstract_1 func6 (abstract_1** v71, abstract_1** v72, abstract_1** v73, abstract_1** v74);
abstract_1 func7 (abstract_1** v78, abstract_1** v79);
abstract_1 func8 (abstract_1** v84, abstract_1** v85, abstract_2 v86, abstract_1** v87);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C2 ());
return ::func6(v9, v9, v9, v9);

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
delete (new C1 ());
return ::func6(new abstract_1* (), new abstract_1* (), new abstract_1* (), new abstract_1* ());

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
return;

}
/* method id 406 */ abstract_1 C1::func1 () {
delete (new C1 ());
return ::func6(v21, v21, v21, v21);

}
/* method id 407 */ abstract_1 C1::func3 (abstract_1** v12, abstract_1** v13, abstract_2 v14, abstract_1** v15) {
delete (new C1 ());
return abstract_1();

}
/* method id 408 */ abstract_1 C1::func0 (abstract_2 v16, abstract_1** v17) {
abstract_0 v18 = abstract_0();
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ C2::~C2 () {
abstract_1** v23 = new abstract_1* ();
abstract_1** v24 = new abstract_1* ();
abstract_1** v25 = new abstract_1* ();
abstract_1** v26 = new abstract_1* ();
delete (new C1 ());
return;

}
/* method id 410 */ C2::C2 () {
abstract_1** v27 = new abstract_1* ();
abstract_1** v28 = new abstract_1* ();
abstract_1** v29 = new abstract_1* ();
abstract_2 v30 = abstract_2();
return;

}
/* method id 411 */ abstract_1 C2::func0 (abstract_1** v57, abstract_2 v58, abstract_3 v59, abstract_1** v60) {
return ::func6(v21, v21, v21, v21);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_1** v61 = new abstract_1* ();
return;

}
/* method id 413 */ C3::~C3 () {
return;

}
/* method id 414 */ abstract_1 C3::func1 () {
delete (new C1 ());
return ::func6(v9, v9, v9, v9);

}
/* method id 415 */ abstract_1 C3::func3 (abstract_1** v63, abstract_1** v64, abstract_2 v65, abstract_1** v66) {
return abstract_1();

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func5 () {
abstract_3 v68;
abstract_4 v69;
abstract_0 v70;

return ::func7(new abstract_1* (), new abstract_1* ());

}
abstract_1 func6 (abstract_1** v71, abstract_1** v72, abstract_1** v73, abstract_1** v74) {
abstract_1** v75;
abstract_1** v76;
abstract_1** v77;

return ::func7(v72, v72);

}
abstract_1 func7 (abstract_1** v78, abstract_1** v79) {
abstract_1** v80;
abstract_1** v81;
abstract_1** v82;
abstract_1** v83;

delete (new C1 ());
return ::func6(v79, v79, v79, v79);

}
abstract_1 func8 (abstract_1** v84, abstract_1** v85, abstract_2 v86, abstract_1** v87) {
abstract_1** v88;
abstract_1** v89;
abstract_1** v90;
abstract_1** v91;

return abstract_1();

}
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
class C3    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var9: DeletablePtrType{PtrType{AbstractType{1}}}
8    | | var10: AbstractType{2}
12   | +---
12   | var67: AbstractType{0}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
