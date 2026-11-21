// FUN_005467b0  005467b0

void __fastcall FUN_005467b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int)param_1[2] < 10) {
    (**(code **)(*(int *)*param_1 + 0x70))();
    uVar3 = FUN_00545a80(param_1[2]);
    (**(code **)(*(int *)param_1[1] + 0xb0))(uVar3);
  }
  else {
    iVar1 = param_1[2];
    iVar2 = param_1[2];
    uVar3 = FUN_00545a80(iVar1 / 10);
    (**(code **)(*(int *)*param_1 + 0xb0))(uVar3);
    uVar3 = FUN_00545a80(iVar2 + (iVar1 / 10) * -10);
    (**(code **)(*(int *)param_1[1] + 0xb0))(uVar3);
    (**(code **)(*(int *)*param_1 + 0x74))();
  }
  (**(code **)(*(int *)param_1[1] + 0x74))();
  return;
}

