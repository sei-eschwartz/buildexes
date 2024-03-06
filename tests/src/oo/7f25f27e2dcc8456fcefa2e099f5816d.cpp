// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void* func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3);
/* method id 401 */ virtual abstract_2** func1 (abstract_1 v5, abstract_1 v6);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual void* func0 (abstract_1 v10, abstract_1 v11);
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void** func0 ();
/* method id 406 */ void* func1 (abstract_1 v15, abstract_0 v16, abstract_3 v17, abstract_1 v18);
/* method id 407 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C0, public C1 {
/* method id 408 */ virtual abstract_2*** func0 (abstract_1 v19, abstract_1 v20, void*** v21, void*** v22);
/* method id 409 */ virtual void** func3 (abstract_4 v27, abstract_4 v28, abstract_0 v29, abstract_0 v30);
/* method id 410 */ virtual ~C2 ();
/* method id 411 */ C2 ();
C2 (special_constructor);
abstract_0 v33;
};
struct C3 : public virtual C2 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual void*** func1 ();
/* method id 414 */ virtual void*** func5 (void*** v48, void*** v49);
/* method id 415 */ virtual void* func0 (abstract_4 v50, void*** v51);
C3 (special_constructor);
abstract_3 v56;
};
// definitions
/* method id 400 */ void* C0::func0 (abstract_0 v0, abstract_0 v1, abstract_1 v2, abstract_1 v3) {
abstract_0 v4 = abstract_0();
delete (new C3 ());
return ((void*) 0);

}
/* method id 401 */ abstract_2** C0::func1 (abstract_1 v5, abstract_1 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
return new abstract_2* ();

}
/* method id 402 */ C0::C0 () {
abstract_0 v9 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ void* C1::func0 (abstract_1 v10, abstract_1 v11) {
abstract_1 v12 = abstract_1();
abstract_0 v13 = abstract_0();
abstract_0 v14 = abstract_0();
v12 = v11;
v12 = v11;
return ((void*) 0);

}
/* method id 404 */ C1::~C1 () {
return;

}
/* method id 405 */ void** C1::func0 () {
delete (new C3 ());
return ((void**) 0);

}
/* method id 406 */ void* C1::func1 (abstract_1 v15, abstract_0 v16, abstract_3 v17, abstract_1 v18) {
v16 = v16;
v16 = v16;
v16 = v16;
v16 = v16;
return ((void*) 0);

}
/* method id 407 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_2*** C2::func0 (abstract_1 v19, abstract_1 v20, void*** v21, void*** v22) {
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
abstract_1 v25 = abstract_1();
abstract_0 v26 = abstract_0();
v19 = v19;
v19 = v19;
v19 = v19;
return new abstract_2** ();

}
/* method id 409 */ void** C2::func3 (abstract_4 v27, abstract_4 v28, abstract_0 v29, abstract_0 v30) {
abstract_4 v31 = abstract_4();
abstract_0 v32 = abstract_0();
v31 = abstract_4();
v31 = abstract_4();
v31 = abstract_4();
v31 = abstract_4();
return new void* ();

}
/* method id 410 */ C2::~C2 () {
v33 = v33;
return;

}
/* method id 411 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
abstract_5 v34 = abstract_5();
abstract_1 v35 = abstract_1();
abstract_0 v36 = abstract_0();
v33 = v36;
return;

}
/* method id 413 */ void*** C3::func1 () {
abstract_3 v37 = abstract_3();
abstract_5 v38 = abstract_5();
abstract_5 v39 = abstract_5();
return new void** ();

}
/* method id 414 */ void*** C3::func5 (void*** v48, void*** v49) {
return new void** ();

}
/* method id 415 */ void* C3::func0 (abstract_4 v50, void*** v51) {
abstract_1 v52 = abstract_1();
abstract_1 v53 = abstract_1();
abstract_1 v54 = abstract_1();
C2 v55 = *(((C2*) 0));
delete (new C1 ());
return ((void*) 0);

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var33: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 const size_t model_offset = 12;
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
class C3    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var56: AbstractType{3}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C2)
16   | +--- (base class C1)
16   | | {vfptr}
20   | | {vbptr}
24   | +---
24   | var33: AbstractType{0}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
