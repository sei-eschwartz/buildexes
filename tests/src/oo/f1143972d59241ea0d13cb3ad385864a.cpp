// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ virtual void func1 (void** v0, void** v1, void** v2, void** v3);
/* method id 403 */ void func1 (void** v7, void** v8, void** v9);
/* method id 404 */ void func2 (void** v11, void** v12);
/* method id 405 */ virtual void func1 (void** v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v16;
};
struct C2  {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual void func3 (abstract_0 v89, abstract_0 v90);
C2 (special_constructor);
abstract_0 v142;
abstract_0 v143;
abstract_1 v144;
abstract_1 v145;
};
struct C3  {
/* method id 410 */ C3 ();
/* method id 411 */ void func1 (abstract_0 v150, void** v151, abstract_0 v152);
/* method id 412 */ void func4 (abstract_0 v153, void** v154);
/* method id 413 */ virtual void func1 (void** v156);
C3 (special_constructor);
abstract_0 v158;
};
void func5 (abstract_4 v159, abstract_0 v160, abstract_0 v161, abstract_0 v162);
void func6 (abstract_0 v167, abstract_0 v168);
void func7 (abstract_0 v171, abstract_0 v172, abstract_0 v173, abstract_0 v174);
void func8 (abstract_0 v179, abstract_0 v180, abstract_0 v181, abstract_0 v182);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func1 (void** v0, void** v1, void** v2, void** v3) {
void** v4 = new void* ();
void** v5 = new void* ();
void** v6 = new void* ();
::func6(v16, v16);
::func6(v16, v16);
return ::func6(v16, v16);

}
/* method id 403 */ void C1::func1 (void** v7, void** v8, void** v9) {
void** v10 = new void* ();
return ::func6(v16, v16);

}
/* method id 404 */ void C1::func2 (void** v11, void** v12) {
abstract_0 v13 = abstract_0();
return ::func6(v13, v13);

}
/* method id 405 */ void C1::func1 (void** v14) {
abstract_0 v15 = abstract_0();
return ::func6(abstract_0(), abstract_0());

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
v21 = v21;
::func6(v21, v21);
::func6(v21, v21);
::func6(v21, v21);
return;

}
/* method id 409 */ void C2::func3 (abstract_0 v89, abstract_0 v90) {
abstract_1 v91 = abstract_1();
abstract_0 v92 = abstract_0();
abstract_0 v93 = abstract_0();
abstract_0 v94 = abstract_0();
delete (new C3 ());
return ::func6(v92, v92);

}
C2::C2 (special_constructor)  {}

/* method id 410 */ C3::C3 () {
abstract_0 v146 = abstract_0();
abstract_3 v147 = abstract_3();
abstract_3 v148 = abstract_3();
abstract_2 v149 = abstract_2();
::func6(v158, v158);
::func6(v158, v158);
::func6(v158, v158);
::func6(v158, v158);
return;

}
/* method id 411 */ void C3::func1 (abstract_0 v150, void** v151, abstract_0 v152) {
return ::func6(v152, v152);

}
/* method id 412 */ void C3::func4 (abstract_0 v153, void** v154) {
abstract_4 v155 = abstract_4();
return;

}
/* method id 413 */ void C3::func1 (void** v156) {
abstract_4 v157 = abstract_4();
return ::func6(v158, v158);

}
C3::C3 (special_constructor)  {}

void func5 (abstract_4 v159, abstract_0 v160, abstract_0 v161, abstract_0 v162) {
abstract_0 v163;
abstract_0 v164;
abstract_0 v165;
abstract_0 v166;

return;

}
void func6 (abstract_0 v167, abstract_0 v168) {
abstract_0 v169;
abstract_0 v170;

delete (new C2 ());
return ::func5(abstract_4(), v169, v169, v169);

}
void func7 (abstract_0 v171, abstract_0 v172, abstract_0 v173, abstract_0 v174) {
abstract_0 v175;
abstract_0 v176;
abstract_0 v177;
abstract_0 v178;

return;

}
void func8 (abstract_0 v179, abstract_0 v180, abstract_0 v181, abstract_0 v182) {
abstract_4 v183;
abstract_4 v184;
abstract_0 v185;
abstract_0 v186;

return;

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var16: AbstractType{0}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
0    | {vfptr}
4    | var142: AbstractType{0}
8    | var143: AbstractType{0}
12   | var144: AbstractType{1}
16   | var145: AbstractType{1}
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
}
/*
class C3    size(8)
0    +---
0    | {vfptr}
4    | var158: AbstractType{0}
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
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
