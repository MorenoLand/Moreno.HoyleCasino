// FUN_00443ae0  00443ae0

void __fastcall FUN_00443ae0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((char)param_1[6] != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    iVar2 = FUN_005eb220();
    if (iVar2 != iVar1) {
      if (iVar1 == param_1[7]) {
        (**(code **)(*(int *)param_1[1] + 0xb0))(param_1[7]);
        (**(code **)(*param_1 + 0x14))();
      }
      else {
        uVar3 = FUN_005f5400();
        uVar3 = FUN_00445690(uVar3);
        *(undefined4 *)(param_1[1] + 0x178) = uVar3;
        (**(code **)(*(int *)param_1[1] + 0xb0))(iVar1);
      }
    }
  }
  return;
}

