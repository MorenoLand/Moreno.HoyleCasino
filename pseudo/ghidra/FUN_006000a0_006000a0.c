// FUN_006000a0  006000a0

void __fastcall FUN_006000a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x54))();
  iVar2 = FUN_005f5590();
  iVar3 = FUN_005f5590();
  iVar1 = (**(code **)(*param_1 + 0x4c))(((iVar1 + iVar2 / 2) - iVar3 / 2) + param_1[0x81]);
  (**(code **)(*(int *)param_1[100] + 0x44))(iVar1 + param_1[0x80]);
  return;
}

