// FUN_00643dc0  00643dc0

void __fastcall FUN_00643dc0(int *param_1)

{
  undefined4 uVar1;
  
  if ((short)param_1[100] == 0) {
    FUN_005eb5a0();
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xcc))();
    FUN_005eaf00(uVar1);
    uVar1 = (**(code **)(*param_1 + 0xd0))();
    (**(code **)(*param_1 + 0xb0))(uVar1);
    FUN_005eb570();
  }
  return;
}

