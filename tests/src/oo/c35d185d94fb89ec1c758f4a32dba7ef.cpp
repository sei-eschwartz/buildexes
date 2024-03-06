// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ void** func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0** v0;
abstract_0** v1;
abstract_0** v2;
abstract_0** v3;
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
/* method id 403 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0** v16;
abstract_0** v17;
abstract_0** v18;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
abstract_0** v31;
abstract_0** v32;
};
abstract_0* func3 (abstract_0** v33, abstract_0** v34, abstract_0** v35, abstract_0** v36);
abstract_0* func4 (abstract_0** v41, abstract_0** v42, abstract_0** v43);
abstract_0* func5 (abstract_0** v47, abstract_0** v48);
void** func6 (abstract_0** v53, abstract_0** v54, abstract_0** v55, abstract_0** v56);
// definitions
/* method id 400 */ void** C0::func0 () {
return ((void**) 0);

}
/* method id 401 */ C0::C0 () {
::func4(v3, v3, v3);
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
abstract_0** v4 = ((abstract_0**) 0);
abstract_0** v5 = ((abstract_0**) 0);
abstract_0** v6 = ((abstract_0**) 0);
abstract_0** v7 = ((abstract_0**) 0);
::func4(v17, v17, v17);
::func4(v17, v17, v17);
::func4(v17, v17, v17);
return;

}
/* method id 403 */ C1::~C1 () {
abstract_0** v12 = new abstract_0* ();
abstract_0** v13 = new abstract_0* ();
abstract_0** v14 = new abstract_0* ();
abstract_0** v15 = new abstract_0* ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
abstract_0** v19 = new abstract_0* ();
abstract_0** v20 = new abstract_0* ();
abstract_0** v21 = new abstract_0* ();
abstract_0** v22 = new abstract_0* ();
::func4(v17, v17, v17);
::func4(v17, v17, v17);
::func4(v17, v17, v17);
::func4(v17, v17, v17);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
::func4(v0, v0, v0);
::func4(v0, v0, v0);
::func4(v0, v0, v0);
::func4(v0, v0, v0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func3 (abstract_0** v33, abstract_0** v34, abstract_0** v35, abstract_0** v36) {
abstract_0** v37;
abstract_0** v38;
abstract_0** v39;
abstract_0** v40;

return ((abstract_0*) 0);

}
abstract_0* func4 (abstract_0** v41, abstract_0** v42, abstract_0** v43) {
abstract_0** v44;
abstract_0** v45;
abstract_0** v46;

return new abstract_0 ();

}
abstract_0* func5 (abstract_0** v47, abstract_0** v48) {
abstract_0** v49;
abstract_0** v50;
abstract_0** v51;
abstract_0** v52;

return new abstract_0 ();

}
void** func6 (abstract_0** v53, abstract_0** v54, abstract_0** v55, abstract_0** v56) {
abstract_0** v57;
abstract_0** v58;
abstract_0** v59;
abstract_0** v60;

return ((void**) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: PtrType{PtrType{AbstractType{0}}}
4    | var1: PtrType{PtrType{AbstractType{0}}}
8    | var2: PtrType{PtrType{AbstractType{0}}}
12   | var3: PtrType{PtrType{AbstractType{0}}}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var16: PtrType{PtrType{AbstractType{0}}}
12   | var17: PtrType{PtrType{AbstractType{0}}}
16   | var18: PtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: PtrType{PtrType{AbstractType{0}}}
24   | var1: PtrType{PtrType{AbstractType{0}}}
28   | var2: PtrType{PtrType{AbstractType{0}}}
32   | var3: PtrType{PtrType{AbstractType{0}}}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
4    +---
4    +--- (virtual base class C0)
4    | var0: PtrType{PtrType{AbstractType{0}}}
8    | var1: PtrType{PtrType{AbstractType{0}}}
12   | var2: PtrType{PtrType{AbstractType{0}}}
16   | var3: PtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var16: PtrType{PtrType{AbstractType{0}}}
32   | var17: PtrType{PtrType{AbstractType{0}}}
36   | var18: PtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 20;
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
0    | | {vbptr}
4    | +---
4    | var31: PtrType{PtrType{AbstractType{0}}}
8    | var32: PtrType{PtrType{AbstractType{0}}}
12   +---
12   +--- (virtual base class C0)
12   | var0: PtrType{PtrType{AbstractType{0}}}
16   | var1: PtrType{PtrType{AbstractType{0}}}
20   | var2: PtrType{PtrType{AbstractType{0}}}
24   | var3: PtrType{PtrType{AbstractType{0}}}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var16: PtrType{PtrType{AbstractType{0}}}
40   | var17: PtrType{PtrType{AbstractType{0}}}
44   | var18: PtrType{PtrType{AbstractType{0}}}
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
