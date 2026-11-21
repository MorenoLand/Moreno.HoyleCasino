// FUN_005891b0  005891b0

void __fastcall FUN_005891b0(int param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x3c04); local_8 = local_8 + 1) {
    for (local_c = 0; local_c < *(int *)(param_1 + 0x3bf4 + local_8 * 4); local_c = local_c + 1) {
      if (*(int *)(param_1 + local_8 * 0xe10 + 0x344 + local_c * 0x24) != 0) {
        FUN_005e2b90(param_1 + 0x3ba4 + local_8 * 0x10,
                     param_1 + 0x328 + local_8 * 0xe10 + local_c * 0x24,local_c);
      }
    }
  }
  cVar1 = FUN_00585eb0();
  if (cVar1 == '\0') {
    FUN_00589290();
  }
  return;
}

