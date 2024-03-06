// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ virtual abstract_0 func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3);
C0 (special_constructor);
abstract_1 v8;
abstract_1 v9;
abstract_0** v10;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_1 v11, abstract_0** v12);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
abstract_1 v29;
abstract_0** v30;
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v47;
abstract_2 v48;
abstract_0** v49;
abstract_3* v50;
};
struct C3  {
/* method id 408 */ C3 ();
/* method id 409 */ ~C3 ();
C3 (special_constructor);
abstract_0** v53;
abstract_1 v54;
abstract_0** v55;
};
abstract_0 func3 (abstract_0** v56);
abstract_3 func4 (abstract_1 v58);
abstract_4 func5 (abstract_5 v60, abstract_3* v61, abstract_1 v62);
abstract_4 func6 (abstract_3* v63);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
/* method id 401 */ C0::~C0 () {
return;

}
/* method id 402 */ abstract_0 C0::func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3) {
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
abstract_0** v7 = new abstract_0* ();
return abstract_0();

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_1 v11, abstract_0** v12) {
abstract_1 v13 = abstract_1();
abstract_1 v14 = abstract_1();
abstract_0** v15 = new abstract_0* ();
abstract_1 v16 = abstract_1();
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
::func4(v22);
::func4(v22);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::~C2 () {
abstract_1 v31 = abstract_1();
abstract_1 v32 = abstract_1();
abstract_1 v33 = abstract_1();
abstract_1 v34 = abstract_1();
return;

}
/* method id 407 */ C2::C2 () {
abstract_1 v35 = abstract_1();
abstract_0** v36 = new abstract_0* ();
abstract_1 v37 = abstract_1();
abstract_1 v38 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
return;

}
/* method id 409 */ C3::~C3 () {
return;

}
C3::C3 (special_constructor)  {}

abstract_0 func3 (abstract_0** v56) {
abstract_0** v57;

return abstract_0();

}
abstract_3 func4 (abstract_1 v58) {
abstract_4* v59;

return abstract_3();

}
abstract_4 func5 (abstract_5 v60, abstract_3* v61, abstract_1 v62) {

delete (new C3 ());
return ::func6(((abstract_3*) 0));

}
abstract_4 func6 (abstract_3* v63) {

delete (new C1 ());
return ::func5(abstract_5(), v63, abstract_1());

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var8: AbstractType{1}
8    | var9: AbstractType{1}
12   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: AbstractType{1}
12   | var30: DeletablePtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var8: AbstractType{1}
24   | var9: AbstractType{1}
28   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(64)
0    +---
0    | {vbptr}
4    | var47: ClassType{0}
20   | var48: AbstractType{2}
24   | var49: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var50: PtrType{AbstractType{3}}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var8: AbstractType{1}
40   | var9: AbstractType{1}
44   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
48   +---
48   +--- (virtual base class C1)
48   | {vfptr}
52   | {vbptr}
56   | var29: AbstractType{1}
60   | var30: DeletablePtrType{PtrType{AbstractType{0}}}
64   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(12)
0    +---
0    | var53: DeletablePtrType{PtrType{AbstractType{0}}}
4    | var54: AbstractType{1}
8    | var55: DeletablePtrType{PtrType{AbstractType{0}}}
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
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
