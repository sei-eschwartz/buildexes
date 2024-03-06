// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C0 {
/* method id 402 */ virtual C0 func0 ();
/* method id 403 */ virtual C0 func1 ();
/* method id 404 */ virtual C0 func1 (C0* v7, abstract_0 v8, C0* v9);
/* method id 405 */ virtual C0 func0 (abstract_0 v10, C0* v11, C0* v12, C0* v13);
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual C0 func1 (C0* v69, C0* v70, C0* v71, C0* v72);
C3 (special_constructor);
C0* v74;
C0* v75;
C0* v76;
};
C0 func3 (C0* v77);
C0 func4 (abstract_0 v79, abstract_0 v80, C0* v81, C0* v82);
C0 func5 (abstract_0 v87, C0* v88, C0* v89);
C0 func6 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
v2 = ((C0*) 0);
v2 = ((C0*) 0);
v2 = ((C0*) 0);
return;

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C0 C2::func0 () {
C0* v3 = &(*(&(*(((C0*) 0)))));
C0* v4 = &(*(&(*(((C0*) 0)))));
v3 = v3;
v3 = v3;
v3 = v3;
return ::func3(v4);

}
/* method id 403 */ C0 C2::func1 () {
return ::func3(&(::func6()));

}
/* method id 404 */ C0 C2::func1 (C0* v7, abstract_0 v8, C0* v9) {
delete (new C1 ());
delete (new C3 ());
return ::func5(v8, v7, v7);

}
/* method id 405 */ C0 C2::func0 (abstract_0 v10, C0* v11, C0* v12, C0* v13) {
C0* v14 = ((C0*) 0);
C0* v15 = ((C0*) 0);
C0* v16 = ((C0*) 0);
abstract_0 v17 = abstract_0();
return ::func4(abstract_0(), abstract_0(), v12, v12);

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
C0* v18 = &((((C2*) 0))->C2::func1());
C0* v19 = &((((C2*) 0))->C2::func1());
C0* v20 = &((((C2*) 0))->C2::func1());
C0* v21 = &((((C2*) 0))->C2::func1());
delete (new C1 ());
return;

}
/* method id 408 */ C3::~C3 () {
C0* v30 = ((C0*) 0);
C0* v31 = ((C0*) 0);
C0* v32 = ((C0*) 0);
C0* v33 = ((C0*) 0);
delete (new C1 ());
return;

}
/* method id 409 */ C0 C3::func1 (C0* v69, C0* v70, C0* v71, C0* v72) {
C0* v73 = (new C0 ());
return *(v69);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0 func3 (C0* v77) {
C0* v78;

return ::func5(abstract_0(), v77, v77);

}
C0 func4 (abstract_0 v79, abstract_0 v80, C0* v81, C0* v82) {
C0* v83;
abstract_1 v84;
C0* v85;
abstract_0 v86;

v85 = &(*(v82));
return ::func3(&(*(v82)));

}
C0 func5 (abstract_0 v87, C0* v88, C0* v89) {

::func6();
return ::func3(((C0*) 0));

}
C0 func6 () {

delete (new C3 ());
return ::func5(abstract_0(), ((C0*) 0), ((C0*) 0));

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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(4)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var74: PtrType{ClassType{0}}
12   | var75: PtrType{ClassType{0}}
16   | var76: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C1)
20   +---
20   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 2, which leads with zero sized base.
24   +--- (virtual base class C2)
24   | {vfptr}
28   | +--- (base class C0)
28   | +---
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 24;
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
