// type for special constructors
struct special_constructor {};
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_12 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ virtual void** func1 ();
/* method id 402 */ virtual void** func1 (abstract_0 v7, abstract_2 v8, void** v9, abstract_1 v10);
/* method id 403 */ void* func1 (abstract_0 v11, abstract_1 v12, abstract_3 v13, abstract_0 v14);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ ~C1 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual void func5 ();
/* method id 409 */ virtual void*** func3 ();
/* method id 410 */ void** func1 ();
C2 (special_constructor);
};
struct C3 : public virtual C1 {
/* method id 412 */ C3 ();
/* method id 413 */ virtual void** func1 ();
/* method id 414 */ void* func7 ();
/* method id 415 */ ~C3 ();
C3 (special_constructor);
abstract_2 v44;
};
// definitions
/* method id 400 */ C0::~C0 () {
void** v0 = ((void**) 0);
abstract_0 v1 = abstract_0();
void** v2 = ((void**) 0);
void** v3 = ((void**) 0);
v2 = new void* ();
return;

}
/* method id 401 */ void** C0::func1 () {
abstract_0 v4 = abstract_0();
abstract_1 v5 = abstract_1();
void** v6 = new void* ();
return new void* ();

}
/* method id 402 */ void** C0::func1 (abstract_0 v7, abstract_2 v8, void** v9, abstract_1 v10) {
v7 = abstract_0();
v7 = abstract_0();
v7 = abstract_0();
v7 = abstract_0();
return ((void**) 0);

}
/* method id 403 */ void* C0::func1 (abstract_0 v11, abstract_1 v12, abstract_3 v13, abstract_0 v14) {
delete (new C3 ());
return ((void*) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ C1::~C1 () {
C0 v15 = *(&(*((new C0 ()))));
abstract_3 v16 = abstract_3();
abstract_3 v17 = abstract_3();
void*** v18 = new void** ();
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
delete (new C0 ());
return;

}
/* method id 408 */ void C2::func5 () {
abstract_0 v23 = abstract_0();
void** v24 = ((void**) 0);
C0 v25 = *((new C0 ()));
void*** v26 = new void** ();
return;

}
/* method id 409 */ void*** C2::func3 () {
return new void** ();

}
/* method id 410 */ void** C2::func1 () {
(((C2*) 0))->C2::func5();
(((C2*) 0))->C2::func5();
(((C2*) 0))->C2::func5();
(((C2*) 0))->C2::func5();
return new void* ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {
void** v31 = ((void**) 0);
abstract_1 v32 = abstract_1();
abstract_0 v33 = abstract_0();
abstract_0 v34 = abstract_0();
return;

}
/* method id 413 */ void** C3::func1 () {
abstract_0 v36 = abstract_0();
void** v37 = new void* ();
return new void* ();

}
/* method id 414 */ void* C3::func7 () {
void** v38 = ((void**) 0);
v38 = v38;
return ((void*) 0);

}
/* method id 415 */ C3::~C3 () {
C0 v40 = *(&(*((new C0 ()))));
abstract_12 v41 = abstract_12();
C0 v42 = *(&(*((new C0 ()))));
abstract_12 v43 = abstract_12();
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vbptr}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(20)
0    +---
0    | {vbptr}
4    | var44: AbstractType{2}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vbptr}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
