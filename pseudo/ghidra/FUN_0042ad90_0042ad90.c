// FUN_0042ad90  0042ad90

void __fastcall FUN_0042ad90(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 local_38;
  int local_28;
  int local_24;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e4f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x168) != 0) {
    (**(code **)(**(int **)(param_1 + 0x168) + 0x70))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  (**(code **)(*(int *)DAT_0162ee80[1] + 4))(1);
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    for (local_1c = 0; local_1c < 0x4c; local_1c = local_1c + 1) {
      if ((*(int *)(*(int *)(DAT_007906d4 + 4 + local_1c * 4) + 0x110) == 1) ||
         (*(int *)(*(int *)(DAT_007906d4 + 4 + local_1c * 4) + 0x110) == 3)) {
        uVar3 = FUN_005f5400();
        cVar2 = FUN_00438870(uVar3);
        if (cVar2 == '\0') {
          uVar3 = (**(code **)(*DAT_0162ee80 + 0x1c4))(local_24);
          iVar4 = (**(code **)(*DAT_0162ee80 + 0x1c8))(local_24);
          FUN_0042c8a0(local_24,0);
          for (local_28 = 0;
              (iVar5 = FUN_005ccdf0(local_24,0), local_28 <= iVar5 &&
              (piVar1 = *(int **)(*(int *)(param_1 + 0x14 + local_1c * 4) + 0x17c + local_24 * 0x1e0
                                 + local_28 * 4), piVar1 != (int *)0x0)); local_28 = local_28 + 1) {
            iVar5 = FUN_00637810(4);
            piVar1[0x61] = iVar5;
            if ((piVar1[0x61] == 0) || (cVar2 = FUN_00637630(), cVar2 == '\0')) {
              (**(code **)(*piVar1 + 0x44))(uVar3,iVar4 + 100);
            }
            else {
              pvVar6 = operator_new(0x2c);
              local_8 = 0;
              if (pvVar6 == (void *)0x0) {
                local_38 = 0;
              }
              else {
                local_38 = FUN_00606e60(DAT_0162ee80[1],uVar3,iVar4 + 100,0);
              }
              local_8 = 0xffffffff;
              FUN_005f6050(local_38);
            }
          }
        }
        else {
          FUN_0042c8a0(local_24,0);
        }
      }
    }
  }
  (**(code **)(*(int *)DAT_0162ee80[1] + 0x1c))(0);
  ExceptionList = local_10;
  return;
}

