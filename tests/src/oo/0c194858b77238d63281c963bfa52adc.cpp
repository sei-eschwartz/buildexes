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
/* method id 400 */ virtual void**** func0 ();
/* method id 401 */ virtual void*** func0 (abstract_2 v1, abstract_2 v2, abstract_2 v3, abstract_2 v4);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual void* func0 (abstract_2 v5, abstract_2 v6);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_2 v10;
};
struct C2 : public C1 {
/* method id 405 */ void**** func0 ();
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_0* func2 (abstract_3 v19, abstract_2 v20);
C2 (special_constructor);
C1 v25;
C1 v26;
C1 v27;
abstract_2 v28;
};
struct C3 : public C1 {
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
C1 v148;
C1 v149;
C1 v150;
C1 v151;
};
void** func3 ();
abstract_1* func4 (C1 v156, abstract_3 v157, C1 v158, C1 v159);
void**** func5 (C1 v161, C1 v162);
abstract_0* func6 (C1 v166, C1 v167);
// definitions
/* method id 400 */ void**** C0::func0 () {
abstract_2 v0 = abstract_2();
delete (new C1 ());
return new void*** ();

}
/* method id 401 */ void*** C0::func0 (abstract_2 v1, abstract_2 v2, abstract_2 v3, abstract_2 v4) {
return new void** ();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ void* C1::func0 (abstract_2 v5, abstract_2 v6) {
abstract_2 v7 = abstract_2();
return ((void*) 0);

}
/* method id 404 */ C1::C1 () {
abstract_2 v8 = abstract_2();
abstract_2 v9 = abstract_2();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ void**** C2::func0 () {
abstract_2 v11 = abstract_2();
return new void*** ();

}
/* method id 406 */ C2::~C2 () {
abstract_2 v12 = abstract_2();
delete (new C1 ());
return;

}
/* method id 407 */ C2::C2 () {
C1 v13 = *(&(*((new C1 ()))));
return;

}
/* method id 408 */ abstract_0* C2::func2 (abstract_3 v19, abstract_2 v20) {
abstract_3 v21 = abstract_3();
C1 v22 = *(((C1*) 0));
abstract_3 v23 = abstract_3();
C1 v24 = *(((C1*) 0));
return ((abstract_0*) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::~C3 () {
C1 v29 = *(((C1*) 0));
abstract_3 v30 = abstract_3();
C1 v31 = *(((C1*) 0));
C1 v32 = *(((C1*) 0));
return;

}
/* method id 410 */ C3::C3 () {
C1 v37 = *((new C1 ()));
C1 v38 = *((new C1 ()));
C1 v39 = *((new C1 ()));
C1 v40 = *((new C1 ()));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void** func3 () {
C1 v152;
C1 v153;
C1 v154;
C1 v155;

return new void* ();

}
abstract_1* func4 (C1 v156, abstract_3 v157, C1 v158, C1 v159) {
C1 v160;

return new abstract_1 ();

}
void**** func5 (C1 v161, C1 v162) {
C1 v163;
C1 v164;
C1 v165;

return new void*** ();

}
abstract_0* func6 (C1 v166, C1 v167) {
C1 v168;
C1 v169;

return ((abstract_0*) 0);

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var10: AbstractType{2}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(72)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var10: AbstractType{2}
12   | +---
12   | var25: ClassType{1}
28   | var26: ClassType{1}
44   | var27: ClassType{1}
60   | var28: AbstractType{2}
64   | {vtordisp for vbase 0}
68   +---
68   +--- (virtual base class C0)
68   | {vfptr}
72   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
class C3    size(80)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var10: AbstractType{2}
12   | +---
12   | var148: ClassType{1}
28   | var149: ClassType{1}
44   | var150: ClassType{1}
60   | var151: ClassType{1}
76   +---
76   +--- (virtual base class C0)
76   | {vfptr}
80   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 80;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
