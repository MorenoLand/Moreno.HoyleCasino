// FUN_0065a2f0  0065a2f0

void __fastcall FUN_0065a2f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  FUN_00657430();
  uVar2 = FUN_0062fbf0(4);
  FUN_00664c90(uVar2);
  for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
    iVar3 = FUN_0062fbf0(2);
    if ((iVar3 == 0) || ((local_10 != 10 && (local_10 != 0xb)))) {
      if (local_10 == 1) {
        local_14 = FUN_00675ca0(1,local_8);
        local_8 = FUN_00675b40(1,local_14,local_8);
      }
      else {
        local_14 = FUN_00675ca0(local_10,0);
        local_8 = FUN_00675b40(local_10,local_14,0);
      }
      FUN_00664730(local_10,local_8);
      if ((local_10 == 3) || (local_10 == 8)) {
        local_10 = local_10 + 1;
        uVar2 = FUN_00675b40(local_10,local_14,0);
        FUN_00664730(local_10,uVar2);
      }
    }
  }
  FUN_00657e60(0xffffffff,0);
  cVar1 = FUN_00664cb0();
  FUN_006595e0((int)cVar1);
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x10);
  puVar7 = (undefined4 *)(param_1 + 0x1e0);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x10);
  puVar7 = (undefined4 *)(param_1 + 0x22c);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar3 = FUN_005fb5e0(0x400);
  if (iVar3 != 0) {
    local_1c = 0x21;
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x174))();
    if (iVar3 != 0) {
      for (local_c = 0; *(int *)(iVar3 + local_c * 4) != 0; local_c = local_c + 1) {
      }
      if (local_c != 0) {
        iVar4 = FUN_0062fbf0(local_c);
        local_1c = *(int *)(iVar3 + iVar4 * 4);
      }
    }
    piVar5 = (int *)FUN_005fb5e0(0x400);
    (**(code **)(*piVar5 + 0xf0))(local_1c + 0x186bf,1);
  }
  return;
}

