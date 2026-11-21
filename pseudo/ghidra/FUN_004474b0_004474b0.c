// FUN_004474b0  004474b0

void __fastcall FUN_004474b0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_64;
  int local_54;
  int local_40;
  undefined1 local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_004473a0();
  for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
    FUN_004480e0();
    if (local_40 != 4) {
      iVar2 = FUN_005dcb00(local_40);
      if (*(char *)(iVar2 + 0x4a0) != '\0') {
        cVar1 = FUN_005da7b0();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*DAT_0079070c + 0x2c4))(local_40);
          if (cVar1 == '\0') {
            for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
              if (*(int *)(*(int *)(param_1 + 0x14 + (local_40 * 3 + local_54) * 4) + 0x17c +
                          local_40 * 0x1e0) == 0) {
                (**(code **)(**(int **)(param_1 + 0x14 + (local_40 * 3 + local_54) * 4) + 0xb8))
                          (local_40,0);
              }
            }
          }
        }
      }
    }
    cVar1 = FUN_0044ce60(local_40);
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x54 + local_40 * 4) + 0x70))();
    }
    else {
      uVar8 = 1;
      uVar3 = FUN_0044ce00(local_40);
      uVar3 = FUN_00462ba0(DAT_00790710 + 0x98 + local_40 * 10,uVar3,uVar8);
      FUN_00462f40(uVar3,local_3c);
      iVar2 = FUN_00447a70(local_40,0);
      iVar4 = FUN_00447a70(local_40,4);
      iVar5 = FUN_00447a70(local_40,0);
      iVar6 = FUN_005f5550();
      if (local_40 == 4) {
        local_64 = FUN_00447af0(4,0);
        iVar7 = FUN_005f5590();
        local_64 = local_64 + iVar7;
      }
      else {
        local_64 = FUN_00447af0(local_40,0);
        local_64 = local_64 + -0x11;
      }
      (**(code **)(**(int **)(param_1 + 0x54 + local_40 * 4) + 0xb4))(local_3c);
      (**(code **)(**(int **)(param_1 + 0x54 + local_40 * 4) + 0x44))
                ((iVar2 + ((iVar4 + 0x23) - iVar5) / 2) - iVar6 / 2,local_64);
      (**(code **)(**(int **)(param_1 + 0x54 + local_40 * 4) + 0x74))();
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_0079070c + 0x2f0))();
  }
  if (*(short *)(DAT_00790710 + 0xc0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x70))();
  }
  else {
    FUN_00447b60(0,*(undefined2 *)(DAT_00790710 + 0xc0),*(undefined1 *)(DAT_00790710 + 0xd8));
  }
  if (*(short *)(DAT_00790710 + 0xc2) == 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x70))();
  }
  else {
    FUN_00447b60(1,*(undefined2 *)(DAT_00790710 + 0xc2),*(undefined1 *)(DAT_00790710 + 0xd9));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

