// FUN_00665e90  00665e90

void FUN_00665e90(void)

{
  UINT UVar1;
  LPCSTR pCVar2;
  CHAR local_324 [256];
  char local_224 [264];
  char local_11c [268];
  uint local_10;
  char local_9;
  FILE *local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = (FILE *)0x0;
  DAT_00795f6c = FUN_00607960("CDDrive",0);
  local_9 = FUN_00607900("ForceCDSearch",1);
  if (local_9 != '\0') {
    strcpy(local_224,"c:\\");
    strcpy(local_11c,"c:\\");
    strcat(local_224,&DAT_00795940);
    SetErrorMode(1);
    if (DAT_00795f6c != '\0') {
      local_224[0] = DAT_00795f6c;
      local_11c[0] = DAT_00795f6c;
      UVar1 = GetDriveTypeA(local_11c);
      if (UVar1 == 5) {
        local_8 = (FILE *)FUN_005ea9c0(local_224,&DAT_006c2d28);
      }
    }
    if (local_8 == (FILE *)0x0) {
      local_224[0] = 'c';
      local_11c[0] = 'c';
      UVar1 = GetDriveTypeA(local_11c);
      if (UVar1 == 5) {
        local_8 = (FILE *)FUN_005ea9c0(local_224,&DAT_006c2d28);
      }
    }
    while ((local_8 == (FILE *)0x0 && (local_224[0] != 'z'))) {
      local_224[0] = local_224[0] + '\x01';
      local_11c[0] = local_11c[0] + '\x01';
      UVar1 = GetDriveTypeA(local_11c);
      if (UVar1 == 5) {
        local_8 = (FILE *)FUN_005ea9c0(local_224,&DAT_006c2d28);
      }
      else {
        local_8 = (FILE *)0x0;
      }
    }
    if (local_8 == (FILE *)0x0) {
      DAT_00795f6c = '\0';
      strcpy(local_224,&DAT_007950bc);
      strcat(local_224,&DAT_00795940);
      local_8 = (FILE *)FUN_005ea9c0(local_224,&DAT_006c2d28);
      if (local_8 == (FILE *)0x0) {
        pCVar2 = (LPCSTR)FUN_00630f40("SID_SHELL_MISSINGFILES_FORMAT",&DAT_00795634);
        wsprintfA(local_324,pCVar2);
      }
      else {
        fclose(local_8);
      }
    }
    else {
      fclose(local_8);
      DAT_00795f6c = local_224[0];
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

