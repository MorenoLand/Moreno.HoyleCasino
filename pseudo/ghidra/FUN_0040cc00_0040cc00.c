// FUN_0040cc00  0040cc00

void __fastcall FUN_0040cc00(int param_1)

{
  char cVar1;
  int local_8;
  
  FUN_0040caf0();
  if (*(int *)(*(int *)(DAT_00790324 + 0x464) + 0x808) ==
      *(int *)(*(int *)(DAT_00790324 + 0x464) + 0x80c) + -1) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x70))();
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_0040e090();
    if (local_8 != 4) {
      cVar1 = FUN_00419eb0(local_8);
      if (cVar1 != '\0') {
        cVar1 = FUN_005da7b0();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*DAT_00790320 + 0x2c4))(local_8);
          if ((cVar1 == '\0') &&
             (*(int *)(*(int *)(param_1 + 0x18 + local_8 * 4) + 0x17c + local_8 * 0x1e0) == 0)) {
            (**(code **)(**(int **)(param_1 + 0x18 + local_8 * 4) + 0xb8))(local_8,0);
          }
        }
      }
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_00790320 + 0x2f0))();
  }
  return;
}

