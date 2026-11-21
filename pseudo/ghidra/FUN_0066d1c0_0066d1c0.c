// FUN_0066d1c0  0066d1c0

void __fastcall FUN_0066d1c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[6] != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    iVar2 = FUN_005eb220();
    if (iVar2 != iVar1) {
      if (iVar1 == param_1[7]) {
        (**(code **)(*(int *)param_1[1] + 0xb0))(0);
      }
      else {
        (**(code **)(*(int *)param_1[1] + 0xb0))(iVar1);
      }
    }
  }
  return;
}

