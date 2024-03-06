// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual void** func0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual ~C0 ();
C0 (special_constructor);
abstract_0 v152;
abstract_0 v153;
abstract_0 v154;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
abstract_1 v167;
abstract_0 v168;
};
struct C2 : public C1 {
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_1 v170;
abstract_1 v171;
abstract_1 v172;
};
void**** func2 (abstract_1 v173);
void func3 ();
// definitions
/* method id 400 */ void** C0::func0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
v1 = v152;
v1 = v152;
v1 = v152;
return new void* ();

}
/* method id 401 */ C0::C0 () {
abstract_0 v2 = abstract_0();
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
return;

}
/* method id 402 */ C0::~C0 () {
abstract_0 v6 = abstract_0();
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_0 v155 = abstract_0();
abstract_0 v156 = abstract_0();
abstract_0 v157 = abstract_0();
abstract_0 v158 = abstract_0();
return;

}
/* method id 404 */ C1::~C1 () {
abstract_0 v163 = abstract_0();
abstract_0 v164 = abstract_0();
abstract_0 v165 = abstract_0();
abstract_0 v166 = abstract_0();
delete (new C0 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_1 v169 = abstract_1();
v172 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

void**** func2 (abstract_1 v173) {
abstract_1 v174;
void*** v175;
abstract_2 v176;
abstract_2 v177;

v177 = v176;
v177 = v176;
return new void*** ();

}
void func3 () {
abstract_2 v178;
abstract_0 v179;
abstract_2 v180;
abstract_1 v181;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var152: AbstractType{0}
8    | var153: AbstractType{0}
12   | var154: AbstractType{0}
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
class C1    size(28)
0    +---
0    | {vbptr}
4    | var167: AbstractType{1}
8    | var168: AbstractType{0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var152: AbstractType{0}
20   | var153: AbstractType{0}
24   | var154: AbstractType{0}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
class C2    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var167: AbstractType{1}
8    | | var168: AbstractType{0}
12   | +---
12   | var170: AbstractType{1}
16   | var171: AbstractType{1}
20   | var172: AbstractType{1}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var152: AbstractType{0}
32   | var153: AbstractType{0}
36   | var154: AbstractType{0}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
