// FID_conflict:~ctype<char>  00627100

/* Library Function - Multiple Matches With Different Base Names
    protected: virtual __thiscall std::_Mpunct<char>::~_Mpunct<char>(void)
    protected: virtual __thiscall std::_Mpunct<unsigned short>::~_Mpunct<unsigned short>(void)
    protected: virtual __thiscall std::_Mpunct<wchar_t>::~_Mpunct<wchar_t>(void)
    protected: virtual __thiscall std::ctype<char>::~ctype<char>(void)
     33 names - too many to list
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __fastcall FID_conflict__ctype<char>(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab4b8;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciLine::vftable;
  local_8 = 0;
  FUN_00627c00(uVar1);
  local_8 = 0xffffffff;
  FUN_005f4ad0();
  ExceptionList = local_10;
  return;
}

