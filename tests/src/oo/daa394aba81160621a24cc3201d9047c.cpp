// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ void func1 (C0 v0);
/* method id 402 */ virtual void func0 (C0 v1);
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v2;
C0 v3;
C0 v4;
C0 v5;
};
struct C2 : public virtual C1 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C0 v31;
C0 v32;
C0 v33;
C0 v34;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
C0 v40;
C0 v41;
C0 v42;
C0 v43;
};
void func4 (C0 v44, C0 v45, C0 v46);
void func5 (C0 v51, C0 v52, C0 v53);
void func6 (C0 v57, C0 v58, C0 v59, C0 v60);
void func7 (C0 v62);
// definitions
/* method id 400 */ C0::C0 () {
::func7(*((new C0 ())));
::func7(*((new C0 ())));
::func7(*((new C0 ())));
::func7(*((new C0 ())));
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (C0 v0) {
::func5(v3, v3, v3);
::func5(v3, v3, v3);
::func5(v3, v3, v3);
::func5(v3, v3, v3);
return ::func5(v3, v3, v3);

}
/* method id 402 */ void C1::func0 (C0 v1) {
delete (new C1 ());
return ::func5(*(((C0*) 0)), v3, v3);

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::~C2 () {
C0 v6 = *((new C0 ()));
C0 v7 = *((new C0 ()));
C0 v8 = *((new C0 ()));
C0 v9 = *((new C0 ()));
::func5(v8, v8, v8);
::func5(v8, v8, v8);
return;

}
/* method id 405 */ C2::C2 () {
C0 v10 = *((new C0 ()));
C0 v11 = *((new C0 ()));
C0 v12 = *((new C0 ()));
C0 v13 = *((new C0 ()));
::func7(v3);
::func7(v3);
v11 = v4;
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0 v35 = *(&(*(((C0*) 0))));
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func4 (C0 v44, C0 v45, C0 v46) {
C0 v47;
C0 v48;
C0 v49;
C0 v50;

v45 = *(&(v45));
v45 = *(&(v45));
return;

}
void func5 (C0 v51, C0 v52, C0 v53) {
C0 v54;
C0 v55;
C0 v56;

delete (new C1 ());
return ::func4(*(((C0*) 0)), v52, v52);

}
void func6 (C0 v57, C0 v58, C0 v59, C0 v60) {
C0 v61;

return ::func5(*((new C0 ())), v57, v57);

}
void func7 (C0 v62) {

return ::func4(v62, v62, v62);

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var2: ClassType{0}
9    | var3: ClassType{0}
10   | var4: ClassType{0}
11   | var5: ClassType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var31: ClassType{0}
9    | var32: ClassType{0}
10   | var33: ClassType{0}
11   | var34: ClassType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | {vbptr}
20   | var2: ClassType{0}
21   | var3: ClassType{0}
22   | var4: ClassType{0}
23   | var5: ClassType{0}
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | {vbptr}
4    | var40: ClassType{0}
5    | var41: ClassType{0}
6    | var42: ClassType{0}
7    | var43: ClassType{0}
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | {vbptr}
16   | var2: ClassType{0}
17   | var3: ClassType{0}
18   | var4: ClassType{0}
19   | var5: ClassType{0}
20   +---
20   +--- (virtual base class C2)
20   | {vfptr}
24   | {vbptr}
28   | var31: ClassType{0}
29   | var32: ClassType{0}
30   | var33: ClassType{0}
31   | var34: ClassType{0}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
 const size_t model_offset = 20;
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
