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
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual abstract_1 func1 (abstract_0** v0);
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1** v4;
abstract_0** v5;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ virtual void func3 (abstract_1** v8, abstract_1** v9, abstract_0** v10, abstract_0** v11);
/* method id 405 */ virtual abstract_2 func4 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_1** v29;
abstract_1** v30;
abstract_1** v31;
abstract_1** v32;
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual abstract_1* func0 (abstract_1** v100);
/* method id 410 */ virtual abstract_1* func0 (abstract_1** v122, abstract_1** v123, abstract_0** v124, abstract_1** v125);
C2 (special_constructor);
abstract_1** v130;
abstract_1** v131;
abstract_1** v132;
abstract_1** v133;
};
struct C3 : public virtual C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
abstract_1** v167;
};
abstract_1 func5 ();
abstract_1* func6 (abstract_1** v171, abstract_1** v172);
abstract_1 func7 (abstract_1** v176, abstract_1** v177, abstract_1** v178, abstract_1** v179);
abstract_1 func8 (abstract_1** v181);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ abstract_1 C0::func1 (abstract_0** v0) {
abstract_0** v1 = new abstract_0* ();
abstract_1** v2 = ((abstract_1**) 0);
abstract_0** v3 = new abstract_0* ();
((C1*)((new C2 ())))->C1::func4();
((C1*)((new C2 ())))->C1::func4();
delete (new C1 ());
return abstract_1();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::~C1 () {
abstract_0** v6 = new abstract_0* ();
return;

}
/* method id 404 */ void C1::func3 (abstract_1** v8, abstract_1** v9, abstract_0** v10, abstract_0** v11) {
abstract_0** v12 = new abstract_0* ();
abstract_1** v13 = ((abstract_1**) 0);
abstract_1** v14 = ((abstract_1**) 0);
return;

}
/* method id 405 */ abstract_2 C1::func4 () {
abstract_0** v15 = new abstract_0* ();
abstract_1** v16 = ((abstract_1**) 0);
abstract_1** v17 = ((abstract_1**) 0);
abstract_1** v18 = ((abstract_1**) 0);
return abstract_2();

}
/* method id 406 */ C1::C1 () {
abstract_0** v26 = new abstract_0* ();
abstract_1** v27 = ((abstract_1**) 0);
abstract_1** v28 = ((abstract_1**) 0);
::func8(v32);
::func8(v32);
::func8(v32);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_1** v33 = new abstract_1* ();
abstract_0** v34 = new abstract_0* ();
abstract_1** v35 = new abstract_1* ();
abstract_1** v36 = new abstract_1* ();
delete (new C1 ());
v130 = new abstract_1* ();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_1** v41 = new abstract_1* ();
abstract_1** v42 = new abstract_1* ();
abstract_1** v43 = new abstract_1* ();
abstract_1** v44 = new abstract_1* ();
return;

}
/* method id 409 */ abstract_1* C2::func0 (abstract_1** v100) {
abstract_1** v101 = ((abstract_1**) 0);
return ((abstract_1*) 0);

}
/* method id 410 */ abstract_1* C2::func0 (abstract_1** v122, abstract_1** v123, abstract_0** v124, abstract_1** v125) {
abstract_1** v126 = ((abstract_1**) 0);
abstract_1** v127 = ((abstract_1**) 0);
abstract_0** v128 = new abstract_0* ();
abstract_0** v129 = new abstract_0* ();
return ((abstract_1*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
abstract_1** v134 = ((abstract_1**) 0);
return;

}
/* method id 412 */ C3::~C3 () {
abstract_1** v151 = ((abstract_1**) 0);
abstract_1** v152 = ((abstract_1**) 0);
abstract_1** v153 = ((abstract_1**) 0);
abstract_1** v154 = ((abstract_1**) 0);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func5 () {
abstract_1** v168;
abstract_1** v169;
abstract_1** v170;

return abstract_1();

}
abstract_1* func6 (abstract_1** v171, abstract_1** v172) {
abstract_1** v173;
abstract_1** v174;
abstract_1** v175;

return ((abstract_1*) 0);

}
abstract_1 func7 (abstract_1** v176, abstract_1** v177, abstract_1** v178, abstract_1** v179) {
abstract_1** v180;

return ::func8(v177);

}
abstract_1 func8 (abstract_1** v181) {
abstract_1** v182;
abstract_1** v183;
abstract_1** v184;
abstract_1** v185;

return abstract_1();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var4: PtrType{PtrType{AbstractType{1}}}
8    | var5: DeletablePtrType{PtrType{AbstractType{0}}}
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
8    | var29: PtrType{PtrType{AbstractType{1}}}
12   | var30: PtrType{PtrType{AbstractType{1}}}
16   | var31: PtrType{PtrType{AbstractType{1}}}
20   | var32: PtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var4: PtrType{PtrType{AbstractType{1}}}
32   | var5: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C2    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var130: PtrType{PtrType{AbstractType{1}}}
12   | var131: PtrType{PtrType{AbstractType{1}}}
16   | var132: PtrType{PtrType{AbstractType{1}}}
20   | var133: PtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var4: PtrType{PtrType{AbstractType{1}}}
32   | var5: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var29: PtrType{PtrType{AbstractType{1}}}
48   | var30: PtrType{PtrType{AbstractType{1}}}
52   | var31: PtrType{PtrType{AbstractType{1}}}
56   | var32: PtrType{PtrType{AbstractType{1}}}
60   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 60;
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
class C3    size(68)
0    +---
0    | {vbptr}
4    | var167: PtrType{PtrType{AbstractType{1}}}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var4: PtrType{PtrType{AbstractType{1}}}
16   | var5: DeletablePtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var29: PtrType{PtrType{AbstractType{1}}}
32   | var30: PtrType{PtrType{AbstractType{1}}}
36   | var31: PtrType{PtrType{AbstractType{1}}}
40   | var32: PtrType{PtrType{AbstractType{1}}}
44   +---
44   +--- (virtual base class C2)
44   | {vfptr}
48   | {vbptr}
52   | var130: PtrType{PtrType{AbstractType{1}}}
56   | var131: PtrType{PtrType{AbstractType{1}}}
60   | var132: PtrType{PtrType{AbstractType{1}}}
64   | var133: PtrType{PtrType{AbstractType{1}}}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
