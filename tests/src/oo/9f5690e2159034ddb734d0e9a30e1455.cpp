// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 409 */ C0 func1 (C0* v8, C0* v9, C0* v10, C0* v11);
/* method id 410 */ C2 ();
C2 (special_constructor);
C0* v16;
C0* v17;
C1 v18;
};
struct C3  {
/* method id 411 */ virtual C0* func7 (C1 v19, C1 v20, C0*** v21, C0*** v22);
/* method id 412 */ C3 ();
C3 (special_constructor);
};
C0* func9 (C1 v24, C1 v25, C1 v26, C1 v27);
C0* func10 (C0*** v31);
C0 func11 ();
// definitions
/* method id 400 */ C0::~C0 () {
(((C1*) 0))->C1::func3(&(::func11()));
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
v3 = v3;
v3 = v3;
delete (new C2 ());
v3 = v3;
return ((C0*) 0);

}
/* method id 404 */ C0* C1::func3 (C0* v1) {
return v1;

}
/* method id 405 */ C0 C1::func3 () {
C0* v2 = (new C0 ());
return *(v2);

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
return ((C0*) 0);

}
/* method id 409 */ C0 C2::func1 (C0* v8, C0* v9, C0* v10, C0* v11) {
C0* v12 = (C0*)(((C1*) 0));
C0* v13 = (C0*)(((C1*) 0));
C0* v14 = (new C0 ());
C0* v15 = (new C0 ());
return ::func11();

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C0* C3::func7 (C1 v19, C1 v20, C0*** v21, C0*** v22) {
C0* v23 = ((C0*) 0);
delete (new C0 ());
return v23;

}
/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

C0* func9 (C1 v24, C1 v25, C1 v26, C1 v27) {
C1 v28;
C0*** v29;
C0* v30;

::func11();
::func11();
::func11();
return v30;

}
C0* func10 (C0*** v31) {
C0* v32;
C1 v33;
C1 v34;
abstract_0 v35;

return v32;

}
C0 func11 () {
C1 v36;
C1 v37;

v37 = *(((C1*) 0));
v37 = *(((C1*) 0));
v37 = *(((C1*) 0));
v37 = *(((C1*) 0));
return *(((C0*) 0));

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
class C2    size(28)
0    +---
0    | {vfptr}
4    | var16: PtrType{ClassType{0}}
8    | var17: PtrType{ClassType{0}}
12   | var18: ClassType{1}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(4)
0    +---
0    | {vfptr}
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
