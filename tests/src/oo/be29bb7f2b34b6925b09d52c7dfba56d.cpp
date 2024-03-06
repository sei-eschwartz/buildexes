// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void*** v0;
void*** v1;
void*** v2;
void*** v3;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
void*** v28;
void*** v29;
void*** v30;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
void*** v41;
void*** v42;
void*** v43;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
C3 (special_constructor);
void*** v51;
void*** v52;
C2 v53;
};
abstract_0*** func1 (C2 v54, abstract_0*** v55, C2 v56);
abstract_0* func2 (void*** v58);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void*** v4 = ((void***) 0);
void*** v5 = ((void***) 0);
void*** v6 = ((void***) 0);
void*** v7 = ((void***) 0);
v2 = v2;
::func2(v2);
::func2(v2);
::func2(v2);
return;

}
/* method id 402 */ C1::~C1 () {
void*** v16 = ((void***) 0);
void*** v17 = ((void***) 0);
void*** v18 = ((void***) 0);
void*** v19 = ((void***) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void*** v31 = ((void***) 0);
void*** v32 = ((void***) 0);
void*** v33 = ((void***) 0);
void*** v34 = ((void***) 0);
return;

}
/* method id 404 */ C2::~C2 () {
void*** v35 = ((void***) 0);
void*** v36 = ((void***) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
void*** v44 = ((void***) 0);
void*** v45 = ((void***) 0);
void*** v46 = ((void***) 0);
void*** v47 = ((void***) 0);
return;

}
/* method id 406 */ C3::~C3 () {
void*** v48 = ((void***) 0);
void*** v49 = ((void***) 0);
void*** v50 = ((void***) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0*** func1 (C2 v54, abstract_0*** v55, C2 v56) {
abstract_0*** v57;

return new abstract_0** ();

}
abstract_0* func2 (void*** v58) {

return ((abstract_0*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: PtrType{PtrType{PtrType{VoidType{}}}}
4    | var1: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var2: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var28: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
28   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
32   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
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
class C2    size(52)
0    +---
0    | {vbptr}
4    | var41: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var42: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var43: PtrType{PtrType{PtrType{VoidType{}}}}
16   +---
16   +--- (virtual base class C0)
16   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
20   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
28   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var28: PtrType{PtrType{PtrType{VoidType{}}}}
44   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
48   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(116)
0    +---
0    | {vbptr}
4    | var51: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var52: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var53: ClassType{2}
64   +---
64   +--- (virtual base class C0)
64   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
68   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
72   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
76   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
80   +---
80   +--- (virtual base class C1)
80   | {vfptr}
84   | {vbptr}
88   | var28: PtrType{PtrType{PtrType{VoidType{}}}}
92   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
96   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
100  +---
100  +--- (virtual base class C2)
100  | {vbptr}
104  | var41: PtrType{PtrType{PtrType{VoidType{}}}}
108  | var42: PtrType{PtrType{PtrType{VoidType{}}}}
112  | var43: PtrType{PtrType{PtrType{VoidType{}}}}
116  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 116;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 80;
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
 const size_t model_offset = 100;
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
