// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0** v3;
};
struct C1 : public virtual C0 {
/* method id 404 */ abstract_0* func0 (abstract_0** v4, abstract_0** v5);
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual abstract_1 func0 ();
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual abstract_0* func0 (abstract_0** v21);
C2 (special_constructor);
abstract_0** v25;
};
struct C3 : public C2 {
/* method id 410 */ C3 ();
/* method id 411 */ ~C3 ();
C3 (special_constructor);
abstract_0** v30;
abstract_0** v31;
abstract_0** v32;
abstract_0** v33;
};
abstract_0* func3 ();
abstract_4 func4 (abstract_0** v34, abstract_0** v35, abstract_0** v36, abstract_0** v37);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
v0 = new abstract_0* ();
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
delete (new C2 ());
return ((abstract_0*) 0);

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0* C1::func0 (abstract_0** v4, abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
return new abstract_0 ();

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_1 C2::func0 () {
abstract_0** v7 = ((abstract_0**) 0);
abstract_0** v8 = ((abstract_0**) 0);
abstract_0** v9 = ((abstract_0**) 0);
return abstract_1();

}
/* method id 407 */ C2::~C2 () {
abstract_0** v10 = new abstract_0* ();
abstract_0** v11 = new abstract_0* ();
abstract_0** v12 = new abstract_0* ();
abstract_0** v13 = new abstract_0* ();
delete (new C1 ());
return;

}
/* method id 408 */ C2::C2 () {
abstract_0** v14 = ((abstract_0**) 0);
abstract_0** v15 = ((abstract_0**) 0);
abstract_0** v16 = ((abstract_0**) 0);
delete (new C0 ());
return;

}
/* method id 409 */ abstract_0* C2::func0 (abstract_0** v21) {
abstract_0** v22 = new abstract_0* ();
abstract_0** v23 = new abstract_0* ();
abstract_0** v24 = ((abstract_0**) 0);
v25 = v3;
return new abstract_0 ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_0** v26 = new abstract_0* ();
abstract_0** v27 = new abstract_0* ();
abstract_0** v28 = new abstract_0* ();
abstract_0** v29 = new abstract_0* ();
return;

}
/* method id 411 */ C3::~C3 () {
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_0* func3 () {

return new abstract_0 ();

}
abstract_4 func4 (abstract_0** v34, abstract_0** v35, abstract_0** v36, abstract_0** v37) {
abstract_0** v38;

((new C2 ()))->C2::func0(new abstract_0* ());
((new C2 ()))->C2::func0(new abstract_0* ());
return abstract_4();

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var3: PtrType{PtrType{AbstractType{0}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(16)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var3: PtrType{PtrType{AbstractType{0}}}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var25: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var3: PtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | {vbptr}
8    | | var25: PtrType{PtrType{AbstractType{0}}}
12   | +---
12   | var30: PtrType{PtrType{AbstractType{0}}}
16   | var31: PtrType{PtrType{AbstractType{0}}}
20   | var32: PtrType{PtrType{AbstractType{0}}}
24   | var33: PtrType{PtrType{AbstractType{0}}}
28   | {vtordisp for vbase 0}
32   +---
32   +--- (virtual base class C0)
32   | {vfptr}
36   | var3: PtrType{PtrType{AbstractType{0}}}
40   +---
40   +--- (virtual base class C1)
40   | {vbptr}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
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
