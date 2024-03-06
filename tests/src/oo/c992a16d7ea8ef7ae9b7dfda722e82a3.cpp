// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ void func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void**** v2;
void**** v3;
void**** v4;
void**** v5;
};
struct C2 : public virtual C0, public C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual C0 func1 (C1 v8);
/* method id 410 */ virtual void** func4 (C1 v9, abstract_0 v10, abstract_0 v11, abstract_0 v12);
C2 (special_constructor);
C1 v15;
C1 v16;
C1 v17;
C1 v18;
};
struct C3 : public virtual C0, public C2 {
/* method id 411 */ C3 ();
/* method id 412 */ virtual void**** func1 ();
/* method id 413 */ virtual void** func0 (C1 v32, C1 v33);
/* method id 414 */ ~C3 ();
C3 (special_constructor);
C1 v46;
C1 v47;
C1 v48;
C1 v49;
};
void** func5 (C1 v50, abstract_0 v51, C3 v52, C3 v53);
void** func6 (C1 v55, C1 v56, C1 v57, C1 v58);
void** func7 (C1 v63, C1 v64, C1 v65, C1 v66);
void** func8 (C3 v71, C1 v72, C1 v73, C1 v74);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C3 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
v4 = new void*** ();
return ((void***) 0);

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
delete (new C3 ());
v3 = v3;
return new void*** ();

}
/* method id 404 */ void C1::func0 () {
delete (new C1 ());
v4 = new void*** ();
return;

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
void**** v6 = new void*** ();
return;

}
/* method id 408 */ C2::C2 () {
C1 v7 = *(((C1*) 0));
return;

}
/* method id 409 */ C0 C2::func1 (C1 v8) {
return *(((C0*) 0));

}
/* method id 410 */ void** C2::func4 (C1 v9, abstract_0 v10, abstract_0 v11, abstract_0 v12) {
C1 v13 = *((new C1 ()));
void**** v14 = new void*** ();
return new void* ();

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 411 */ C3::C3 () {
C1 v19 = *((new C1 ()));
abstract_1 v20 = abstract_1();
abstract_1 v21 = abstract_1();
C2 v22 = *(((C2*) 0));
return;

}
/* method id 412 */ void**** C3::func1 () {
C1 v23 = *(((C1*) 0));
C1 v24 = *(((C1*) 0));
C1 v25 = *(((C1*) 0));
C1 v26 = *(((C1*) 0));
delete (new C1 ());
return new void*** ();

}
/* method id 413 */ void** C3::func0 (C1 v32, C1 v33) {
C1 v34 = *(((C1*) 0));
C1 v35 = *(((C1*) 0));
C1 v36 = *(((C1*) 0));
C1 v37 = *(((C1*) 0));
return new void* ();

}
/* method id 414 */ C3::~C3 () {
C1 v42 = *(((C1*) 0));
C1 v43 = *(((C1*) 0));
C1 v44 = *(((C1*) 0));
C1 v45 = *(((C1*) 0));
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

void** func5 (C1 v50, abstract_0 v51, C3 v52, C3 v53) {
C3 v54;

delete (new C1 ());
return new void* ();

}
void** func6 (C1 v55, C1 v56, C1 v57, C1 v58) {
C1 v59;
C1 v60;
C3 v61;
C3 v62;

v55 = v55;
return new void* ();

}
void** func7 (C1 v63, C1 v64, C1 v65, C1 v66) {
C1 v67;
C1 v68;
C1 v69;
C3 v70;

return new void* ();

}
void** func8 (C3 v71, C1 v72, C1 v73, C1 v74) {
C1 v75;

return new void* ();

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(140)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   | +---
24   | var15: ClassType{1}
52   | var16: ClassType{1}
80   | var17: ClassType{1}
108  | var18: ClassType{1}
136  +---
136  +--- (virtual base class C0)
136  | {vfptr}
140  +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 140;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 136;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(252)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vfptr}
4    | | | {vbptr}
8    | | | var2: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | | | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   | | +---
24   | | var15: ClassType{1}
52   | | var16: ClassType{1}
80   | | var17: ClassType{1}
108  | | var18: ClassType{1}
136  | +---
136  | var46: ClassType{1}
164  | var47: ClassType{1}
192  | var48: ClassType{1}
220  | var49: ClassType{1}
248  +---
248  +--- (virtual base class C0)
248  | {vfptr}
252  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 252;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 248;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
