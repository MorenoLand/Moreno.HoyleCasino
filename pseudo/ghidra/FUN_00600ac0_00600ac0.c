// FUN_00600ac0  00600ac0

void __fastcall FUN_00600ac0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[6] != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    iVar2 = FUN_005eb220();
    if (iVar2 != iVar1) {
      if (param_1[5] < iVar1) {
        (**(code **)(*param_1 + 0x14))();
      }
      else {
        (**(code **)(*(int *)param_1[1] + 0xb0))(iVar1);
      }
    }
  }
  return;
}

