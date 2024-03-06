// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 (abstract_1** v4, abstract_0 v5);
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_1** v14;
};
struct C1 : public virtual C0 {
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual abstract_1 func0 (abstract_1** v20, abstract_0 v21);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v22;
abstract_2 v23;
};
abstract_1 func2 (abstract_1* v24, abstract_0 v25, abstract_1* v26, abstract_0 v27);
abstract_1* func3 (abstract_1** v29, abstract_0 v30);
abstract_1* func4 (C0 v31);
abstract_1* func5 (abstract_3 v32, abstract_1** v33, abstract_1** v34, abstract_0 v35);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return ::func2(((abstract_1*) 0), v0, ((abstract_1*) 0), v0);

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return ::func2(((abstract_1*) 0), v1, ((abstract_1*) 0), v1);

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_0 v5) {
abstract_1** v6 = new abstract_1* ();
abstract_1** v7 = new abstract_1* ();
abstract_1** v8 = new abstract_1* ();
abstract_1** v9 = new abstract_1* ();
return ::func2(((abstract_1*) 0), v5, ((abstract_1*) 0), v5);

}
/* method id 403 */ C0::C0 () {
abstract_1** v10 = new abstract_1* ();
abstract_1** v11 = new abstract_1* ();
abstract_0 v12 = abstract_0();
abstract_1** v13 = new abstract_1* ();
return;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::~C1 () {
abstract_1** v15 = new abstract_1* ();
abstract_1** v16 = new abstract_1* ();
abstract_1** v17 = new abstract_1* ();
abstract_1** v18 = new abstract_1* ();
return;

}
/* method id 405 */ abstract_1 C1::func0 (abstract_1** v20, abstract_0 v21) {
return ::func2(((abstract_1*) 0), v22, ((abstract_1*) 0), v22);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func2 (abstract_1* v24, abstract_0 v25, abstract_1* v26, abstract_0 v27) {
C0 v28;

return (((C1*) 0))->C1::func0(new abstract_1* (), v25);

}
abstract_1* func3 (abstract_1** v29, abstract_0 v30) {

return ((abstract_1*) 0);

}
abstract_1* func4 (C0 v31) {

return ((abstract_1*) 0);

}
abstract_1* func5 (abstract_3 v32, abstract_1** v33, abstract_1** v34, abstract_0 v35) {

return ::func4(*(((C0*) 0)));

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var14: DeletablePtrType{PtrType{AbstractType{1}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
8    | var22: AbstractType{0}
12   | var23: AbstractType{2}
16   | {vtordisp for vbase 0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var14: DeletablePtrType{PtrType{AbstractType{1}}}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
