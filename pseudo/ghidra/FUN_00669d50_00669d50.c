// FUN_00669d50  00669d50

void __fastcall FUN_00669d50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_114 [260];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_00628ba0();
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
  iVar2 = FUN_00606570();
  if (iVar2 == 6) {
    local_8 = 0;
    while (iVar2 = FUN_00666c60(), local_8 < iVar2) {
      local_114[0] = '\0';
      local_c = FUN_00666eb0(local_8);
      if (local_c != 0) {
        strcpy(local_114,(char *)(local_c + 4));
      }
      FUN_00628980(0,local_114,0xffffffff,0);
      local_8 = local_8 + 1;
    }
    FUN_00628d80();
  }
  else if (iVar2 == 7) {
    iVar2 = FUN_00639520(uVar1);
    local_8 = 0;
    while ((local_8 < 0x14 && (*(int *)(&DAT_00763580 + local_8 * 0x2c + iVar2 * 0x380) != 0))) {
      FUN_00628980(0,s_SCRATCH_FACE_00763588 + local_8 * 0x2c + iVar2 * 0x380,0xffffffff,0);
      local_8 = local_8 + 1;
    }
  }
  else if (iVar2 == 8) {
    FUN_00628980(0,"<blinks>",0xffffffff,0);
  }
  FUN_00669f10();
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

