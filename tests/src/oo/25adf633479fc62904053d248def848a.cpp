// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void* func0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual abstract_0 func1 (void* v4, void* v5);
/* method id 403 */ virtual void* func2 (void* v6, void* v7, void* v8);
C0 (special_constructor);
void* v11;
void* v12;
void* v13;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void* v22;
void* v23;
void* v24;
void* v25;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void* func2 (void* v100);
C2 (special_constructor);
void* v138;
void* v139;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ virtual void* func2 (void* v155);
/* method id 412 */ virtual abstract_0 func2 (void* v181, void* v182);
C3 (special_constructor);
void* v187;
void* v188;
void* v189;
void* v190;
};
void* func3 (void* v191, void* v192, void* v193, void* v194);
void* func4 (void* v196);
void* func5 (void* v201, void* v202, void* v203, void* v204);
void* func6 (void* v207, void* v208, void* v209);
// definitions
/* method id 400 */ void* C0::func0 () {
void* v0 = ((void*) 0);
::func4(((void*) 0));
::func4(((void*) 0));
::func4(((void*) 0));
return ((void*) 0);

}
/* method id 401 */ C0::C0 () {
void* v1 = ((void*) 0);
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
v13 = v11;
return;

}
/* method id 402 */ abstract_0 C0::func1 (void* v4, void* v5) {
return abstract_0();

}
/* method id 403 */ void* C0::func2 (void* v6, void* v7, void* v8) {
void* v9 = ((void*) 0);
void* v10 = ((void*) 0);
return v12;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
void* v14 = ((void*) 0);
void* v15 = ((void*) 0);
void* v16 = ((void*) 0);
void* v17 = ((void*) 0);
v13 = ((void*) 0);
v13 = ((void*) 0);
v13 = ((void*) 0);
v13 = ((void*) 0);
return;

}
/* method id 405 */ C1::C1 () {
void* v18 = ((void*) 0);
void* v19 = ((void*) 0);
void* v20 = ((void*) 0);
void* v21 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
void* v26 = ((void*) 0);
void* v27 = ((void*) 0);
void* v28 = ((void*) 0);
void* v29 = ((void*) 0);
v138 = v12;
v138 = v12;
return;

}
/* method id 407 */ C2::~C2 () {
void* v34 = ((void*) 0);
void* v35 = ((void*) 0);
return;

}
/* method id 408 */ void* C2::func2 (void* v100) {
delete (new C3 ());
v11 = v12;
return ((void*) 0);

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
void* v140 = ((void*) 0);
delete (new C1 ());
v25 = ((void*) 0);
v25 = ((void*) 0);
return;

}
/* method id 410 */ C3::~C3 () {
void* v141 = ((void*) 0);
void* v142 = ((void*) 0);
void* v143 = ((void*) 0);
return;

}
/* method id 411 */ void* C3::func2 (void* v155) {
v138 = v12;
return v25;

}
/* method id 412 */ abstract_0 C3::func2 (void* v181, void* v182) {
void* v183 = ((void*) 0);
void* v184 = ((void*) 0);
void* v185 = ((void*) 0);
void* v186 = ((void*) 0);
v12 = v12;
v12 = v12;
v12 = v12;
return ((new C0 ()))->C0::func1(v181, v181);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void* func3 (void* v191, void* v192, void* v193, void* v194) {
void* v195;

v193 = ((void*) 0);
return v192;

}
void* func4 (void* v196) {
void* v197;
void* v198;
void* v199;
void* v200;

delete (new C1 ());
return v200;

}
void* func5 (void* v201, void* v202, void* v203, void* v204) {
void* v205;
void* v206;

return ((void*) 0);

}
void* func6 (void* v207, void* v208, void* v209) {
void* v210;

::func4(((void*) 0));
::func4(((void*) 0));
::func4(((void*) 0));
return ((void*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var11: PtrType{VoidType{}}
8    | var12: PtrType{VoidType{}}
12   | var13: PtrType{VoidType{}}
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
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var22: PtrType{VoidType{}}
12   | var23: PtrType{VoidType{}}
16   | var24: PtrType{VoidType{}}
20   | var25: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var11: PtrType{VoidType{}}
32   | var12: PtrType{VoidType{}}
36   | var13: PtrType{VoidType{}}
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
class C2    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var138: PtrType{VoidType{}}
12   | var139: PtrType{VoidType{}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var11: PtrType{VoidType{}}
24   | var12: PtrType{VoidType{}}
28   | var13: PtrType{VoidType{}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var22: PtrType{VoidType{}}
44   | var23: PtrType{VoidType{}}
48   | var24: PtrType{VoidType{}}
52   | var25: PtrType{VoidType{}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
class C3    size(84)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var187: PtrType{VoidType{}}
12   | var188: PtrType{VoidType{}}
16   | var189: PtrType{VoidType{}}
20   | var190: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var11: PtrType{VoidType{}}
32   | var12: PtrType{VoidType{}}
36   | var13: PtrType{VoidType{}}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var22: PtrType{VoidType{}}
52   | var23: PtrType{VoidType{}}
56   | var24: PtrType{VoidType{}}
60   | var25: PtrType{VoidType{}}
64   +---
64   | {vtordisp for vbase 2}
68   +--- (virtual base class C2)
68   | {vfptr}
72   | {vbptr}
76   | var138: PtrType{VoidType{}}
80   | var139: PtrType{VoidType{}}
84   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 84;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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
