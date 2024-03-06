// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
C2 (special_constructor);
C0 v4;
C0 v5;
C0 v6;
C0 v7;
};
struct C3 : public C1 {
/* method id 404 */ C3 ();
/* method id 405 */ virtual ~C3 ();
C3 (special_constructor);
C0 v20;
C0 v21;
C0 v22;
C0 v23;
};
void* func4 (C0 v24, C0 v25, C0 v26, C0 v27);
void** func5 (C0 v32, C0 v33, C0 v34);
void** func6 (C0 v37, C0 v38, C0 v39);
void* func7 (C0 v44, C0 v45, C0 v46, C0 v47);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 404 */ C3::C3 () {
C0 v8 = *(&(*((new C0 ()))));
C0 v9 = *(&(*((new C0 ()))));
C0 v10 = *(&(*((new C0 ()))));
C0 v11 = *(&(*((new C0 ()))));
return;

}
/* method id 405 */ C3::~C3 () {
C0 v12 = *(&(*(((C0*) 0))));
C0 v13 = *(&(*(((C0*) 0))));
C0 v14 = *(&(*(((C0*) 0))));
C0 v15 = *(&(*(((C0*) 0))));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void* func4 (C0 v24, C0 v25, C0 v26, C0 v27) {
C0 v28;
C0 v29;
C0 v30;
C0 v31;

return ((void*) 0);

}
void** func5 (C0 v32, C0 v33, C0 v34) {
C0 v35;
C0 v36;

delete (new C2 ());
return ((void**) 0);

}
void** func6 (C0 v37, C0 v38, C0 v39) {
C0 v40;
C0 v41;
C0 v42;
C0 v43;

return ((void**) 0);

}
void* func7 (C0 v44, C0 v45, C0 v46, C0 v47) {
C0 v48;

::func5(v46, v46, v46);
::func5(v46, v46, v46);
::func5(v46, v46, v46);
return ::func4(v46, v46, v46, v46);

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
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var0: ClassType{0}
8    | var1: ClassType{0}
12   | var2: ClassType{0}
16   | var3: ClassType{0}
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
class C2    size(40)
0    +---
0    | {vbptr}
4    | var4: ClassType{0}
8    | var5: ClassType{0}
12   | var6: ClassType{0}
16   | var7: ClassType{0}
20   +---
20   +--- (virtual base class C1)
20   | +--- (base class C0)
20   | | {vfptr}
24   | +---
24   | var0: ClassType{0}
28   | var1: ClassType{0}
32   | var2: ClassType{0}
36   | var3: ClassType{0}
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
 const size_t model_offset = 20;
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
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | | var0: ClassType{0}
8    | | var1: ClassType{0}
12   | | var2: ClassType{0}
16   | | var3: ClassType{0}
20   | +---
20   | var20: ClassType{0}
24   | var21: ClassType{0}
28   | var22: ClassType{0}
32   | var23: ClassType{0}
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
