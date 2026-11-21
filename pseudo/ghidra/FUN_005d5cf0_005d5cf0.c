// FUN_005d5cf0  005d5cf0

void __thiscall FUN_005d5cf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  iVar1 = FUN_005d5a50();
  if (iVar1 < 1000000000) {
    puVar5 = local_14;
    uVar4 = param_2;
    uVar3 = param_3;
    FUN_005d5a90(local_c);
    puVar2 = (undefined4 *)FUN_0064c5c0(puVar5,uVar4,uVar3);
    FUN_005d5af0(*puVar2,puVar2[1]);
    (**(code **)(*DAT_007947e4 + 0x2a0))(param_1,*(undefined4 *)(param_1 + 4),param_2,param_3);
    puVar2 = (undefined4 *)FUN_005d5a90(local_1c);
    FUN_005e7e40(*(undefined4 *)(param_1 + 4),0,*puVar2,puVar2[1]);
    uVar4 = *(undefined4 *)(param_1 + 0x4e8);
    uVar3 = *(undefined4 *)(param_1 + 0x4e4);
    iVar1 = param_1 + 0x4ec;
    puVar2 = (undefined4 *)FUN_005d5a90(local_24);
    FUN_005e7e90(*(undefined4 *)(param_1 + 4),2,*puVar2,puVar2[1],iVar1,uVar3,uVar4);
  }
  return;
}

