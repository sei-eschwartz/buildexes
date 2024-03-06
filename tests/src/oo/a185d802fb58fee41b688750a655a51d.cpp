// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void*** v0;
void*** v1;
void*** v2;
void*** v3;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
void*** v28;
void*** v29;
void*** v30;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ virtual abstract_0** func0 (void*** v71);
C2 (special_constructor);
void*** v90;
void*** v91;
void*** v92;
};
struct C3 : public virtual C0 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
C3 (special_constructor);
C2 v99;
C2 v100;
C2 v101;
};
void**** func1 (C2 v102);
abstract_0* func2 (void*** v106, C2 v107, C2 v108, C2 v109);
abstract_0* func3 (void*** v114, C2 v115, C2 v116);
abstract_0* func4 (C2 v120, C2 v121, C2 v122, C2 v123);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void*** v4 = ((void***) 0);
void*** v5 = ((void***) 0);
void*** v6 = ((void***) 0);
void*** v7 = ((void***) 0);
return;

}
/* method id 402 */ C1::~C1 () {
void*** v16 = ((void***) 0);
void*** v17 = ((void***) 0);
void*** v18 = ((void***) 0);
void*** v19 = ((void***) 0);
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
void*** v31 = ((void***) 0);
void*** v32 = ((void***) 0);
void*** v33 = ((void***) 0);
void*** v34 = ((void***) 0);
return;

}
/* method id 404 */ C2::~C2 () {
void*** v35 = ((void***) 0);
void*** v36 = ((void***) 0);
return;

}
/* method id 405 */ abstract_0** C2::func0 (void*** v71) {
void*** v72 = ((void***) 0);
delete (new C0 ());
return ((abstract_0**) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
delete (new C1 ());
return;

}
/* method id 407 */ C3::~C3 () {
void*** v93 = ((void***) 0);
C2 v94 = *(((C2*) 0));
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

void**** func1 (C2 v102) {
C2 v103;
C2 v104;
C2 v105;

return new void*** ();

}
abstract_0* func2 (void*** v106, C2 v107, C2 v108, C2 v109) {
C2 v110;
void*** v111;
C2 v112;
C2 v113;

return ((abstract_0*) 0);

}
abstract_0* func3 (void*** v114, C2 v115, C2 v116) {
C2 v117;
C2 v118;
C2 v119;

return new abstract_0 ();

}
abstract_0* func4 (C2 v120, C2 v121, C2 v122, C2 v123) {
C2 v124;
void*** v125;
C2 v126;
C2 v127;

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: PtrType{PtrType{PtrType{VoidType{}}}}
4    | var1: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var2: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var28: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
28   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
32   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(56)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var90: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var91: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var92: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: PtrType{PtrType{PtrType{VoidType{}}}}
24   | var1: PtrType{PtrType{PtrType{VoidType{}}}}
28   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
32   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var28: PtrType{PtrType{PtrType{VoidType{}}}}
48   | var29: PtrType{PtrType{PtrType{VoidType{}}}}
52   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
56   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(192)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var99: ClassType{2}
64   | var100: ClassType{2}
120  | var101: ClassType{2}
176  +---
176  +--- (virtual base class C0)
176  | var0: PtrType{PtrType{PtrType{VoidType{}}}}
180  | var1: PtrType{PtrType{PtrType{VoidType{}}}}
184  | var2: PtrType{PtrType{PtrType{VoidType{}}}}
188  | var3: PtrType{PtrType{PtrType{VoidType{}}}}
192  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 192;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 176;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
