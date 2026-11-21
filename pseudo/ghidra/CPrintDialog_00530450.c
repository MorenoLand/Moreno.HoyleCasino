// CPrintDialog  00530450

/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall CPrintDialog::CPrintDialog(struct tagPDA &)
    protected: __thiscall CPrintDialog::CPrintDialog(struct tagPDW &)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2005 Debug, Visual Studio 2008 Debug */

undefined4 * __thiscall CPrintDialog(undefined4 *param_1,undefined4 param_2)

{
  FUN_005fc0d0(0);
  *param_1 = MoveReelUpScript::vftable;
  param_1[8] = param_2;
  return param_1;
}

