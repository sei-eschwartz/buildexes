// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ abstract_1 func1 (abstract_1** v6);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ C1 ();
/* method id 406 */ virtual abstract_1 func1 (abstract_2 v11);
/* method id 407 */ virtual ~C1 ();
/* method id 408 */ abstract_1 func0 ();
C1 (special_constructor);
abstract_1** v20;
abstract_0 v21;
abstract_1** v22;
abstract_1** v23;
};
struct C2 : public virtual C1 {
/* method id 409 */ virtual abstract_3 func2 (abstract_1** v24, abstract_2 v25, abstract_0 v26);
/* method id 410 */ virtual abstract_3 func2 ();
/* method id 411 */ virtual ~C2 ();
/* method id 412 */ C2 ();
C2 (special_constructor);
abstract_1** v40;
};
struct C3 : public virtual C2 {
/* method id 413 */ C3 ();
/* method id 414 */ virtual ~C3 ();
/* method id 415 */ virtual abstract_3 func0 (abstract_0 v61, abstract_0 v62);
/* method id 416 */ virtual abstract_3 func0 (C1 v63, abstract_4 v64);
C3 (special_constructor);
abstract_1** v68;
abstract_5 v69;
C1 v70;
abstract_0 v71;
};
abstract_3 func3 (abstract_1** v72, abstract_1** v73, abstract_1** v74, abstract_0 v75);
abstract_1 func4 (abstract_1** v80, C2 v81, abstract_5 v82, abstract_1** v83);
abstract_3 func5 (abstract_1** v88, abstract_1** v89, abstract_5 v90, abstract_1** v91);
abstract_3 func6 (abstract_0 v96);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return (((C1*) 0))->C1::func1(abstract_2());

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6) {
abstract_0 v7 = abstract_0();
abstract_1** v8 = new abstract_1* ();
abstract_1** v9 = new abstract_1* ();
abstract_1** v10 = new abstract_1* ();
return (((C1*) 0))->C1::func0();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::C1 () {
return;

}
/* method id 406 */ abstract_1 C1::func1 (abstract_2 v11) {
return abstract_1();

}
/* method id 407 */ C1::~C1 () {
abstract_2 v12 = abstract_2();
return;

}
/* method id 408 */ abstract_1 C1::func0 () {
abstract_2 v17 = abstract_2();
abstract_1** v18 = new abstract_1* ();
abstract_0 v19 = abstract_0();
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 409 */ abstract_3 C2::func2 (abstract_1** v24, abstract_2 v25, abstract_0 v26) {
abstract_1** v27 = new abstract_1* ();
abstract_0 v28 = abstract_0();
abstract_1** v29 = new abstract_1* ();
abstract_4 v30 = abstract_4();
return abstract_3();

}
/* method id 410 */ abstract_3 C2::func2 () {
abstract_1** v31 = new abstract_1* ();
abstract_0 v32 = abstract_0();
abstract_0 v33 = abstract_0();
abstract_4 v34 = abstract_4();
v22 = v40;
v22 = v40;
v22 = v40;
v22 = v40;
return ::func5(v22, v22, abstract_5(), v22);

}
/* method id 411 */ C2::~C2 () {
abstract_4 v35 = abstract_4();
abstract_1** v36 = new abstract_1* ();
abstract_0 v37 = abstract_0();
return;

}
/* method id 412 */ C2::C2 () {
C1 v38 = *((new C1 ()));
abstract_0 v39 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 413 */ C3::C3 () {
abstract_1** v41 = new abstract_1* ();
abstract_1** v42 = new abstract_1* ();
abstract_1** v43 = new abstract_1* ();
abstract_1** v44 = new abstract_1* ();
delete (new C1 ());
return;

}
/* method id 414 */ C3::~C3 () {
abstract_1** v49 = new abstract_1* ();
abstract_1** v50 = new abstract_1* ();
abstract_1** v51 = new abstract_1* ();
abstract_1** v52 = new abstract_1* ();
return;

}
/* method id 415 */ abstract_3 C3::func0 (abstract_0 v61, abstract_0 v62) {
return abstract_3();

}
/* method id 416 */ abstract_3 C3::func0 (C1 v63, abstract_4 v64) {
C1 v65 = *(&(*((new C1 ()))));
abstract_1** v66 = new abstract_1* ();
C2 v67 = *(&(*((new C2 ()))));
delete (new C2 ());
return ::func5(v22, v22, v69, v22);

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_3 func3 (abstract_1** v72, abstract_1** v73, abstract_1** v74, abstract_0 v75) {
abstract_1** v76;
abstract_1** v77;
abstract_1** v78;
abstract_2 v79;

return ::func6(abstract_0());

}
abstract_1 func4 (abstract_1** v80, C2 v81, abstract_5 v82, abstract_1** v83) {
abstract_5 v84;
abstract_1** v85;
abstract_1** v86;
abstract_0 v87;

return ((new C1 ()))->C1::func0();

}
abstract_3 func5 (abstract_1** v88, abstract_1** v89, abstract_5 v90, abstract_1** v91) {
abstract_5 v92;
abstract_1** v93;
abstract_1** v94;
C2 v95;

return ::func6(abstract_0());

}
abstract_3 func6 (abstract_0 v96) {
abstract_1** v97;
abstract_1** v98;
abstract_0 v99;

delete (new C3 ());
return ::func5(v98, v98, abstract_5(), v98);

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var20: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var21: AbstractType{0}
16   | var22: DeletablePtrType{PtrType{AbstractType{1}}}
20   | var23: DeletablePtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
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
0    | {vfptr}
4    | {vbptr}
8    | var40: DeletablePtrType{PtrType{AbstractType{1}}}
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var20: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var21: AbstractType{0}
28   | var22: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var23: DeletablePtrType{PtrType{AbstractType{1}}}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(80)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var68: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var69: AbstractType{5}
16   | var70: ClassType{1}
40   | var71: AbstractType{0}
44   +---
44   +--- (virtual base class C0)
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var20: DeletablePtrType{PtrType{AbstractType{1}}}
56   | var21: AbstractType{0}
60   | var22: DeletablePtrType{PtrType{AbstractType{1}}}
64   | var23: DeletablePtrType{PtrType{AbstractType{1}}}
68   +---
68   +--- (virtual base class C2)
68   | {vfptr}
72   | {vbptr}
76   | var40: DeletablePtrType{PtrType{AbstractType{1}}}
80   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 80;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 68;
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
