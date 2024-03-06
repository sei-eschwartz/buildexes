// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void* func0 (abstract_0 v0, abstract_0 v1);
/* method id 401 */ virtual void func0 ();
/* method id 402 */ virtual void func1 (abstract_0 v6);
/* method id 403 */ virtual void func1 (abstract_0 v11, abstract_1 v12);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_0 v13;
abstract_0 v14;
};
struct C1 : public C0 {
/* method id 405 */ virtual void* func0 (void* v15, abstract_0 v16);
/* method id 406 */ C1 ();
/* method id 407 */ virtual ~C1 ();
C1 (special_constructor);
void* v69;
void* v70;
};
struct C2 : public C0 {
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
void* v253;
void* v254;
abstract_0 v255;
void* v256;
};
struct C3 : public virtual C1 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual void* func0 (abstract_3 v261);
/* method id 412 */ virtual ~C3 ();
C3 (special_constructor);
void* v319;
void* v320;
abstract_0 v321;
};
// definitions
/* method id 400 */ void* C0::func0 (abstract_0 v0, abstract_0 v1) {
abstract_0 v2 = abstract_0();
return ((void*) 0);

}
/* method id 401 */ void C0::func0 () {
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return;

}
/* method id 402 */ void C0::func1 (abstract_0 v6) {
abstract_0 v7 = abstract_0();
void* v8 = ((void*) 0);
abstract_1 v9 = abstract_1();
abstract_1 v10 = abstract_1();
return;

}
/* method id 403 */ void C0::func1 (abstract_0 v11, abstract_1 v12) {
delete (new C1 ());
return;

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ void* C1::func0 (void* v15, abstract_0 v16) {
C0 v17 = *(&(*((new C0 ()))));
void* v18 = ((void*) 0);
C0 v19 = *(&(*((new C0 ()))));
delete (new C1 ());
return v15;

}
/* method id 406 */ C1::C1 () {
abstract_1 v20 = abstract_1();
abstract_2 v21 = abstract_2();
void* v22 = ((void*) 0);
abstract_0 v23 = abstract_0();
return;

}
/* method id 407 */ C1::~C1 () {
void* v28 = ((void*) 0);
void*** v29 = new void** ();
void* v30 = ((void*) 0);
void* v31 = ((void*) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::~C2 () {
void* v71 = ((void*) 0);
abstract_1 v72 = abstract_1();
void* v73 = ((void*) 0);
void* v74 = ((void*) 0);
(((C3*) 0))->C3::func0(abstract_3());
(((C3*) 0))->C3::func0(abstract_3());
(((C3*) 0))->C3::func0(abstract_3());
(((C3*) 0))->C3::func0(abstract_3());
return;

}
/* method id 409 */ C2::C2 () {
abstract_0 v75 = abstract_0();
void* v76 = ((void*) 0);
void* v77 = ((void*) 0);
void* v78 = ((void*) 0);
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
abstract_1 v257 = abstract_1();
abstract_3 v258 = abstract_3();
void* v259 = ((void*) 0);
C0 v260 = *(((C0*) 0));
return;

}
/* method id 411 */ void* C3::func0 (abstract_3 v261) {
abstract_3 v262 = abstract_3();
void* v263 = ((void*) 0);
abstract_3 v264 = abstract_3();
void* v265 = ((void*) 0);
return v320;

}
/* method id 412 */ C3::~C3 () {
abstract_3 v266 = abstract_3();
void* v267 = ((void*) 0);
void*** v268 = new void** ();
void* v269 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var13: AbstractType{0}
8    | var14: AbstractType{0}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var13: AbstractType{0}
8    | | var14: AbstractType{0}
12   | +---
12   | var69: PtrType{VoidType{}}
16   | var70: PtrType{VoidType{}}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var13: AbstractType{0}
8    | | var14: AbstractType{0}
12   | +---
12   | var253: PtrType{VoidType{}}
16   | var254: PtrType{VoidType{}}
20   | var255: AbstractType{0}
24   | var256: PtrType{VoidType{}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var319: PtrType{VoidType{}}
12   | var320: PtrType{VoidType{}}
16   | var321: AbstractType{0}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | | var13: AbstractType{0}
28   | | var14: AbstractType{0}
32   | +---
32   | var69: PtrType{VoidType{}}
36   | var70: PtrType{VoidType{}}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
