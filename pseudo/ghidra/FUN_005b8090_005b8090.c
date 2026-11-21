// FUN_005b8090  005b8090

void __thiscall FUN_005b8090(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == -1) {
    param_3 = FUN_005b4e50(param_2);
  }
  uVar3 = FUN_005b58f0(param_2);
  uVar4 = FUN_005b5c60(param_2,param_3,1);
  FUN_005b7340(param_2,uVar3,0,uVar4);
  FUN_005b7340(param_2,param_3,1,0);
  FUN_005b7090(param_2,uVar3);
  piVar1 = (int *)(*(int *)(param_1 + 0x580 + param_2 * 4) + 0x48 + param_2 * 0x20);
  iVar5 = -*piVar1;
  iVar6 = -piVar1[1];
  FUN_005dcb00(param_2,iVar5,iVar6);
  FUN_005d5cf0(iVar5,iVar6);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x580 + param_2 * 4) + 0x48 + param_2 * 0x20);
  (**(code **)(**(int **)(param_1 + 0x580 + param_2 * 4) + 0xb8))(*puVar2,puVar2[1],param_2,uVar3);
  iVar5 = FUN_005b5f60(param_2,uVar3,0);
  if (iVar5 == 1) {
    FUN_005b7480(param_2,1);
  }
  return;
}

