// ~time_put<>  006763b0

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::~time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >(void)
    protected: virtual __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::~time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(void)
    protected: virtual __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::~time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug, Visual
   Studio 2010 Release */

void __fastcall ~time_put<>(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad584;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ResNumber::vftable;
  local_8 = 0;
  FUN_00676430(uVar1);
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

