// FUN_00673c20  00673c20

void FUN_00673c20(void)

{
  char cVar1;
  undefined1 local_40 [24];
  undefined1 local_28 [28];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_8 = 0; local_8 < 100; local_8 = local_8 + 1) {
    FUN_00667be0(local_28,local_8);
    cVar1 = FUN_00667ec0(local_28,local_40);
    if (cVar1 != '\0') {
      FUN_00673b60(local_40,local_28);
    }
  }
  FUN_005fb720(0);
  FUN_00628d80();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

