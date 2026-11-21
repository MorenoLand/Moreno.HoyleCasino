// FUN_0042b030  0042b030

void __fastcall FUN_0042b030(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 local_50;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e51f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
  for (local_18 = 0; local_18 < 0x4c; local_18 = local_18 + 1) {
    if (((*(int *)(*(int *)(DAT_007906d4 + 4 + local_18 * 4) + 0x110) == -1) &&
        ((iVar2 = FUN_005f5400(), iVar2 == 4 || (iVar2 = FUN_005f5400(), iVar2 == 5)))) &&
       ((iVar2 = FUN_005f5400(), iVar2 != 5 ||
        (*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0) != 0xc)))) {
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        uVar3 = FUN_005f5400();
        cVar1 = FUN_004369a0(local_24,uVar3);
        if (cVar1 != '\0') {
          iVar2 = FUN_005f5400();
          if (iVar2 == 4) {
            FUN_0042b350(*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0),local_24,
                         &local_20);
          }
          else {
            FUN_0042b620(*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0),local_24,
                         &local_20);
          }
          for (local_28 = 0;
              (iVar2 = FUN_005ccdf0(local_24,0), local_28 <= iVar2 &&
              (local_14 = *(int **)(*(int *)(param_1 + 0x14 + local_18 * 4) + 0x17c +
                                    local_24 * 0x1e0 + local_28 * 4), local_14 != (int *)0x0));
              local_28 = local_28 + 1) {
            iVar2 = FUN_00637810(4);
            local_14[0x61] = iVar2;
            if ((local_14[0x61] == 0) || (cVar1 = FUN_00637630(), cVar1 == '\0')) {
              (**(code **)(*local_14 + 0x44))(local_20,local_1c);
            }
            else {
              pvVar4 = operator_new(0x2c);
              local_8 = 0;
              if (pvVar4 == (void *)0x0) {
                local_50 = 0;
              }
              else {
                local_50 = FUN_00606e60(*(undefined4 *)(DAT_0162ee80 + 4),local_20,local_1c,0);
              }
              local_8 = 0xffffffff;
              FUN_005f6050(local_50);
            }
          }
        }
      }
    }
  }
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0);
  ExceptionList = local_10;
  return;
}

