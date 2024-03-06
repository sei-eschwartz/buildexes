// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
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
/* method id 402 */ virtual abstract_0** func0 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public C0, public C1 {
/* method id 403 */ virtual void func0 (abstract_0* v1, abstract_0* v2);
/* method id 404 */ virtual abstract_0* func1 ();
/* method id 405 */ C2 ();
/* method id 406 */ virtual void func1 (abstract_1 v9);
C2 (special_constructor);
abstract_2 v10;
abstract_1 v11;
};
struct C3 : public C0, public virtual C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual abstract_0* func1 (abstract_2 v12, abstract_2 v13, abstract_1 v14, abstract_0* v15);
/* method id 409 */ virtual void func1 (C1 v20, abstract_0* v21, abstract_0*** v22, abstract_0* v23);
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
};
abstract_3 func2 (abstract_0*** v29, abstract_0* v30);
abstract_3 func3 (abstract_0*** v31, abstract_0*** v32, abstract_0* v33, abstract_0* v34);
abstract_0*** func4 (abstract_0* v35);
abstract_0* func5 (abstract_0* v39, abstract_4 v40, C1 v41, abstract_0*** v42);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
delete (new C1 ());
return;

}
/* method id 402 */ abstract_0** C1::func0 () {
delete (new C2 ());
return new abstract_0* ();

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 (abstract_0* v1, abstract_0* v2) {
abstract_1 v3 = abstract_1();
delete (new C2 ());
return;

}
/* method id 404 */ abstract_0* C2::func1 () {
abstract_1 v4 = abstract_1();
abstract_2 v5 = abstract_2();
abstract_0* v6 = new abstract_0 ();
abstract_1 v7 = abstract_1();
delete (new C0 ());
return ((abstract_0*) 0);

}
/* method id 405 */ C2::C2 () {
abstract_0* v8 = new abstract_0 ();
::func2(new abstract_0** (), v8);
::func2(new abstract_0** (), v8);
return;

}
/* method id 406 */ void C2::func1 (abstract_1 v9) {
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
delete (new C2 ());
return;

}
/* method id 408 */ abstract_0* C3::func1 (abstract_2 v12, abstract_2 v13, abstract_1 v14, abstract_0* v15) {
abstract_2 v16 = abstract_2();
C1 v17 = *(((C1*) 0));
abstract_1 v18 = abstract_1();
abstract_0* v19 = new abstract_0 ();
delete (new C2 ());
return v0;

}
/* method id 409 */ void C3::func1 (C1 v20, abstract_0* v21, abstract_0*** v22, abstract_0* v23) {
abstract_0*** v24 = new abstract_0** ();
delete (new C0 ());
return;

}
/* method id 410 */ C3::~C3 () {
abstract_0* v25 = ((abstract_0*) 0);
abstract_0*** v26 = new abstract_0** ();
abstract_0*** v27 = new abstract_0** ();
abstract_1 v28 = abstract_1();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

abstract_3 func2 (abstract_0*** v29, abstract_0* v30) {

return abstract_3();

}
abstract_3 func3 (abstract_0*** v31, abstract_0*** v32, abstract_0* v33, abstract_0* v34) {

delete (new C1 ());
return ::func2(v32, v33);

}
abstract_0*** func4 (abstract_0* v35) {
abstract_2 v36;
abstract_0* v37;
abstract_0* v38;

return ((abstract_0***) 0);

}
abstract_0* func5 (abstract_0* v39, abstract_4 v40, C1 v41, abstract_0*** v42) {
abstract_1 v43;
abstract_0*** v44;
abstract_4 v45;
abstract_1 v46;

((new C1 ()))->C1::func0();
return new abstract_0 ();

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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C0)
8    | +---
8    | var10: AbstractType{2}
12   | var11: AbstractType{1}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(16)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | var0: PtrType{AbstractType{0}}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
