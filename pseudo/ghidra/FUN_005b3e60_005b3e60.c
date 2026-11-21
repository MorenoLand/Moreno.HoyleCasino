// FUN_005b3e60  005b3e60

void FUN_005b3e60(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined4 uVar6;
  
  uVar5 = 2;
  uVar4 = 3;
  uVar3 = 1;
  uVar1 = FUN_005b4e50(param_1);
  uVar6 = extraout_var;
  FUN_005b67d0(param_1,uVar1,uVar3,uVar4,uVar5);
  iVar2 = FUN_005dcb00(param_1,uVar6);
  *(undefined1 *)(iVar2 + 0x4a2) = 1;
  FUN_005b71a0(param_1,0,7);
  iVar2 = FUN_005dcb00(param_1);
  *(undefined1 *)(iVar2 + 0x4b0) = 0;
  FUN_005b3f80(param_1);
  return;
}

