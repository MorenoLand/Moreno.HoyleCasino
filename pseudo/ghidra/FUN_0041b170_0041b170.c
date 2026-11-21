// FUN_0041b170  0041b170

void __thiscall FUN_0041b170(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_38;
  undefined1 local_8;
  
  FUN_0064c8a0(0,0);
  if (param_3 == -1) {
    if (param_2 == -1) {
      param_3 = -1;
    }
    else {
      if (param_2 == 4) {
        local_38 = 0;
      }
      else {
        local_38 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      param_3 = local_38;
    }
  }
  uVar3 = FUN_004194c0(param_2);
  uVar4 = FUN_004193d0(param_2,param_3,1);
  FUN_00419370(param_2,uVar3,0,uVar4);
  FUN_00419370(param_2,param_3,1,0);
  local_8 = (undefined1)uVar3;
  *(undefined1 *)(param_1 + 0x119 + param_2 * 0x118) = local_8;
  piVar1 = (int *)(*(int *)(param_1 + 0x468 + param_2 * 4) + 0x48 + param_2 * 0x20);
  iVar5 = -*piVar1;
  iVar6 = -piVar1[1];
  FUN_005dcb00(param_2,iVar5,iVar6);
  FUN_005d5cf0(iVar5,iVar6);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x468 + param_2 * 4) + 0x48 + param_2 * 0x20);
  (**(code **)(**(int **)(param_1 + 0x468 + param_2 * 4) + 0xb8))(*puVar2,puVar2[1],param_2,uVar3);
  iVar5 = FUN_00419780(param_2,uVar3,0);
  if (iVar5 == 1) {
    *(undefined1 *)(param_1 + 0x118 + param_2 * 0x118) = 1;
  }
  return;
}

