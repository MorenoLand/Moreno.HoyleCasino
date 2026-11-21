// FUN_00571cb0  00571cb0

undefined1 __fastcall FUN_00571cb0(int param_1)

{
  char cVar1;
  int local_14;
  undefined1 local_d;
  int local_8;
  
  local_d = 1;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    for (local_14 = local_8; local_14 < 4; local_14 = local_14 + 1) {
      cVar1 = FUN_00571c80(*(undefined4 *)(param_1 + 8 + local_8 * 4),
                           *(undefined4 *)(param_1 + 8 + local_14 * 4));
      if (cVar1 == '\0') {
        local_d = 0;
      }
    }
  }
  return local_d;
}

