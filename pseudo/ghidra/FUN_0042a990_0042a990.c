// FUN_0042a990  0042a990

void __fastcall FUN_0042a990(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 local_58;
  int local_48;
  int local_44;
  int local_3c [9];
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e4d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_3c[0] = 0xf;
  local_3c[1] = 0x82;
  local_3c[2] = 0xf;
  local_3c[3] = 0x82;
  local_3c[4] = 0xf;
  local_3c[5] = 0x82;
  local_3c[6] = 0xf;
  local_3c[7] = 0x82;
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
  for (local_3c[8] = 0; local_3c[8] < 0x4c; local_3c[8] = local_3c[8] + 1) {
    if (*(int *)(*(int *)(DAT_007906d4 + 4 + local_3c[8] * 4) + 0x110) == 0) {
      for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
        local_14 = (**(code **)(**(int **)(param_1 + 0x14 + local_3c[8] * 4) + 0xdc))(local_44,0);
        local_14 = local_14 + local_3c[local_44 * 2];
        iVar3 = (**(code **)(**(int **)(param_1 + 0x14 + local_3c[8] * 4) + 0xe0))(local_44,0);
        iVar1 = local_3c[local_44 * 2 + 1];
        FUN_0042c8a0(local_44,0);
        FUN_0042ca40(local_44,0);
        for (local_48 = 0;
            (iVar4 = FUN_005ccdf0(local_44,0), local_48 <= iVar4 &&
            (local_18 = *(int **)(*(int *)(param_1 + 0x14 + local_3c[8] * 4) + 0x17c +
                                  local_44 * 0x1e0 + local_48 * 4), local_18 != (int *)0x0));
            local_48 = local_48 + 1) {
          iVar4 = FUN_00637810(4);
          local_18[0x61] = iVar4;
          if ((local_18[0x61] == 0) || (cVar2 = FUN_00637630(), cVar2 == '\0')) {
            (**(code **)(*local_18 + 0x44))(local_14,iVar3 + iVar1);
          }
          else {
            pvVar5 = operator_new(0x2c);
            local_8 = 0;
            if (pvVar5 == (void *)0x0) {
              local_58 = 0;
            }
            else {
              local_58 = FUN_00606e60(*(undefined4 *)(DAT_0162ee80 + 4),local_14,iVar3 + iVar1,0);
            }
            local_8 = 0xffffffff;
            FUN_005f6050(local_58);
          }
        }
      }
    }
  }
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0);
  ExceptionList = local_10;
  return;
}

