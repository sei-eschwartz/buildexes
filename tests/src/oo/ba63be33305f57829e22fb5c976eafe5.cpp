// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

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
/* method id 405 */ virtual void func0 (C0 v11, C0 v12, C0 v13, C0 v14);
/* method id 406 */ C2 ();
C2 (special_constructor);
C0 v18;
};
abstract_0 func3 (C0 v19, C0 v20, C0 v21, C0 v22);
void func4 (C0 v23, C0 v24, C0 v25, C0 v26);
abstract_0 func5 (C0 v29);
abstract_0 func6 (C0 v33, C0 v34, abstract_0* v35);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
delete (new C2 ());
return ::func4(v1, v1, v1, v1);

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 (C0 v4, C0 v5, C0 v6) {
C0 v7 = *((new C0 ()));
delete (new C1 ());
return ::func4(v18, v18, v18, v18);

}
/* method id 404 */ void C2::func1 (C0 v8, C0 v9, C0 v10) {
delete (new C1 ());
return;

}
/* method id 405 */ void C2::func0 (C0 v11, C0 v12, C0 v13, C0 v14) {
C0 v15 = *(&(*((new C0 ()))));
C0 v16 = *(&(*((new C0 ()))));
C0 v17 = *(&(*((new C0 ()))));
::func6(v17, v17, new abstract_0 ());
::func6(v17, v17, new abstract_0 ());
::func6(v17, v17, new abstract_0 ());
return ::func4(v17, v17, v17, v17);

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

abstract_0 func3 (C0 v19, C0 v20, C0 v21, C0 v22) {

return ::func6(*(((C0*) 0)), v22, new abstract_0 ());

}
void func4 (C0 v23, C0 v24, C0 v25, C0 v26) {
C0 v27;
C0 v28;

v28 = v23;
v28 = v23;
v28 = v23;
v28 = v23;
return;

}
abstract_0 func5 (C0 v29) {
abstract_0* v30;
abstract_0* v31;
abstract_0* v32;

return abstract_0();

}
abstract_0 func6 (C0 v33, C0 v34, abstract_0* v35) {

return ::func3(v33, v34, v34, v33);

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
class C2    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var18: ClassType{0}
9    | alignment: 
12   +---
12   +--- (virtual base class C1)
12   | var1: ClassType{0}
13   | var2: ClassType{0}
14   | var3: ClassType{0}
15   +---
15   | alignment: alignment before virtual base padding
16   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
20   +--- (virtual base class C0)
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
