// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2  {
/* method id 405 */ virtual abstract_0 func2 ();
/* method id 406 */ ~C2 ();
/* method id 407 */ abstract_0 func1 (C0 v8, C1 v9);
/* method id 408 */ C2 ();
C2 (special_constructor);
C1 v15;
C1 v16;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C1 v21;
C1 v22;
};
abstract_0 func5 (C0 v23, C1 v24, C1 v25, C1 v26);
abstract_0 func6 (C1 v31, C1 v32, C1 v33, C1 v34);
abstract_0 func7 ();
abstract_0 func8 (C1 v42, C1 v43, C1 v44, C0 v45);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
return abstract_0();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return abstract_0();

}
/* method id 406 */ C2::~C2 () {
C0 v4 = *((new C0 ()));
return;

}
/* method id 407 */ abstract_0 C2::func1 (C0 v8, C1 v9) {
C0 v10 = *(&(*(((C0*) 0))));
C1 v11 = *(((C1*) 0));
C1 v12 = *(((C1*) 0));
C0 v13 = *(&(*(((C0*) 0))));
return abstract_0();

}
/* method id 408 */ C2::C2 () {
C0 v14 = *((new C0 ()));
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
C1 v17 = *(((C1*) 0));
C1 v18 = *(((C1*) 0));
C1 v19 = *(((C1*) 0));
C1 v20 = *(((C1*) 0));
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func5 (C0 v23, C1 v24, C1 v25, C1 v26) {
C1 v27;
C1 v28;
C1 v29;
C1 v30;

return ::func7();

}
abstract_0 func6 (C1 v31, C1 v32, C1 v33, C1 v34) {
C1 v35;
C1 v36;
C1 v37;
C1 v38;

return ::func7();

}
abstract_0 func7 () {
C1 v39;
C1 v40;
C1 v41;

return abstract_0();

}
abstract_0 func8 (C1 v42, C1 v43, C1 v44, C0 v45) {
C1 v46;
C1 v47;
C1 v48;

return ::func6(v42, v42, v42, v42);

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
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   | var3: ClassType{0}
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
class C2    size(28)
0    +---
0    | {vfptr}
4    | var15: ClassType{1}
16   | var16: ClassType{1}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(68)
0    +---
0    | {vbptr}
4    | var21: ClassType{1}
16   | var22: ClassType{1}
28   +---
28   +--- (virtual base class C0)
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var0: ClassType{0}
37   | var1: ClassType{0}
38   | var2: ClassType{0}
39   | var3: ClassType{0}
40   +---
40   +--- (virtual base class C2)
40   | {vfptr}
44   | var15: ClassType{1}
56   | var16: ClassType{1}
68   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 40;
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
