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
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 403 */ virtual void func0 (C0 v4, C0 v5, C0 v6);
/* method id 404 */ virtual void func1 (C0 v8, C0 v9, C0 v10);
/* method id 405 */ virtual void func0 (C0 v11, C0 v12);
/* method id 406 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1 {
/* method id 407 */ virtual void func2 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
C0 v21;
C0 v22;
C0 v23;
C0 v24;
};
void func3 (C0 v25, C0 v26, C0 v27, C0 v28);
void func4 (C0 v33, C0 v34, C0 v35, C0 v36);
void func5 (C0 v38, C0 v39, C0 v40, C0 v41);
void func6 (C0 v46, C0 v47, C0 v48, C0 v49);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return ::func4(v2, v2, v2, v2);

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 (C0 v4, C0 v5, C0 v6) {
C0 v7 = *((new C0 ()));
delete (new C2 ());
return ::func6(v2, v2, v2, v2);

}
/* method id 404 */ void C2::func1 (C0 v8, C0 v9, C0 v10) {
delete (new C1 ());
return ::func4(v8, v8, v8, v8);

}
/* method id 405 */ void C2::func0 (C0 v11, C0 v12) {
C0 v13 = *(&(*((new C0 ()))));
return ::func6(v2, v2, v2, v2);

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ void C3::func2 () {
C0 v14 = *(&(*(((C0*) 0))));
C0 v15 = *(&(*(((C0*) 0))));
C0 v16 = *(&(*(((C0*) 0))));
delete (new C1 ());
return ::func4(v2, v2, v2, v2);

}
/* method id 408 */ C3::C3 () {
C0 v17 = *(((C0*) 0));
C0 v18 = *(((C0*) 0));
C0 v19 = *(((C0*) 0));
C0 v20 = *(((C0*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func3 (C0 v25, C0 v26, C0 v27, C0 v28) {
C0 v29;
C0 v30;
C0 v31;
C0 v32;

(((C3*) 0))->C3::func2();
return ::func5(v30, v30, v30, v30);

}
void func4 (C0 v33, C0 v34, C0 v35, C0 v36) {
C0 v37;

delete (new C2 ());
return;

}
void func5 (C0 v38, C0 v39, C0 v40, C0 v41) {
C0 v42;
C0 v43;
C0 v44;
C0 v45;

return;

}
void func6 (C0 v46, C0 v47, C0 v48, C0 v49) {
C0 v50;
C0 v51;
C0 v52;
C0 v53;

return (((C1*) 0))->C1::func0();

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
class C1    size(3)
0    +---
0    | var1: ClassType{0}
1    | var2: ClassType{0}
2    | var3: ClassType{0}
3    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 3;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | var1: ClassType{0}
9    | var2: ClassType{0}
10   | var3: ClassType{0}
11   +---
11   | alignment: alignment before virtual base padding
12   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
16   +--- (virtual base class C0)
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(15)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: ClassType{0}
9    | var22: ClassType{0}
10   | var23: ClassType{0}
11   | var24: ClassType{0}
12   +---
12   +--- (virtual base class C1)
12   | var1: ClassType{0}
13   | var2: ClassType{0}
14   | var3: ClassType{0}
15   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 15;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
