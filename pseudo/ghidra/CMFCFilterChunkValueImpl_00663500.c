// CMFCFilterChunkValueImpl  00663500

/* Library Function - Single Match
    public: __thiscall CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl(void)
   
   Library: Visual Studio 2010 Debug */

CMFCFilterChunkValueImpl * __thiscall
CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl(CMFCFilterChunkValueImpl *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acb03;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e9e20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *(undefined ***)this = FaceSettings::vftable;
  FUN_0060c5f0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00663a30();
  ExceptionList = local_10;
  return this;
}

