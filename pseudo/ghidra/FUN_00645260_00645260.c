// FUN_00645260  00645260

void __thiscall FUN_00645260(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  iVar1 = param_2 - iVar1;
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar2 = param_3 - iVar2;
  if ((iVar1 != 0) || (iVar2 != 0)) {
    for (local_10 = 0; local_10 < 0x400; local_10 = local_10 + 1) {
      if (param_1[local_10 + 0x65] != 0) {
        iVar3 = (**(code **)(*(int *)param_1[local_10 + 0x65] + 0x54))();
        iVar3 = (**(code **)(*(int *)param_1[local_10 + 0x65] + 0x4c))(iVar3 + iVar2);
        (**(code **)(*(int *)param_1[local_10 + 0x65] + 0x44))(iVar3 + iVar1);
      }
      if (param_1[local_10 + 0x465] != 0) {
        iVar3 = (**(code **)(*(int *)param_1[local_10 + 0x465] + 0x54))();
        iVar3 = (**(code **)(*(int *)param_1[local_10 + 0x465] + 0x4c))(iVar3 + iVar2);
        (**(code **)(*(int *)param_1[local_10 + 0x465] + 0x44))(iVar3 + iVar1);
      }
    }
    FUN_005eb260(param_2,param_3);
  }
  return;
}

