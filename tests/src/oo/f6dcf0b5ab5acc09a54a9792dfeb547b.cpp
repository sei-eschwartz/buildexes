// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

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
C0* v4;
C0** v5;
C0* v6;
};
struct C2 : public C0 {
/* method id 408 */ virtual C0* func6 ();
/* method id 409 */ C0* func4 (C0** v7, C0* v8);
/* method id 410 */ C2 ();
C2 (special_constructor);
C0** v25;
C0** v26;
C0** v27;
};
C0* func7 (C0** v28, C0** v29);
C0* func8 (C0** v34, C0** v35, C0** v36, C0* v37);
C0* func9 (C0* v42, C0* v43);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
C0* v0 = ((C0*) 0);
return ((C0*) 0);

}
/* method id 403 */ C0* C1::func1 () {
return ::func8(v5, v5, v5, v4);

}
/* method id 404 */ C0* C1::func3 (C0* v1) {
return v3;

}
/* method id 405 */ C0 C1::func3 () {
C0* v2 = (new C0 ());
return *(v3);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C0* C2::func6 () {
return ((C0*) 0);

}
/* method id 409 */ C0* C2::func4 (C0** v7, C0* v8) {
C0** v9 = ((C0**) 0);
C0** v10 = ((C0**) 0);
C0** v11 = ((C0**) 0);
C0** v12 = ((C0**) 0);
return v8;

}
/* method id 410 */ C2::C2 () {
C0** v13 = new C0* ();
C0* v14 = &(*(((C0*) 0)));
C0** v15 = new C0* ();
C0** v16 = new C0* ();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

C0* func7 (C0** v28, C0** v29) {
C0** v30;
C0** v31;
C0** v32;
C0** v33;

v33 = v32;
v33 = v32;
return ((C0*) 0);

}
C0* func8 (C0** v34, C0** v35, C0** v36, C0* v37) {
C0** v38;
C0** v39;
C0** v40;
C0** v41;

v38 = v35;
return ::func9(v37, v37);

}
C0* func9 (C0* v42, C0* v43) {
abstract_0 v44;
C0** v45;

(((C2*) 0))->C2::func4(new C0* (), v43);
(((C2*) 0))->C2::func4(new C0* (), v43);
(((C2*) 0))->C2::func4(new C0* (), v43);
(((C2*) 0))->C2::func4(new C0* (), v43);
return v43;

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
8    | var3: PtrType{ClassType{0}}
12   | var4: PtrType{ClassType{0}}
16   | var5: PtrType{PtrType{ClassType{0}}}
20   | var6: PtrType{ClassType{0}}
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
class C2    size(16)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var25: PtrType{PtrType{ClassType{0}}}
8    | var26: PtrType{PtrType{ClassType{0}}}
12   | var27: PtrType{PtrType{ClassType{0}}}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
