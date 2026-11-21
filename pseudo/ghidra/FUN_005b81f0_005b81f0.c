// FUN_005b81f0  005b81f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b81f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x580 + param_2 * 4) + 0x48 + param_2 * 0x20);
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  uVar4 = *(undefined8 *)piVar1;
  FUN_0064c560(_DAT_006b2c38);
  FUN_005dcb00(param_2,iVar2,iVar3);
  FUN_005d5cf0(uVar4);
  (**(code **)(**(int **)(param_1 + 0x580 + param_2 * 4) + 0xb8))(iVar2,iVar3,param_2,0);
  iVar2 = -iVar2;
  iVar3 = -iVar3;
  FUN_005dcb00(param_2,iVar2,iVar3);
  FUN_005d5fb0(iVar2,iVar3);
  FUN_005b71a0(param_2,0,5);
  iVar2 = FUN_005dcb00(param_2);
  *(undefined1 *)(iVar2 + 0x4a2) = 1;
  return;
}

