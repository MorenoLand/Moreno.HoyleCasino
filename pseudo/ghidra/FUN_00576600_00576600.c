// FUN_00576600  00576600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00576600(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*DAT_0162ee84 + 0x80))(0x18a88,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  piVar1 = (int *)FUN_00574cc0(local_24,*(undefined4 *)(param_1 + 0x70));
  local_14 = *piVar1;
  local_10 = piVar1[1];
  puVar2 = (undefined4 *)FUN_00574cc0(local_2c,*(undefined4 *)(param_1 + 0x74));
  local_c = *puVar2;
  local_8 = puVar2[1];
  FUN_00575e20(0);
  FUN_00575e80(0);
  FUN_00575d70(*(undefined4 *)(param_1 + 0x70));
  if (999999999 < local_14) {
    local_14 = 1000000000;
    local_10 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x50) + 0xd0))();
  (**(code **)(**(int **)(param_1 + 0x54) + 0xd0))();
  puVar2 = (undefined4 *)FUN_0064c5c0(local_34,local_c,local_8);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  local_1c = uVar3;
  local_18 = uVar4;
  FUN_005dcb00(0,uVar3,uVar4);
  FUN_005d5fb0(uVar3,uVar4);
  uVar3 = local_1c;
  uVar4 = local_18;
  FUN_005dcb00(0,local_1c,local_18);
  FUN_005d5cf0(uVar3,uVar4);
  return;
}

