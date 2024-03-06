// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ virtual void func1 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_0 v4;
abstract_0 v5;
abstract_0 v6;
abstract_0 v7;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void func1 ();
C1 (special_constructor);
C0 v39;
C0 v40;
C0 v41;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ virtual void func3 ();
C2 (special_constructor);
abstract_0 v82;
void* v83;
C0 v84;
abstract_0 v85;
};
struct C3 : public C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C0 v86;
};
void func6 (void* v87, C0 v88, C0 v89);
void func7 (void* v90, C0 v91, void* v92);
void func8 (void* v94, C0 v95, void* v96);
void func9 (void* v99, abstract_0 v100, abstract_0 v101, C0 v102);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ void C0::func1 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
abstract_0 v2 = abstract_0();
abstract_0 v3 = abstract_0();
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
C0 v10 = *(&(*(((C0*) 0))));
C0 v11 = *(&(*(((C0*) 0))));
delete (new C1 ());
return;

}
/* method id 404 */ C1::~C1 () {
C0 v25 = *(((C0*) 0));
C0 v26 = *(((C0*) 0));
C0 v27 = *(((C0*) 0));
C0 v28 = *(((C0*) 0));
return;

}
/* method id 405 */ void C1::func1 () {
C0 v38 = *(((C0*) 0));
delete (new C3 ());
return ::func7(((void*) 0), v38, ((void*) 0));

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
C0 v42 = *(((C0*) 0));
C0 v43 = *(((C0*) 0));
C0 v44 = *(((C0*) 0));
C0 v45 = *(((C0*) 0));
return;

}
/* method id 407 */ C2::~C2 () {
C0 v53 = *(&(*((new C0 ()))));
C0 v54 = *(&(*((new C0 ()))));
C0 v55 = *(&(*((new C0 ()))));
delete (new C2 ());
return;

}
/* method id 408 */ void C2::func3 () {
C0 v78 = *(&(*((new C0 ()))));
void* v79 = ((void*) 0);
C0 v80 = *(&(*((new C0 ()))));
abstract_1 v81 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func6 (void* v87, C0 v88, C0 v89) {

return ::func8(((void*) 0), v89, ((void*) 0));

}
void func7 (void* v90, C0 v91, void* v92) {
C0 v93;

return (&(*(((C1*) 0))))->C1::func1();

}
void func8 (void* v94, C0 v95, void* v96) {
abstract_0 v97;
void* v98;

return ::func7(v96, v95, v96);

}
void func9 (void* v99, abstract_0 v100, abstract_0 v101, C0 v102) {

return ::func7(v99, v102, v99);

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var4: AbstractType{0}
8    | var5: AbstractType{0}
12   | var6: AbstractType{0}
16   | var7: AbstractType{0}
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
class C1    size(88)
0    +---
0    | {vbptr}
4    | var39: ClassType{0}
24   | var40: ClassType{0}
44   | var41: ClassType{0}
64   | {vtordisp for vbase 0}
68   +---
68   +--- (virtual base class C0)
68   | {vfptr}
72   | var4: AbstractType{0}
76   | var5: AbstractType{0}
80   | var6: AbstractType{0}
84   | var7: AbstractType{0}
88   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 68;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(128)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var82: AbstractType{0}
12   | var83: PtrType{VoidType{}}
16   | var84: ClassType{0}
36   | var85: AbstractType{0}
40   | {vtordisp for vbase 0}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
48   | var4: AbstractType{0}
52   | var5: AbstractType{0}
56   | var6: AbstractType{0}
60   | var7: AbstractType{0}
64   +---
64   +--- (virtual base class C1)
64   | {vbptr}
68   | var39: ClassType{0}
88   | var40: ClassType{0}
108  | var41: ClassType{0}
128  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 128;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 64;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(148)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var82: AbstractType{0}
12   | | var83: PtrType{VoidType{}}
16   | | var84: ClassType{0}
36   | | var85: AbstractType{0}
40   | +---
40   | var86: ClassType{0}
60   | {vtordisp for vbase 0}
64   +---
64   +--- (virtual base class C0)
64   | {vfptr}
68   | var4: AbstractType{0}
72   | var5: AbstractType{0}
76   | var6: AbstractType{0}
80   | var7: AbstractType{0}
84   +---
84   +--- (virtual base class C1)
84   | {vbptr}
88   | var39: ClassType{0}
108  | var40: ClassType{0}
128  | var41: ClassType{0}
148  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 148;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
