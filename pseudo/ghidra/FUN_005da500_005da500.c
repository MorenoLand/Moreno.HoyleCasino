// FUN_005da500  005da500

void __fastcall FUN_005da500(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_81c [1004];
  char local_430 [20];
  undefined4 local_41c;
  FILE *local_418;
  short local_414;
  undefined4 local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_410 = 0x12;
  local_41c = 0xf;
  iVar1 = FUN_0063aac0(param_1);
  strcpy(local_430,(char *)(iVar1 + 4));
  for (local_414 = 0; local_414 < 1000; local_414 = local_414 + 1) {
    local_81c[local_414] = '\0';
  }
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  strcat(&local_40c,"gne.bin");
  local_418 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (local_418 != (FILE *)0x0) {
    fread(local_81c,1000,1,local_418);
    fclose(local_418);
  }
  for (local_414 = 0; local_414 < 0x12; local_414 = local_414 + 1) {
    local_430[local_414] = local_430[local_414] + -1;
  }
  local_414 = 0;
  while ((local_414 < 0xe && (local_81c[local_414 * 0x12] != '\0'))) {
    local_414 = local_414 + 1;
  }
  memcpy(local_81c + local_414 * 0x12,local_430,0x12);
  local_418 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
  if (local_418 == (FILE *)0x0) {
    uVar2 = FUN_00630f40("SID_CASINO_ERROR_FILE",0);
    uVar2 = FUN_00630f40("SID_CASINO_ERROR_HALLOFFAME_CANTSAVEMEMBER",uVar2);
    FUN_0062ff10(uVar2);
  }
  else {
    fwrite(local_81c,1000,1,local_418);
    fclose(local_418);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

