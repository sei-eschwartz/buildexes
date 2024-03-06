// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
};
struct C2  {
/* method id 402 */ C2 ();
C2 (special_constructor);
C0 v2;
C0 v3;
abstract_0* v4;
abstract_0* v5;
};
struct C3 : public C1, public C2, public C0 {
/* method id 403 */ virtual ~C3 ();
/* method id 404 */ virtual abstract_0 func2 (abstract_0* v9, abstract_0* v10, abstract_0* v11);
/* method id 405 */ C3 ();
C3 (special_constructor);
abstract_0* v41;
abstract_0* v42;
abstract_0* v43;
};
abstract_0 func3 (abstract_0* v44, abstract_0* v45, abstract_0* v46, abstract_0* v47);
abstract_0 func4 (abstract_0* v49, abstract_1 v50, abstract_0* v51, abstract_0* v52);
abstract_0 func5 (abstract_0* v53, abstract_0* v54);
abstract_0 func6 (abstract_0* v57, abstract_0* v58, abstract_0* v59, abstract_0* v60);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 403 */ C3::~C3 () {
abstract_0* v6 = ((abstract_0*) 0);
abstract_0* v7 = ((abstract_0*) 0);
C0 v8 = *(((C0*) 0));
return;

}
/* method id 404 */ abstract_0 C3::func2 (abstract_0* v9, abstract_0* v10, abstract_0* v11) {
C0 v12 = *(&(*((new C0 ()))));
abstract_0* v13 = new abstract_0 ();
return ::func4(v9, abstract_1(), v9, v9);

}
/* method id 405 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()), C0(special_constructor ()) {}

abstract_0 func3 (abstract_0* v44, abstract_0* v45, abstract_0* v46, abstract_0* v47) {
abstract_0* v48;

return ::func5(new abstract_0 (), new abstract_0 ());

}
abstract_0 func4 (abstract_0* v49, abstract_1 v50, abstract_0* v51, abstract_0* v52) {

return abstract_0();

}
abstract_0 func5 (abstract_0* v53, abstract_0* v54) {
abstract_0* v55;
abstract_0* v56;

return abstract_0();

}
abstract_0 func6 (abstract_0* v57, abstract_0* v58, abstract_0* v59, abstract_0* v60) {
abstract_0* v61;
abstract_0* v62;
abstract_0* v63;
abstract_0* v64;

return ::func4(v57, abstract_1(), v57, v57);

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
class C1    size(2)
0    +---
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 2;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | var2: ClassType{0}
1    | var3: ClassType{0}
2    | alignment: 
4    | var4: PtrType{AbstractType{0}}
8    | var5: PtrType{AbstractType{0}}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(36)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var0: ClassType{0}
5    | | var1: ClassType{0}
6    | +---
6    | alignment: 
8    | +--- (base class C2)
8    | | var2: ClassType{0}
9    | | var3: ClassType{0}
10   | | alignment: 
12   | | var4: PtrType{AbstractType{0}}
16   | | var5: PtrType{AbstractType{0}}
20   | +---
20   | alignment: Additional padding between non-virtual bases
21   | +--- (base class C0)
21   | +---
21   | alignment: 
24   | var41: PtrType{AbstractType{0}}
28   | var42: PtrType{AbstractType{0}}
32   | var43: PtrType{AbstractType{0}}
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
 const size_t model_offset = 4;
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 21;
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
