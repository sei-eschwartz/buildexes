// type for special constructors
struct special_constructor {};
struct abstract_2 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual void* func1 ();
/* method id 402 */ C1 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ virtual void* func1 (C0 v4, C0 v5, void*** v6);
C1 (special_constructor);
C0 v8;
abstract_0 v9;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ ~C2 ();
C2 (special_constructor);
C0 v72;
C0 v73;
C0 v74;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
C0 v115;
abstract_2** v116;
};
void*** func3 ();
void* func4 (C3 v121, abstract_3 v122, abstract_3 v123, abstract_3 v124);
void func5 (abstract_3 v126, abstract_3 v127);
void* func6 (C0 v128, C0 v129, abstract_0 v130);
// definitions
/* method id 400 */ C0::C0 () {
void*** v0 = new void** ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void* C1::func1 () {
v8 = v8;
v8 = v8;
return ((void*) 0);

}
/* method id 402 */ C1::C1 () {
return;

}
/* method id 403 */ C1::~C1 () {
void*** v1 = new void** ();
void*** v2 = new void** ();
C0 v3 = *(((C0*) 0));
::func5(abstract_3(), abstract_3());
::func5(abstract_3(), abstract_3());
return;

}
/* method id 404 */ void* C1::func1 (C0 v4, C0 v5, void*** v6) {
C0 v7 = *(((C0*) 0));
return ::func6(v4, v4, abstract_0());

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
C0 v10 = *(&(*((new C0 ()))));
C0 v11 = *(&(*((new C0 ()))));
C0 v12 = *(&(*((new C0 ()))));
C0 v13 = *(&(*((new C0 ()))));
return;

}
/* method id 406 */ C2::~C2 () {
C0 v14 = *(((C0*) 0));
C0 v15 = *(((C0*) 0));
C0 v16 = *(((C0*) 0));
C0 v17 = *(((C0*) 0));
::func6(v73, v73, v9);
::func6(v73, v73, v9);
::func6(v73, v73, v9);
::func6(v73, v73, v9);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::~C3 () {
abstract_0 v75 = abstract_0();
C0 v76 = *(&(*((new C0 ()))));
C0 v77 = *(&(*((new C0 ()))));
C0 v78 = *(&(*((new C0 ()))));
return;

}
/* method id 408 */ C3::C3 () {
C0 v79 = *(((C0*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void*** func3 () {
void*** v117;
abstract_3 v118;
C0 v119;
abstract_2** v120;

return ((void***) 0);

}
void* func4 (C3 v121, abstract_3 v122, abstract_3 v123, abstract_3 v124) {
abstract_2** v125;

v121 = v121;
v121 = v121;
v121 = v121;
return ((new C1 ()))->C1::func1();

}
void func5 (abstract_3 v126, abstract_3 v127) {

v127 = v126;
v127 = v126;
return;

}
void* func6 (C0 v128, C0 v129, abstract_0 v130) {
void*** v131;

v131 = v131;
v131 = v131;
v131 = v131;
v131 = v131;
return ((void*) 0);

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: ClassType{0}
9    | alignment: 
12   | var9: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(24)
0    +---
0    | {vbptr}
4    | var72: ClassType{0}
5    | var73: ClassType{0}
6    | var74: ClassType{0}
7    | alignment: 
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | {vbptr}
16   | var8: ClassType{0}
17   | alignment: 
20   | var9: AbstractType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(36)
0    +---
0    | {vbptr}
4    | var115: ClassType{0}
5    | alignment: 
8    | var116: DeletablePtrType{PtrType{AbstractType{2}}}
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var8: ClassType{0}
21   | alignment: 
24   | var9: AbstractType{0}
28   +---
28   +--- (virtual base class C2)
28   | {vbptr}
32   | var72: ClassType{0}
33   | var73: ClassType{0}
34   | var74: ClassType{0}
35   | alignment: 
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
 const size_t model_offset = 28;
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
