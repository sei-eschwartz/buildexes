// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_1 { int x; };
struct abstract_12 { int x; };
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
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual abstract_0 func2 (abstract_1 v55, abstract_0** v56);
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
C2 (special_constructor);
abstract_1 v94;
abstract_1 v95;
abstract_1 v96;
};
struct C3 : public C1 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
/* method id 411 */ virtual void func0 ();
/* method id 412 */ virtual abstract_9* func1 (abstract_1 v111, abstract_0** v112, abstract_0** v113, abstract_0** v114);
C3 (special_constructor);
C1 v115;
abstract_0** v116;
};
abstract_8* func3 (abstract_0** v117);
abstract_0** func4 (C1 v120, abstract_0** v121);
abstract_11 func5 (C1 v122, abstract_1 v123, abstract_0** v124);
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
delete (new C3 ());
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
::func4(*(this), new abstract_0* ());
::func4(*(this), new abstract_0* ());
::func4(*(this), new abstract_0* ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_0 C2::func2 (abstract_1 v55, abstract_0** v56) {
abstract_1 v57 = abstract_1();
abstract_1 v58 = abstract_1();
abstract_0** v59 = new abstract_0* ();
abstract_1 v60 = abstract_1();
return (((C1*) 0))->C1::func0(abstract_1(), v10);

}
/* method id 407 */ C2::C2 () {
abstract_1 v61 = abstract_1();
abstract_1 v62 = abstract_1();
abstract_1 v63 = abstract_1();
abstract_1 v64 = abstract_1();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_1 v65 = abstract_1();
abstract_1 v66 = abstract_1();
abstract_1 v67 = abstract_1();
abstract_1 v68 = abstract_1();
::func3(v10);
::func3(v10);
::func3(v10);
::func3(v10);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
abstract_1 v97 = abstract_1();
abstract_1 v98 = abstract_1();
abstract_1 v99 = abstract_1();
abstract_0** v100 = new abstract_0* ();
::func5(v115, v8, new abstract_0* ());
::func5(v115, v8, new abstract_0* ());
::func5(v115, v8, new abstract_0* ());
::func5(v115, v8, new abstract_0* ());
return;

}
/* method id 410 */ C3::C3 () {
abstract_1 v101 = abstract_1();
abstract_0** v102 = new abstract_0* ();
abstract_1 v103 = abstract_1();
abstract_1 v104 = abstract_1();
v10 = v102;
return;

}
/* method id 411 */ void C3::func0 () {
abstract_0** v109 = new abstract_0* ();
abstract_1 v110 = abstract_1();
return;

}
/* method id 412 */ abstract_9* C3::func1 (abstract_1 v111, abstract_0** v112, abstract_0** v113, abstract_0** v114) {
(((C2*) 0))->C2::func2(v8, new abstract_0* ());
(((C2*) 0))->C2::func2(v8, new abstract_0* ());
return new abstract_9 ();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_8* func3 (abstract_0** v117) {
C1 v118;
abstract_1 v119;

return ((abstract_8*) 0);

}
abstract_0** func4 (C1 v120, abstract_0** v121) {

v120 = *(&(v120));
return new abstract_0* ();

}
abstract_11 func5 (C1 v122, abstract_1 v123, abstract_0** v124) {
abstract_1 v125;
abstract_12 v126;
abstract_12 v127;
abstract_0** v128;

delete (new C1 ());
return abstract_11();

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var8: AbstractType{1}
16   | var9: AbstractType{1}
20   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 8;
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
8    | var94: AbstractType{1}
12   | var95: AbstractType{1}
16   | var96: AbstractType{1}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var8: AbstractType{1}
28   | var9: AbstractType{1}
32   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
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
class C3    size(52)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var115: ClassType{1}
32   | var116: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   | var8: AbstractType{1}
44   | var9: AbstractType{1}
48   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
