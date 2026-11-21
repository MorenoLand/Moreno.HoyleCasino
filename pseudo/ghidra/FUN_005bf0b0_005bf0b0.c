// FUN_005bf0b0  005bf0b0

void __fastcall FUN_005bf0b0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005eb220();
  if (iVar1 == param_1[7]) {
    (**(code **)(*param_1 + 0x14))();
  }
  else {
    FUN_00600e30();
  }
  if (-1 < param_1[8]) {
    iVar1 = FUN_005f3e50();
    if (param_1[8] <= iVar1) {
      FUN_006005d0();
    }
  }
  return;
}

