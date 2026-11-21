// FUN_005d0cd0  005d0cd0

undefined4 __thiscall FUN_005d0cd0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar2 = (undefined4 *)FUN_005d0c30(local_14,*(undefined4 *)(param_1 + 8));
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  uVar3 = param_2;
  FUN_005d0c30(local_c,uVar1);
  FUN_0064c5c0(uVar3,uVar4,uVar5);
  return param_2;
}

