// FUN_006587b0  006587b0

void __fastcall FUN_006587b0(int param_1)

{
  char cVar1;
  int local_8;
  
  cVar1 = FUN_00657890(0);
  if ((cVar1 == '\0') && (cVar1 = FUN_00657890(2), cVar1 == '\0')) {
    return;
  }
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    if ((*(int *)(*(int *)(param_1 + 0x60c + local_8 * 4) + 0x218) != 0) &&
       (cVar1 = FUN_005f54a0(), cVar1 != '\0')) {
      cVar1 = FUN_00664cb0();
      (**(code **)(**(int **)(*(int *)(param_1 + 0x60c + local_8 * 4) + 0x218) + 0xb0))((int)cVar1);
    }
  }
  return;
}

