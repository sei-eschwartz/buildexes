// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void func0 (void* v0);
/* method id 401 */ virtual void func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
void* v7;
void* v8;
void* v9;
void* v10;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
void* v60;
void* v61;
void* v62;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
void* v100;
void* v101;
void* v102;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual void func1 (void* v127, void* v128);
/* method id 410 */ virtual void func0 (void* v130, abstract_0 v131, void* v132);
C3 (special_constructor);
void** v136;
abstract_0 v137;
void* v138;
abstract_0 v139;
};
void func2 ();
void func3 (abstract_0 v142, abstract_0 v143);
void func4 (abstract_0 v146);
void func5 (abstract_0 v150, abstract_0 v151, void** v152, void** v153);
// definitions
/* method id 400 */ void C0::func0 (void* v0) {
void* v1 = ((void*) 0);
return;

}
/* method id 401 */ void C0::func0 () {
void* v2 = ((void*) 0);
return ::func3(abstract_0(), abstract_0());

}
/* method id 402 */ C0::C0 () {
delete (new C2 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
void* v11 = ((void*) 0);
void* v12 = ((void*) 0);
void* v13 = ((void*) 0);
void* v14 = ((void*) 0);
return;

}
/* method id 404 */ C1::~C1 () {
void* v15 = ((void*) 0);
void* v16 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
void* v63 = ((void*) 0);
void* v64 = ((void*) 0);
void* v65 = ((void*) 0);
void* v66 = ((void*) 0);
return;

}
/* method id 406 */ C2::~C2 () {
void* v78 = ((void*) 0);
void* v79 = ((void*) 0);
void* v80 = ((void*) 0);
void* v81 = ((void*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
void* v103 = ((void*) 0);
void* v104 = ((void*) 0);
void* v105 = ((void*) 0);
void* v106 = ((void*) 0);
return;

}
/* method id 408 */ C3::~C3 () {
void* v120 = ((void*) 0);
void* v121 = ((void*) 0);
void* v122 = ((void*) 0);
return;

}
/* method id 409 */ void C3::func1 (void* v127, void* v128) {
abstract_0 v129 = abstract_0();
return;

}
/* method id 410 */ void C3::func0 (void* v130, abstract_0 v131, void* v132) {
void* v133 = ((void*) 0);
abstract_0 v134 = abstract_0();
abstract_0 v135 = abstract_0();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func2 () {
void** v140;
abstract_0 v141;

return ::func4(v141);

}
void func3 (abstract_0 v142, abstract_0 v143) {
abstract_0 v144;
abstract_0 v145;

return ::func4(v142);

}
void func4 (abstract_0 v146) {
abstract_0 v147;
abstract_0 v148;
abstract_0 v149;

return;

}
void func5 (abstract_0 v150, abstract_0 v151, void** v152, void** v153) {
abstract_0 v154;
abstract_0 v155;
abstract_0 v156;
abstract_0 v157;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var7: PtrType{VoidType{}}
8    | var8: PtrType{VoidType{}}
12   | var9: PtrType{VoidType{}}
16   | var10: PtrType{VoidType{}}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var60: PtrType{VoidType{}}
12   | var61: PtrType{VoidType{}}
16   | var62: PtrType{VoidType{}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var7: PtrType{VoidType{}}
28   | var8: PtrType{VoidType{}}
32   | var9: PtrType{VoidType{}}
36   | var10: PtrType{VoidType{}}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(56)
0    +---
0    | {vbptr}
4    | var100: PtrType{VoidType{}}
8    | var101: PtrType{VoidType{}}
12   | var102: PtrType{VoidType{}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var7: PtrType{VoidType{}}
24   | var8: PtrType{VoidType{}}
28   | var9: PtrType{VoidType{}}
32   | var10: PtrType{VoidType{}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var60: PtrType{VoidType{}}
48   | var61: PtrType{VoidType{}}
52   | var62: PtrType{VoidType{}}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
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
class C3    size(80)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var136: DeletablePtrType{PtrType{VoidType{}}}
12   | var137: AbstractType{0}
16   | var138: PtrType{VoidType{}}
20   | var139: AbstractType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var7: PtrType{VoidType{}}
32   | var8: PtrType{VoidType{}}
36   | var9: PtrType{VoidType{}}
40   | var10: PtrType{VoidType{}}
44   +---
44   +--- (virtual base class C1)
44   | {vfptr}
48   | {vbptr}
52   | var60: PtrType{VoidType{}}
56   | var61: PtrType{VoidType{}}
60   | var62: PtrType{VoidType{}}
64   +---
64   +--- (virtual base class C2)
64   | {vbptr}
68   | var100: PtrType{VoidType{}}
72   | var101: PtrType{VoidType{}}
76   | var102: PtrType{VoidType{}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
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
 const size_t model_offset = 64;
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
