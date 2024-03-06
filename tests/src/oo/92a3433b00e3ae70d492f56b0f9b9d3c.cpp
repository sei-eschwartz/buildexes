// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1** func0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual ~C0 ();
C0 (special_constructor);
abstract_1**** v1;
abstract_1**** v2;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
abstract_1**** v27;
abstract_1**** v28;
};
struct C2 : public virtual C1 {
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_1**** v55;
abstract_1**** v56;
abstract_1**** v57;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual abstract_1** func0 (abstract_1**** v62, abstract_1**** v63);
/* method id 409 */ abstract_0*** func0 (abstract_1**** v76, abstract_1**** v77, abstract_1**** v78, abstract_1**** v79);
/* method id 410 */ virtual ~C3 ();
C3 (special_constructor);
};
abstract_0* func1 ();
abstract_0** func2 (abstract_1**** v82, abstract_1**** v83);
abstract_1 func3 ();
abstract_0*** func4 (abstract_1**** v85);
// definitions
/* method id 400 */ abstract_1** C0::func0 () {
return new abstract_1* ();

}
/* method id 401 */ C0::C0 () {
abstract_1**** v0 = new abstract_1*** ();
::func2(new abstract_1*** (), new abstract_1*** ());
::func2(new abstract_1*** (), new abstract_1*** ());
::func2(new abstract_1*** (), new abstract_1*** ());
::func2(new abstract_1*** (), new abstract_1*** ());
return;

}
/* method id 402 */ C0::~C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_1**** v3 = new abstract_1*** ();
abstract_1**** v4 = new abstract_1*** ();
abstract_1**** v5 = new abstract_1*** ();
abstract_1**** v6 = new abstract_1*** ();
return;

}
/* method id 404 */ C1::~C1 () {
abstract_1**** v12 = new abstract_1*** ();
abstract_1**** v13 = new abstract_1*** ();
abstract_1**** v14 = new abstract_1*** ();
v27 = v12;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::~C2 () {
abstract_1**** v29 = new abstract_1*** ();
abstract_1**** v30 = new abstract_1*** ();
abstract_1**** v31 = new abstract_1*** ();
abstract_1**** v32 = new abstract_1*** ();
delete (new C1 ());
return;

}
/* method id 406 */ C2::C2 () {
abstract_1**** v33 = new abstract_1*** ();
abstract_1**** v34 = new abstract_1*** ();
abstract_1**** v35 = new abstract_1*** ();
abstract_1**** v36 = new abstract_1*** ();
v34 = new abstract_1*** ();
v34 = new abstract_1*** ();
v34 = new abstract_1*** ();
v34 = new abstract_1*** ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
abstract_1**** v58 = new abstract_1*** ();
abstract_1**** v59 = new abstract_1*** ();
abstract_1**** v60 = new abstract_1*** ();
abstract_1**** v61 = new abstract_1*** ();
::func2(new abstract_1*** (), new abstract_1*** ());
::func2(new abstract_1*** (), new abstract_1*** ());
delete (new C3 ());
return;

}
/* method id 408 */ abstract_1** C3::func0 (abstract_1**** v62, abstract_1**** v63) {
abstract_1**** v64 = new abstract_1*** ();
abstract_1**** v65 = new abstract_1*** ();
abstract_1**** v66 = new abstract_1*** ();
abstract_1**** v67 = new abstract_1*** ();
return new abstract_1* ();

}
/* method id 409 */ abstract_0*** C3::func0 (abstract_1**** v76, abstract_1**** v77, abstract_1**** v78, abstract_1**** v79) {
delete (new C2 ());
delete (new C3 ());
return ((abstract_0***) 0);

}
/* method id 410 */ C3::~C3 () {
abstract_1**** v80 = new abstract_1*** ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func1 () {
abstract_1**** v81;

return ((abstract_0*) 0);

}
abstract_0** func2 (abstract_1**** v82, abstract_1**** v83) {
abstract_1**** v84;

delete (new C0 ());
return new abstract_0* ();

}
abstract_1 func3 () {

delete (new C3 ());
return abstract_1();

}
abstract_0*** func4 (abstract_1**** v85) {
abstract_1**** v86;

::func2(new abstract_1*** (), new abstract_1*** ());
::func2(new abstract_1*** (), new abstract_1*** ());
return ((abstract_0***) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | {vbptr}
4    | var27: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
8    | var28: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
20   | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
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
class C2    size(40)
0    +---
0    | {vbptr}
4    | var55: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
8    | var56: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
12   | var57: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
24   | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var27: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
36   | var28: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
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
class C3    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var1: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
16   | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var27: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
28   | var28: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
32   +---
32   +--- (virtual base class C2)
32   | {vbptr}
36   | var55: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
40   | var56: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
44   | var57: DeletablePtrType{PtrType{DeletablePtrType{PtrType{AbstractType{1}}}}}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
