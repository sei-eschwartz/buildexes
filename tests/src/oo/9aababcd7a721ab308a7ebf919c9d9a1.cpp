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
struct C1 : public virtual C0 {
/* method id 401 */ void func1 (C0 v0);
/* method id 402 */ virtual void func0 (C0 v1);
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v2;
C0 v3;
C0 v4;
};
struct C2 : public virtual C1 {
/* method id 404 */ ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C0 v22;
C0 v23;
C0 v24;
C0 v25;
};
struct C3 : public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ virtual void func3 ();
/* method id 409 */ virtual void func4 ();
C3 (special_constructor);
abstract_0 v60;
abstract_1 v61;
C0 v62;
};
void func5 (abstract_0 v63, abstract_1 v64, abstract_0 v65, abstract_0 v66);
void func6 (abstract_0 v68, abstract_0 v69, abstract_0 v70, abstract_0 v71);
void func7 (abstract_0 v76, abstract_0 v77, abstract_1 v78, abstract_0 v79);
void func8 (abstract_1 v82);
// definitions
/* method id 400 */ C0::C0 () {
(&(*((new C3 ()))))->C3::func4();
(&(*((new C3 ()))))->C3::func4();
(&(*((new C3 ()))))->C3::func4();
(&(*((new C3 ()))))->C3::func4();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (C0 v0) {
return;

}
/* method id 402 */ void C1::func0 (C0 v1) {
return;

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::~C2 () {
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
return;

}
/* method id 405 */ C2::C2 () {
C0 v9 = *(((C0*) 0));
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
C0 v12 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0 v26 = *(&(*((new C0 ()))));
return;

}
/* method id 407 */ C3::~C3 () {
C0 v31 = *(((C0*) 0));
C0 v32 = *(((C0*) 0));
C0 v33 = *(((C0*) 0));
C0 v34 = *(((C0*) 0));
return;

}
/* method id 408 */ void C3::func3 () {
return (((C1*) 0))->C1::func0(v4);

}
/* method id 409 */ void C3::func4 () {
abstract_0 v56 = abstract_0();
abstract_1 v57 = abstract_1();
C0 v58 = *(((C0*) 0));
C0 v59 = *(((C0*) 0));
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func5 (abstract_0 v63, abstract_1 v64, abstract_0 v65, abstract_0 v66) {
abstract_0 v67;

return;

}
void func6 (abstract_0 v68, abstract_0 v69, abstract_0 v70, abstract_0 v71) {
abstract_0 v72;
abstract_0 v73;
abstract_1 v74;
abstract_0 v75;

delete (new C3 ());
return ::func7(v71, v71, v74, v71);

}
void func7 (abstract_0 v76, abstract_0 v77, abstract_1 v78, abstract_0 v79) {
abstract_0 v80;
abstract_0 v81;

delete (new C2 ());
return ::func6(v77, v77, v77, v77);

}
void func8 (abstract_1 v82) {

delete (new C1 ());
return ::func6(abstract_0(), abstract_0(), abstract_0(), abstract_0());

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
11   | alignment: 
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
class C2    size(20)
0    +---
0    | {vbptr}
4    | var22: ClassType{0}
5    | var23: ClassType{0}
6    | var24: ClassType{0}
7    | var25: ClassType{0}
8    +---
8    +--- (virtual base class C0)
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | {vbptr}
16   | var2: ClassType{0}
17   | var3: ClassType{0}
18   | var4: ClassType{0}
19   | alignment: 
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
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var60: AbstractType{0}
12   | var61: AbstractType{1}
16   | var62: ClassType{0}
17   | alignment: 
20   +---
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var2: ClassType{0}
29   | var3: ClassType{0}
30   | var4: ClassType{0}
31   | alignment: 
32   +---
32   +--- (virtual base class C2)
32   | {vbptr}
36   | var22: ClassType{0}
37   | var23: ClassType{0}
38   | var24: ClassType{0}
39   | var25: ClassType{0}
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
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
