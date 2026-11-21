// ~CGestureConfig  00623840

/* Library Function - Single Match
    public: virtual __thiscall CGestureConfig::~CGestureConfig(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CGestureConfig::~CGestureConfig(CGestureConfig *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab3eb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = FrameBuffer::vftable;
  local_8 = 0;
  operator_delete(*(void **)(this + 0x1c));
  local_8 = 0xffffffff;
  FUN_0062aef0(uVar1);
  ExceptionList = local_10;
  return;
}

