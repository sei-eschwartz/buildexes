// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
/* method id 403 */ virtual abstract_0** func1 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ virtual abstract_0 func0 (abstract_0* v2, abstract_0* v3, abstract_0* v4, abstract_0* v5);
/* method id 406 */ abstract_0** func1 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 408 */ virtual abstract_0** func0 (abstract_0* v11, abstract_0* v12, abstract_0* v13);
/* method id 409 */ virtual abstract_0* func0 (abstract_0* v14);
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
C2 v23;
C2 v24;
C2 v25;
};
abstract_0* func3 (abstract_0* v26, C2 v27, C2 v28, C2 v29);
abstract_0* func4 (C2 v34, abstract_0* v35, C2 v36, C2 v37);
abstract_0 func5 (C2 v39, C2 v40);
abstract_0 func6 (C2 v44, C2 v45, abstract_0* v46);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
return;

}
/* method id 403 */ abstract_0** C1::func1 () {
v0 = ((abstract_0*) 0);
v0 = ((abstract_0*) 0);
v0 = ((abstract_0*) 0);
v0 = ((abstract_0*) 0);
return ((abstract_0**) 0);

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
abstract_0* v1 = new abstract_0 ();
return;

}
/* method id 405 */ abstract_0 C2::func0 (abstract_0* v2, abstract_0* v3, abstract_0* v4, abstract_0* v5) {
abstract_0* v6 = ((abstract_0*) 0);
abstract_0* v7 = ((abstract_0*) 0);
abstract_0* v8 = ((abstract_0*) 0);
return abstract_0();

}
/* method id 406 */ abstract_0** C2::func1 () {
abstract_0* v9 = ((abstract_0*) 0);
abstract_0* v10 = ((abstract_0*) 0);
return ((abstract_0**) 0);

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ abstract_0** C3::func0 (abstract_0* v11, abstract_0* v12, abstract_0* v13) {
return new abstract_0* ();

}
/* method id 409 */ abstract_0* C3::func0 (abstract_0* v14) {
abstract_0* v15 = new abstract_0 ();
abstract_0* v16 = new abstract_0 ();
C2 v17 = *((new C2 ()));
C2 v18 = *((new C2 ()));
return v14;

}
/* method id 410 */ C3::~C3 () {
C2 v19 = *(((C2*) 0));
C2 v20 = *(((C2*) 0));
C2 v21 = *(((C2*) 0));
C2 v22 = *(((C2*) 0));
return;

}
/* method id 411 */ C3::C3 () {
return;

}
C3::C3 (special_constructor)  {}

abstract_0* func3 (abstract_0* v26, C2 v27, C2 v28, C2 v29) {
C2 v30;
C2 v31;
C2 v32;
C2 v33;

v27 = *(((C2*) 0));
v27 = *(((C2*) 0));
v27 = *(((C2*) 0));
v27 = *(((C2*) 0));
return ::func4(v31, ((abstract_0*) 0), v31, v31);

}
abstract_0* func4 (C2 v34, abstract_0* v35, C2 v36, C2 v37) {
C2 v38;

delete (new C3 ());
return ((abstract_0*) 0);

}
abstract_0 func5 (C2 v39, C2 v40) {
C2 v41;
C2 v42;
C2 v43;

return abstract_0();

}
abstract_0 func6 (C2 v44, C2 v45, abstract_0* v46) {

return ::func5(*(((C2*) 0)), *(((C2*) 0)));

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(8)
0    +---
0    | {vfptr}
4    | var0: PtrType{AbstractType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   | {vtordisp for vbase 1}
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var0: PtrType{AbstractType{0}}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(76)
0    +---
0    | {vfptr}
4    | var23: ClassType{2}
28   | var24: ClassType{2}
52   | var25: ClassType{2}
76   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 76;
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
