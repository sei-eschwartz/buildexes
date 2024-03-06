// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
void** v4;
void** v5;
void** v6;
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
void** v39;
void** v40;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
C2 (special_constructor);
void** v41;
void** v42;
void** v43;
void** v44;
};
struct C3 : public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
C3 (special_constructor);
void** v76;
void** v77;
};
void* func3 (void** v78, void** v79, void** v80, void** v81);
void* func4 (void** v86, void** v87, void** v88);
void* func5 (void** v92, void** v93);
void** func6 (void** v98, void** v99);
// definitions
/* method id 400 */ C0::C0 () {
void** v0 = new void* ();
void** v1 = new void* ();
void** v2 = new void* ();
void** v3 = new void* ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
void** v7 = ((void**) 0);
void** v8 = ((void**) 0);
void** v9 = ((void**) 0);
void** v10 = ((void**) 0);
::func4(v4, v4, v4);
::func4(v4, v4, v4);
::func4(v4, v4, v4);
::func4(v4, v4, v4);
return;

}
/* method id 402 */ C1::~C1 () {
void** v20 = ((void**) 0);
void** v21 = ((void**) 0);
void** v22 = ((void**) 0);
::func4(v4, v4, v4);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
void** v45 = ((void**) 0);
void** v46 = ((void**) 0);
void** v47 = ((void**) 0);
void** v48 = ((void**) 0);
::func4(v4, v4, v4);
::func4(v4, v4, v4);
::func4(v4, v4, v4);
::func4(v4, v4, v4);
return;

}
/* method id 406 */ C3::~C3 () {
void** v57 = ((void**) 0);
void** v58 = ((void**) 0);
void** v59 = ((void**) 0);
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func3 (void** v78, void** v79, void** v80, void** v81) {
void** v82;
void** v83;
void** v84;
void** v85;

return ((void*) 0);

}
void* func4 (void** v86, void** v87, void** v88) {
void** v89;
void** v90;
void** v91;

delete (new C1 ());
return ((void*) 0);

}
void* func5 (void** v92, void** v93) {
void** v94;
void** v95;
void** v96;
void** v97;

return ((void*) 0);

}
void** func6 (void** v98, void** v99) {
void** v100;
void** v101;
void** v102;

::func4(v101, v101, v101);
::func4(v101, v101, v101);
::func4(v101, v101, v101);
return v101;

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | var4: PtrType{PtrType{VoidType{}}}
4    | var5: PtrType{PtrType{VoidType{}}}
8    | var6: PtrType{PtrType{VoidType{}}}
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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var39: PtrType{PtrType{VoidType{}}}
12   | var40: PtrType{PtrType{VoidType{}}}
16   +---
16   +--- (virtual base class C0)
16   | var4: PtrType{PtrType{VoidType{}}}
20   | var5: PtrType{PtrType{VoidType{}}}
24   | var6: PtrType{PtrType{VoidType{}}}
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
class C2    size(48)
0    +---
0    | {vbptr}
4    | var41: PtrType{PtrType{VoidType{}}}
8    | var42: PtrType{PtrType{VoidType{}}}
12   | var43: PtrType{PtrType{VoidType{}}}
16   | var44: PtrType{PtrType{VoidType{}}}
20   +---
20   +--- (virtual base class C0)
20   | var4: PtrType{PtrType{VoidType{}}}
24   | var5: PtrType{PtrType{VoidType{}}}
28   | var6: PtrType{PtrType{VoidType{}}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var39: PtrType{PtrType{VoidType{}}}
44   | var40: PtrType{PtrType{VoidType{}}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vbptr}
4    | var76: PtrType{PtrType{VoidType{}}}
8    | var77: PtrType{PtrType{VoidType{}}}
12   +---
12   +--- (virtual base class C0)
12   | var4: PtrType{PtrType{VoidType{}}}
16   | var5: PtrType{PtrType{VoidType{}}}
20   | var6: PtrType{PtrType{VoidType{}}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var39: PtrType{PtrType{VoidType{}}}
36   | var40: PtrType{PtrType{VoidType{}}}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
44   | var41: PtrType{PtrType{VoidType{}}}
48   | var42: PtrType{PtrType{VoidType{}}}
52   | var43: PtrType{PtrType{VoidType{}}}
56   | var44: PtrType{PtrType{VoidType{}}}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
