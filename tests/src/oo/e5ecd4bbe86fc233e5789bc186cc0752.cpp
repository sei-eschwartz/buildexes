// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_5 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
abstract_0 v2;
abstract_0 v3;
abstract_0 v4;
abstract_0 v5;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual abstract_1* func0 (abstract_0 v6);
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_0 v12;
abstract_0 v13;
};
struct C2  {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
C1 v16;
C1 v17;
C1 v18;
C1 v19;
};
struct C3  {
/* method id 405 */ virtual abstract_1* func0 (abstract_2 v20);
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ C3 ();
/* method id 408 */ virtual abstract_1 func0 (C1 v26);
C3 (special_constructor);
C1 v28;
abstract_3 v29;
};
abstract_4 func1 (abstract_2 v30);
abstract_1 func2 (abstract_2 v32, abstract_0 v33, abstract_2 v34, abstract_3 v35);
abstract_1* func3 (abstract_0 v39);
abstract_4 func4 (C1 v42);
// definitions
/* method id 400 */ C0::C0 () {
abstract_0 v0 = abstract_0();
abstract_0 v1 = abstract_0();
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ abstract_1* C1::func0 (abstract_0 v6) {
abstract_0 v7 = abstract_0();
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
return ((abstract_1*) 0);

}
/* method id 402 */ C1::C1 () {
abstract_0 v11 = abstract_0();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
return;

}
/* method id 404 */ C2::~C2 () {
abstract_0 v14 = abstract_0();
C1 v15 = *(((C1*) 0));
::func4(*((new C1 ())));
::func4(*((new C1 ())));
return;

}
C2::C2 (special_constructor)  {}

/* method id 405 */ abstract_1* C3::func0 (abstract_2 v20) {
::func4(*((new C1 ())));
::func4(*((new C1 ())));
::func4(*((new C1 ())));
::func4(*((new C1 ())));
return new abstract_1 ();

}
/* method id 406 */ C3::~C3 () {
abstract_2 v21 = abstract_2();
return;

}
/* method id 407 */ C3::C3 () {
abstract_0 v22 = abstract_0();
C1 v23 = *(((C1*) 0));
abstract_0 v24 = abstract_0();
abstract_0 v25 = abstract_0();
::func4(*((new C1 ())));
::func4(*((new C1 ())));
::func4(*((new C1 ())));
::func4(*((new C1 ())));
return;

}
/* method id 408 */ abstract_1 C3::func0 (C1 v26) {
abstract_2 v27 = abstract_2();
return abstract_1();

}
C3::C3 (special_constructor)  {}

abstract_4 func1 (abstract_2 v30) {
abstract_2 v31;

return abstract_4();

}
abstract_1 func2 (abstract_2 v32, abstract_0 v33, abstract_2 v34, abstract_3 v35) {
C1 v36;
abstract_5 v37;
abstract_5 v38;

return abstract_1();

}
abstract_1* func3 (abstract_0 v39) {
abstract_5 v40;
C1 v41;

return ((abstract_1*) 0);

}
abstract_4 func4 (C1 v42) {
C1 v43;
C1 v44;

return ::func1(abstract_2());

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var2: AbstractType{0}
4    | var3: AbstractType{0}
8    | var4: AbstractType{0}
12   | var5: AbstractType{0}
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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: AbstractType{0}
12   | var13: AbstractType{0}
16   +---
16   +--- (virtual base class C0)
16   | var2: AbstractType{0}
20   | var3: AbstractType{0}
24   | var4: AbstractType{0}
28   | var5: AbstractType{0}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
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
class C2    size(132)
0    +---
0    | {vfptr}
4    | var16: ClassType{1}
36   | var17: ClassType{1}
68   | var18: ClassType{1}
100  | var19: ClassType{1}
132  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 132;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | var28: ClassType{1}
36   | var29: AbstractType{3}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
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
