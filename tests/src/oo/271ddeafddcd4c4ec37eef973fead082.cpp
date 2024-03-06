// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v2;
abstract_0 v3;
abstract_0 v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual abstract_1* func0 (abstract_0 v6);
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_0 v8;
abstract_0 v9;
abstract_2 v10;
abstract_2 v11;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
C1 v17;
C1 v18;
abstract_2 v19;
abstract_2 v20;
};
struct C3  {
/* method id 405 */ virtual abstract_1* func1 (abstract_3 v21);
/* method id 406 */ ~C3 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_3 v27;
C1 v28;
};
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
((new C3 ()))->C3::func1(abstract_3());
((new C3 ()))->C3::func1(abstract_3());
((new C3 ()))->C3::func1(abstract_3());
((new C3 ()))->C3::func1(abstract_3());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_1* C1::func0 (abstract_0 v6) {
abstract_0 v7 = abstract_0();
return ((abstract_1*) 0);

}
/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
abstract_1** v12 = new abstract_1* ();
abstract_1** v13 = new abstract_1* ();
abstract_2 v14 = abstract_2();
delete (new C0 ());
return;

}
/* method id 404 */ C2::~C2 () {
abstract_2 v15 = abstract_2();
C1 v16 = *(((C1*) 0));
v5 = v2;
v5 = abstract_0();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 405 */ abstract_1* C3::func1 (abstract_3 v21) {
v27 = v27;
v27 = v27;
v27 = v27;
v27 = v27;
return ((abstract_1*) 0);

}
/* method id 406 */ C3::~C3 () {
abstract_1** v22 = new abstract_1* ();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
C1 v25 = *((new C1 ()));
return;

}
/* method id 407 */ C3::C3 () {
abstract_2 v26 = abstract_2();
return;

}
C3::C3 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var2: AbstractType{0}
4    | var3: AbstractType{0}
8    | var4: AbstractType{0}
12   | var5: AbstractType{0}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var8: AbstractType{0}
12   | var9: AbstractType{0}
16   | var10: AbstractType{2}
20   | var11: AbstractType{2}
24   +---
24   +--- (virtual base class C0)
24   | var2: AbstractType{0}
28   | var3: AbstractType{0}
32   | var4: AbstractType{0}
36   | var5: AbstractType{0}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(136)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var17: ClassType{1}
48   | var18: ClassType{1}
88   | var19: AbstractType{2}
92   | var20: AbstractType{2}
96   +---
96   +--- (virtual base class C0)
96   | var2: AbstractType{0}
100  | var3: AbstractType{0}
104  | var4: AbstractType{0}
108  | var5: AbstractType{0}
112  +---
112  +--- (virtual base class C1)
112  | {vfptr}
116  | {vbptr}
120  | var8: AbstractType{0}
124  | var9: AbstractType{0}
128  | var10: AbstractType{2}
132  | var11: AbstractType{2}
136  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 136;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 96;
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
 const size_t model_offset = 112;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(48)
0    +---
0    | {vfptr}
4    | var27: AbstractType{3}
8    | var28: ClassType{1}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
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
