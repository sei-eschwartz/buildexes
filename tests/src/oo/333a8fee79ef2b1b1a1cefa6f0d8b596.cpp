// type for special constructors
struct special_constructor {};
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
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
};
struct C2 : public C1 {
/* method id 404 */ virtual void func2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C0 v7;
C0 v8;
C0 v9;
C0 v10;
};
struct C3 : public C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual void func1 ();
C3 (special_constructor);
C0 v19;
C0 v20;
};
void func6 (C0 v21, C0 v22, C0 v23);
void func7 (C0 v27, C0 v28, C0 v29, C0 v30);
void func8 (C0 v35, C0 v36, C0 v37, C0 v38);
void func9 (C0 v43);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ void C2::func2 () {
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
return;

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
return;

}
/* method id 408 */ C3::~C3 () {
C0 v11 = *(&(*(((C0*) 0))));
C0 v12 = *(&(*(((C0*) 0))));
C0 v13 = *(&(*(((C0*) 0))));
C0 v14 = *(&(*(((C0*) 0))));
delete (new C1 ());
return;

}
/* method id 409 */ void C3::func1 () {
C0 v15 = *((new C0 ()));
C0 v16 = *((new C0 ()));
C0 v17 = *((new C0 ()));
C0 v18 = *((new C0 ()));
::func9(*((new C0 ())));
::func9(*((new C0 ())));
return ::func7(v7, v7, v7, v7);

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func6 (C0 v21, C0 v22, C0 v23) {
C0 v24;
C0 v25;
C0 v26;

delete (new C1 ());
return;

}
void func7 (C0 v27, C0 v28, C0 v29, C0 v30) {
C0 v31;
C0 v32;
C0 v33;
C0 v34;

return ::func8(v28, v28, v28, v28);

}
void func8 (C0 v35, C0 v36, C0 v37, C0 v38) {
C0 v39;
C0 v40;
C0 v41;
C0 v42;

::func9(v37);
::func9(v37);
::func9(v37);
::func9(v37);
return (((C3*) 0))->C3::func1();

}
void func9 (C0 v43) {
C0 v44;
C0 v45;
C0 v46;
C0 v47;

return ::func7(v43, v43, v43, v43);

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
0    | {vbptr}
4    | var0: ClassType{0}
8    | var1: ClassType{0}
12   | var2: ClassType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
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
class C2    size(40)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | {vbptr}
8    | | var0: ClassType{0}
12   | | var1: ClassType{0}
16   | | var2: ClassType{0}
20   | +---
20   | var7: ClassType{0}
24   | var8: ClassType{0}
28   | var9: ClassType{0}
32   | var10: ClassType{0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
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
 const size_t model_offset = 4;
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
0    | +--- (base class C2)
0    | | {vfptr}
4    | | +--- (base class C1)
4    | | | {vbptr}
8    | | | var0: ClassType{0}
12   | | | var1: ClassType{0}
16   | | | var2: ClassType{0}
20   | | +---
20   | | var7: ClassType{0}
24   | | var8: ClassType{0}
28   | | var9: ClassType{0}
32   | | var10: ClassType{0}
36   | +---
36   | var19: ClassType{0}
40   | var20: ClassType{0}
44   +---
44   +--- (virtual base class C0)
44   | {vfptr}
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
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
