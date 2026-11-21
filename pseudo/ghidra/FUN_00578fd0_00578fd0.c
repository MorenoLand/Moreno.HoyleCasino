// FUN_00578fd0  00578fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00578fd0(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 local_40;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a65d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = &local_18;
  FUN_005dcb00(0,puVar2,DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_005d5ac0(puVar2);
  puVar2 = (undefined4 *)FUN_00574cc0(local_28,param_2);
  local_20 = *puVar2;
  local_1c = puVar2[1];
  cVar1 = FUN_0064c6a0(local_20,local_1c);
  if (cVar1 != '\0') {
    param_2 = FUN_00574ed0(local_18,local_14);
  }
  if (999999999 < (uint)(param_2 + *(int *)(DAT_0079345c + 0x70))) {
    param_2 = 999999999 - *(int *)(DAT_0079345c + 0x70);
  }
  piVar3 = (int *)FUN_00574cc0(local_30,param_2);
  iVar5 = -*piVar3;
  iVar6 = -piVar3[1];
  local_20 = iVar5;
  local_1c = iVar6;
  FUN_005dcb00(0,iVar5,iVar6);
  FUN_005d5fb0(iVar5,iVar6);
  iVar5 = local_20;
  iVar6 = local_1c;
  FUN_005dcb00(0,local_20,local_1c);
  FUN_005d5cf0(iVar5,iVar6);
  if (param_2 != 0) {
    if ((*(int *)(DAT_0079345c + 0x70) == 0) && (*(int *)(DAT_0079345c + 0x74) == 0)) {
      FUN_00576220();
    }
    FUN_00575c60(param_2);
    (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
    if ((local_20 == 0) && (local_1c == 0)) {
      (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
    }
    else {
      (**(code **)(**(int **)(DAT_0079345c + 8) + 0xb0))(0);
      (**(code **)(**(int **)(DAT_0079345c + 8) + 0x74))();
      pvVar4 = operator_new(0x20);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_006010a0(*(undefined4 *)(param_1 + 4));
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_40);
      (**(code **)(*DAT_0162ee84 + 0x80))(0x18a96,0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  ExceptionList = local_10;
  return;
}

