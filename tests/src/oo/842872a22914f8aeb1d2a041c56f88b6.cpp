// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
void*** v0;
void*** v1;
void*** v2;
void*** v3;
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
/* method id 403 */ virtual ~C1 ();
C1 (special_constructor);
void*** v28;
void*** v29;
void*** v30;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual abstract_0** func1 (void*** v71);
C2 (special_constructor);
C1 v120;
C1 v121;
C1 v122;
};
struct C3  {
/* method id 407 */ C3 ();
C3 (special_constructor);
void*** v125;
C1 v126;
C1 v127;
C1 v128;
};
abstract_0**** func2 (C1 v129);
abstract_0* func3 ();
abstract_0 func4 ();
abstract_0* func5 (C1 v138, C1 v139, C1 v140, abstract_1 v141);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void*** v4 = ((void***) 0);
void*** v5 = ((void***) 0);
void*** v6 = ((void***) 0);
void*** v7 = ((void***) 0);
::func3();
::func3();
::func3();
::func3();
return;

}
/* method id 403 */ C1::~C1 () {
void*** v16 = ((void***) 0);
void*** v17 = ((void***) 0);
void*** v18 = ((void***) 0);
void*** v19 = ((void***) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
void*** v31 = ((void***) 0);
void*** v32 = ((void***) 0);
void*** v33 = ((void***) 0);
void*** v34 = ((void***) 0);
return;

}
/* method id 405 */ C2::~C2 () {
void*** v35 = ((void***) 0);
void*** v36 = ((void***) 0);
return;

}
/* method id 406 */ abstract_0** C2::func1 (void*** v71) {
void*** v72 = ((void***) 0);
return ((abstract_0**) 0);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
void*** v123 = new void** ();
C1 v124 = *(((C1*) 0));
delete (new C1 ());
return;

}
C3::C3 (special_constructor)  {}

abstract_0**** func2 (C1 v129) {

return new abstract_0*** ();

}
abstract_0* func3 () {
C1 v130;
C1 v131;
void*** v132;
abstract_1 v133;

return ((abstract_0*) 0);

}
abstract_0 func4 () {
C1 v134;
void*** v135;
abstract_1 v136;
abstract_1 v137;

return abstract_0();

}
abstract_0* func5 (C1 v138, C1 v139, C1 v140, abstract_1 v141) {
C1 v142;

return new abstract_0 ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var0: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var1: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var2: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
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
0    | {vbptr}
4    | var28: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var29: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var30: PtrType{PtrType{PtrType{VoidType{}}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
class C2    size(152)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var120: ClassType{1}
44   | var121: ClassType{1}
80   | var122: ClassType{1}
116  +---
116  +--- (virtual base class C0)
116  | {vfptr}
120  | var0: PtrType{PtrType{PtrType{VoidType{}}}}
124  | var1: PtrType{PtrType{PtrType{VoidType{}}}}
128  | var2: PtrType{PtrType{PtrType{VoidType{}}}}
132  | var3: PtrType{PtrType{PtrType{VoidType{}}}}
136  +---
136  +--- (virtual base class C1)
136  | {vbptr}
140  | var28: PtrType{PtrType{PtrType{VoidType{}}}}
144  | var29: PtrType{PtrType{PtrType{VoidType{}}}}
148  | var30: PtrType{PtrType{PtrType{VoidType{}}}}
152  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 152;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 136;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(112)
0    +---
0    | var125: PtrType{PtrType{PtrType{VoidType{}}}}
4    | var126: ClassType{1}
40   | var127: ClassType{1}
76   | var128: ClassType{1}
112  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 112;
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
