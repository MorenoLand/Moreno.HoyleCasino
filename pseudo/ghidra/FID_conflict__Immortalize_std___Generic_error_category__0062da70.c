// FID_conflict:_Immortalize<std::_Generic_error_category>  0062da70

/* Library Function - Multiple Matches With Different Base Names
    class std::_Generic_error_category & __cdecl std::_Immortalize<class
   std::_Generic_error_category>(void)
    class std::_Iostream_error_category & __cdecl std::_Immortalize<class
   std::_Iostream_error_category>(void)
    class std::_System_error_category & __cdecl std::_Immortalize<class
   std::_System_error_category>(void)
    struct _AFX_AYGSHELL_STATE & __cdecl _AfxAygshellState(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2015 Debug, Visual
   Studio 2015 Release */

undefined * FID_conflict__Immortalize<std::_Generic_error_category>(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab74e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_0162ee60 & 1) == 0) {
    DAT_0162ee60 = DAT_0162ee60 | 1;
    local_8 = 0;
    FUN_0062d8f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
    FUN_00686f8f(FUN_006b1b40);
  }
  ExceptionList = local_10;
  return &DAT_0162ee20;
}

