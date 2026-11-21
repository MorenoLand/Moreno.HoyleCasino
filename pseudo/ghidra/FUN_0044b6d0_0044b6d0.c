// FUN_0044b6d0  0044b6d0

void FUN_0044b6d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_c [8];
  
  iVar1 = FUN_005dcb00(param_1);
  uVar5 = *(undefined4 *)(iVar1 + 0x4c8);
  uVar4 = *(undefined4 *)(iVar1 + 0x4c4);
  puVar3 = local_c;
  FUN_0044c7b0(param_1);
  puVar2 = (undefined4 *)FUN_0064c5c0(puVar3,uVar4,uVar5);
  uVar5 = *puVar2;
  uVar4 = puVar2[1];
  iVar1 = FUN_0044c7b0(param_1);
  *(undefined4 *)(iVar1 + 4) = uVar5;
  *(undefined4 *)(iVar1 + 8) = uVar4;
  FUN_005dcb00(param_1);
  FUN_0063b0a0();
  return;
}

