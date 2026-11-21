// FUN_00604500  00604500

void FUN_00604500(char *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_544;
  undefined4 local_540;
  char local_528 [312];
  char local_3f0 [312];
  char local_2b8 [400];
  char local_128 [264];
  uint local_20;
  undefined4 local_1c;
  FILE *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaad1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = uVar1;
  for (local_14 = 0; (local_14 < 200 && (*(int *)(&DAT_00796720 + local_14 * 4) != 0));
      local_14 = local_14 + 2) {
    strcpy(local_128,*(char **)(&DAT_00796720 + local_14 * 4));
    FUN_005ea540(local_128);
    strcpy(local_2b8,local_128);
    strcat(local_2b8,param_1);
    local_18 = (FILE *)FUN_005ea9c0(local_2b8,&DAT_006c2d28);
    if (local_18 != (FILE *)0x0) {
      fclose(local_18);
      pvVar2 = operator_new(0x11c);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_540 = 0;
      }
      else {
        local_540 = FUN_0062af50();
      }
      local_8 = 0xffffffff;
      local_1c = local_540;
      FUN_0062b0a0(local_2b8,&DAT_006c2d28);
      FUN_0062aa70(local_1c);
      if (DAT_00795fb4 != '\0') {
        sprintf(local_3f0,"Found %s\r\n",local_2b8);
        FUN_0062fde0(local_3f0);
      }
    }
  }
  local_2b8[0] = '\0';
  if (DAT_00795f6c != '\0') {
    local_2b8[0] = DAT_00795f6c;
    local_2b8[1] = 0;
    strcat(local_2b8,":\\");
  }
  if (local_2b8[0] != '\0') {
    strcat(local_2b8,param_1);
    local_18 = (FILE *)FUN_005ea9c0(local_2b8,&DAT_006c2d28,uVar1);
    if (local_18 != (FILE *)0x0) {
      fclose(local_18);
      pvVar2 = operator_new(0x11c);
      local_8 = 1;
      if (pvVar2 == (void *)0x0) {
        local_544 = 0;
      }
      else {
        local_544 = FUN_0062af50();
      }
      local_8 = 0xffffffff;
      local_1c = local_544;
      FUN_0062b0a0(local_2b8,&DAT_006c2d28);
      FUN_0062aa20(local_1c);
      if (DAT_00795fb4 != '\0') {
        sprintf(local_528,"Found %s\r\n",local_2b8);
        FUN_0062fde0(local_528);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}

