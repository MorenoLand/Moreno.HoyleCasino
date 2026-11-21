// FUN_0047a830  0047a830

void __fastcall FUN_0047a830(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_20 [8];
  uint local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_18 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    acStack_20[local_c] = '\0';
  }
  local_c = 0;
  do {
    iVar1 = FUN_0047f950();
    if (iVar1 <= local_c) {
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_c != 5) {
      local_8 = 0;
      for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (acStack_20[iVar1] == '\0') {
          local_8 = local_8 + 1;
        }
      }
      local_14 = FUN_0062fbf0(local_8,param_1,iVar1,*(undefined4 *)(param_1 + 4 + local_c * 4));
      local_8 = 0;
      for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
        if (acStack_20[iVar1] == '\0') {
          if (local_14 == local_8) {
            uVar2 = FUN_00481870(iVar1);
            FUN_004c67d0(uVar2);
            acStack_20[iVar1] = '\x01';
            break;
          }
          local_8 = local_8 + 1;
        }
      }
    }
    local_c = local_c + 1;
  } while( true );
}

