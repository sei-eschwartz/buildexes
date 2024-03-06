// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ virtual abstract_0 func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3);
C0 (special_constructor);
abstract_1 v8;
abstract_1 v9;
abstract_0** v10;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_1 v11, abstract_0** v12);
/* method id 404 */ C1 ();
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual abstract_0 func2 (abstract_1 v55, abstract_0** v56);
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ void func0 ();
C2 (special_constructor);
abstract_0*** v155;
};
struct C3  {
/* method id 410 */ abstract_0* func1 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
abstract_1 v156;
};
abstract_0* func3 ();
abstract_0* func4 (abstract_1 v160);
// definitions
/* method id 400 */ C0::C0 () {
v9 = v9;
v9 = v9;
v9 = v9;
return;

}
/* method id 401 */ C0::~C0 () {
return;

}
/* method id 402 */ abstract_0 C0::func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3) {
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
abstract_0** v7 = new abstract_0* ();
delete (new C1 ());
return abstract_0();

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_1 v11, abstract_0** v12) {
abstract_1 v13 = abstract_1();
abstract_1 v14 = abstract_1();
abstract_0** v15 = new abstract_0* ();
abstract_1 v16 = abstract_1();
delete (new C1 ());
return abstract_0();

}
/* method id 404 */ C1::C1 () {
abstract_1 v17 = abstract_1();
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_1 v20 = abstract_1();
v8 = v17;
v8 = v17;
v8 = v17;
v8 = v17;
return;

}
/* method id 405 */ C1::~C1 () {
abstract_1 v21 = abstract_1();
abstract_1 v22 = abstract_1();
abstract_1 v23 = abstract_1();
abstract_1 v24 = abstract_1();
v22 = v8;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_0 C2::func2 (abstract_1 v55, abstract_0** v56) {
abstract_1 v57 = abstract_1();
abstract_1 v58 = abstract_1();
abstract_0** v59 = new abstract_0* ();
abstract_1 v60 = abstract_1();
return (((C1*) 0))->C1::func0(v55, v59);

}
/* method id 407 */ C2::C2 () {
abstract_1 v61 = abstract_1();
abstract_1 v62 = abstract_1();
abstract_1 v63 = abstract_1();
abstract_1 v64 = abstract_1();
::func4(abstract_1());
return;

}
/* method id 408 */ C2::~C2 () {
abstract_1 v65 = abstract_1();
abstract_1 v66 = abstract_1();
abstract_1 v67 = abstract_1();
abstract_1 v68 = abstract_1();
v68 = v8;
return;

}
/* method id 409 */ void C2::func0 () {
abstract_1 v152 = abstract_1();
abstract_1 v153 = abstract_1();
abstract_1 v154 = abstract_1();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ abstract_0* C3::func1 () {
delete (new C1 ());
v156 = v156;
return ((abstract_0*) 0);

}
/* method id 411 */ C3::C3 () {
v156 = v156;
v156 = v156;
v156 = v156;
v156 = v156;
return;

}
C3::C3 (special_constructor)  {}

abstract_0* func3 () {
abstract_1 v157;
abstract_2 v158;
abstract_1 v159;

(((C1*) 0))->C1::func0(v157, new abstract_0* ());
(((C1*) 0))->C1::func0(v157, new abstract_0* ());
(((C1*) 0))->C1::func0(v157, new abstract_0* ());
return ::func4(v157);

}
abstract_0* func4 (abstract_1 v160) {
abstract_2 v161;
abstract_3 v162;
abstract_1 v163;
abstract_3 v164;

return ((abstract_0*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var8: AbstractType{1}
8    | var9: AbstractType{1}
12   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var8: AbstractType{1}
16   | var9: AbstractType{1}
20   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var155: PtrType{PtrType{PtrType{AbstractType{0}}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var8: AbstractType{1}
20   | var9: AbstractType{1}
24   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(4)
0    +---
0    | var156: AbstractType{1}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
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
