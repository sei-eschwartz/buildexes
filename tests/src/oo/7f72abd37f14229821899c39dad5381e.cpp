// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual void func0 (C0 v8, C0 v9);
/* method id 405 */ virtual ~C2 ();
C2 (special_constructor);
};
struct C3 : public C1, public virtual C0 {
/* method id 406 */ virtual void func2 (C2 v11, C2 v12, C2 v13, C2 v14);
/* method id 407 */ virtual ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
};
void func5 ();
void func6 (C0 v20);
void func7 (C0 v22, C2 v23, void** v24, void* v25);
void func8 (C2 v30, C2 v31, C2 v32, C2 v33);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
delete (new C0 ());
return ::func6(v1);

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
delete (new C3 ());
return;

}
/* method id 404 */ void C2::func0 (C0 v8, C0 v9) {
C0 v10 = *(&(*(((C0*) 0))));
return ::func6(v9);

}
/* method id 405 */ C2::~C2 () {
v1 = *(&(v2));
v1 = *(&(v2));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ void C3::func2 (C2 v11, C2 v12, C2 v13, C2 v14) {
return ::func6(v2);

}
/* method id 407 */ C3::~C3 () {
C2 v15 = *(&(*(((C2*) 0))));
void* v16 = ((void*) 0);
C2 v17 = *(&(*(((C2*) 0))));
C0 v18 = *(&(*(((C0*) 0))));
return;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

void func5 () {
C2 v19;

return ::func6(*(&(*(((C0*) 0)))));

}
void func6 (C0 v20) {
void* v21;

delete (new C2 ());
v21 = v21;
v21 = v21;
return;

}
void func7 (C0 v22, C2 v23, void** v24, void* v25) {
void** v26;
C0 v27;
C0 v28;
C0 v29;

delete (new C1 ());
return;

}
void func8 (C2 v30, C2 v31, C2 v32, C2 v33) {
C2 v34;
C0 v35;
void** v36;
C2 v37;

return ::func5();

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
class C1    size(3)
0    +---
0    | var1: ClassType{0}
1    | var2: ClassType{0}
2    | var3: ClassType{0}
3    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 3;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(11)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | var1: ClassType{0}
9    | var2: ClassType{0}
10   | var3: ClassType{0}
11   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 11;
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
class C3    size(12)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var1: ClassType{0}
5    | | var2: ClassType{0}
6    | | var3: ClassType{0}
7    | +---
7    | alignment: VBPtr aligned to pointer size
8    | {vbptr}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 12;
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
