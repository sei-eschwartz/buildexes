// type for special constructors
struct special_constructor {};
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
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual C0* func1 ();
/* method id 404 */ virtual C0* func3 (C0* v1);
/* method id 405 */ virtual C0 func3 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
C0* v3;
};
struct C2  {
/* method id 408 */ virtual C0* func1 ();
/* method id 409 */ C0 func6 (C0* v8, C0* v9, C0* v10, C0* v11);
/* method id 410 */ C2 ();
/* method id 411 */ C0 func1 (C0* v20, C0* v21, C0* v22);
C2 (special_constructor);
C0* v27;
C0* v28;
C0* v29;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 412 */ virtual ~C3 ();
/* method id 413 */ C3 ();
C3 (special_constructor);
C0* v38;
C0* v39;
C0* v40;
C0* v41;
};
C0* func8 (C0* v42, C0* v43, C0* v44);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
C0* v0 = ((C0*) 0);
return v3;

}
/* method id 403 */ C0* C1::func1 () {
v3 = (new C0 ());
v3 = (new C0 ());
return v3;

}
/* method id 404 */ C0* C1::func3 (C0* v1) {
return (C0*)((C1*)(((C3*) 0)));

}
/* method id 405 */ C0 C1::func3 () {
C0* v2 = (new C0 ());
return *(v3);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C0* C2::func1 () {
C0* v4 = &((((C1*) 0))->C1::func3());
C0* v5 = &((((C1*) 0))->C1::func3());
C0* v6 = &((((C1*) 0))->C1::func3());
C0* v7 = &((((C1*) 0))->C1::func3());
delete (new C0 ());
return v27;

}
/* method id 409 */ C0 C2::func6 (C0* v8, C0* v9, C0* v10, C0* v11) {
C0* v12 = (C0*)(((C1*) 0));
C0* v13 = (C0*)(((C1*) 0));
C0* v14 = ((C0*) 0);
C0* v15 = (C0*)((new C1 ()));
delete (new C0 ());
return *(&(*(v15)));

}
/* method id 410 */ C2::C2 () {
C0* v16 = ((C0*) 0);
C0* v17 = ((C0*) 0);
C0* v18 = ((C0*) 0);
C0* v19 = ((C0*) 0);
return;

}
/* method id 411 */ C0 C2::func1 (C0* v20, C0* v21, C0* v22) {
C0* v23 = &(*(((C0*) 0)));
C0* v24 = &(*(((C0*) 0)));
C0* v25 = &(*(((C0*) 0)));
C0* v26 = &(*(((C0*) 0)));
delete (new C1 ());
return ((new C1 ()))->C1::func3();

}
C2::C2 (special_constructor)  {}

/* method id 412 */ C3::~C3 () {
C0* v30 = &(*(((C0*) 0)));
C0* v31 = &(*(((C0*) 0)));
C0* v32 = &(*(((C0*) 0)));
C0* v33 = &(*(((C0*) 0)));
return;

}
/* method id 413 */ C3::C3 () {
C0* v34 = &(*(((C0*) 0)));
C0* v35 = &(*(((C0*) 0)));
C0* v36 = &(*(((C0*) 0)));
C0* v37 = &(*(((C0*) 0)));
::func8((new C0 ()), (new C0 ()), (new C0 ()));
::func8((new C0 ()), (new C0 ()), (new C0 ()));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0* func8 (C0* v42, C0* v43, C0* v44) {
C0* v45;
C0* v46;
C0* v47;
C0* v48;

return ((C0*) 0);

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var3: PtrType{ClassType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | var27: PtrType{ClassType{0}}
8    | var28: PtrType{ClassType{0}}
12   | var29: PtrType{ClassType{0}}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(52)
0    +---
0    | {vbptr}
4    | var38: PtrType{ClassType{0}}
8    | var39: PtrType{ClassType{0}}
12   | var40: PtrType{ClassType{0}}
16   | var41: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var3: PtrType{ClassType{0}}
36   +---
36   +--- (virtual base class C2)
36   | {vfptr}
40   | var27: PtrType{ClassType{0}}
44   | var28: PtrType{ClassType{0}}
48   | var29: PtrType{ClassType{0}}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 36;
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
