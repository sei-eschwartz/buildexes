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
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ void*** func2 ();
/* method id 403 */ virtual void** func0 (C0 v1);
/* method id 404 */ C1 ();
C1 (special_constructor);
C0 v2;
C0 v3;
C0 v4;
C0 v5;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ ~C2 ();
/* method id 408 */ virtual void*** func1 (C0 v33, C0 v34, C0 v35, C0 v36);
C2 (special_constructor);
C0 v85;
C0 v86;
C0 v87;
C0 v88;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual void func0 ();
C3 (special_constructor);
};
void func6 (void* v98, C0 v99);
void** func7 ();
void** func8 (abstract_1 v100, abstract_2 v101, abstract_1 v102, abstract_1 v103);
abstract_3 func9 (C0 v106, abstract_1 v107, abstract_4 v108, abstract_1 v109);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
C0 v0 = *(&(*((new C0 ()))));
return ((void***) 0);

}
/* method id 403 */ void** C1::func0 (C0 v1) {
v5 = v3;
v5 = v3;
v5 = v3;
return new void* ();

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
C0 v6 = *(&(*((new C0 ()))));
C0 v7 = *(&(*((new C0 ()))));
C0 v8 = *(&(*((new C0 ()))));
C0 v9 = *(&(*((new C0 ()))));
v7 = v3;
return;

}
/* method id 407 */ C2::~C2 () {
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
C0 v12 = *(((C0*) 0));
C0 v13 = *(((C0*) 0));
v2 = v4;
v2 = v4;
v2 = v4;
return;

}
/* method id 408 */ void*** C2::func1 (C0 v33, C0 v34, C0 v35, C0 v36) {
C0 v37 = *((new C0 ()));
C0 v38 = *((new C0 ()));
C0 v39 = *((new C0 ()));
C0 v40 = *((new C0 ()));
return new void** ();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {
C0 v89 = *(&(*(((C0*) 0))));
v3 = v3;
v3 = v4;
v3 = v4;
return;

}
/* method id 410 */ void C3::func0 () {
return ::func6(((void*) 0), v3);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func6 (void* v98, C0 v99) {

return;

}
void** func7 () {

return new void* ();

}
void** func8 (abstract_1 v100, abstract_2 v101, abstract_1 v102, abstract_1 v103) {
abstract_2 v104;
C0 v105;

delete (new C3 ());
return new void* ();

}
abstract_3 func9 (C0 v106, abstract_1 v107, abstract_4 v108, abstract_1 v109) {
C0 v110;

delete (new C2 ());
return abstract_3();

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var2: ClassType{0}
12   | var3: ClassType{0}
16   | var4: ClassType{0}
20   | var5: ClassType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
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
class C2    size(52)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var85: ClassType{0}
12   | var86: ClassType{0}
16   | var87: ClassType{0}
20   | var88: ClassType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var2: ClassType{0}
40   | var3: ClassType{0}
44   | var4: ClassType{0}
48   | var5: ClassType{0}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var2: ClassType{0}
24   | var3: ClassType{0}
28   | var4: ClassType{0}
32   | var5: ClassType{0}
36   +---
36   +--- (virtual base class C2)
36   | {vfptr}
40   | {vbptr}
44   | var85: ClassType{0}
48   | var86: ClassType{0}
52   | var87: ClassType{0}
56   | var88: ClassType{0}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
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
 const size_t model_offset = 36;
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