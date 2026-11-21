// FUN_005629a0  005629a0

undefined4 __fastcall FUN_005629a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0062fc30(0,5,param_1);
  if ((iVar1 < 0) || (5 < iVar1)) {
    FUN_005e9f20("drum>=0 && drum<=5","..\\Casino\\vpmdisplay.cpp",0x444);
  }
  return *(undefined4 *)(&DAT_00743e90 + iVar1 * 4);
}

