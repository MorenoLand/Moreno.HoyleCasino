// FUN_005cf100  005cf100

void FUN_005cf100(void)

{
  char acStackY_9854c [18];
  char acStackY_9853a [621506];
  undefined4 extraout_var;
  undefined4 uVar1;
  short local_948;
  undefined1 local_944 [1004];
  short local_558 [6];
  char acStack_54c [292];
  undefined4 local_428;
  undefined4 local_424;
  short local_420 [4];
  FILE *local_418;
  short local_414;
  undefined4 local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_410 = 0x12;
  local_424 = 0xf;
  local_420[0] = 0x45;
  local_420[1] = 0xc4;
  local_420[2] = 0x144;
  local_558[0] = 0x68;
  local_558[1] = 0x92;
  local_558[2] = 0xbd;
  local_558[3] = 0xe7;
  local_558[4] = 0x112;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  uVar1 = extraout_var;
  strcat(&local_40c,"gne.bin");
  for (local_414 = 0; local_414 < 0xf; local_414 = local_414 + 1) {
    acStack_54c[local_414 * 0x13] = '\0';
  }
  local_418 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28,uVar1);
  if (local_418 != (FILE *)0x0) {
    fread(local_944,1000,1,local_418);
    for (local_414 = 0; local_414 < 0xf; local_414 = local_414 + 1) {
      memcpy(acStack_54c + local_414 * 0x13,local_944 + local_414 * 0x12,0x12);
      acStack_54c[local_414 * 0x13 + 0x12] = '\0';
      for (local_948 = 0; local_948 < 0x12; local_948 = local_948 + 1) {
        acStack_54c[(int)local_948 + local_414 * 0x13] =
             acStack_54c[(int)local_948 + local_414 * 0x13] + '\x01';
      }
    }
    fclose(local_418);
  }
  for (local_414 = 0; local_414 < 0xf; local_414 = local_414 + 1) {
    local_428 = FUN_005fa5b0(0,(int)local_414,acStack_54c + local_414 * 0x13,0x3b,0x66,0x22,
                             (int)local_420[(int)local_414 / 5],(int)local_558[(int)local_414 % 5],1
                             ,0x30,0xffffffff);
    FUN_005ee710(acStack_54c + local_414 * 0x13);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

