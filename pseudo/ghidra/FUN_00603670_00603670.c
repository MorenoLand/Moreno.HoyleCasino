// FUN_00603670  00603670

void FUN_00603670(void)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int local_55c;
  int local_558;
  char local_540 [316];
  int local_404;
  char local_400 [316];
  int local_2c4;
  char local_2c0 [400];
  char local_130 [268];
  uint local_24;
  int local_20;
  int local_1c;
  FILE *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa9ce;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = uVar1;
  for (local_14 = 0; (local_14 < 200 && (*(int *)(&DAT_00796720 + local_14 * 4) != 0));
      local_14 = local_14 + 1) {
    strcpy(local_130,*(char **)(&DAT_00796720 + local_14 * 4));
    FUN_005ea540(local_130);
    local_20 = 0;
    while (*(int *)(&DAT_007960e0 + local_20 * 4) != 0) {
      strcpy(local_2c0,local_130);
      strcat(local_2c0,*(char **)(&DAT_007960e0 + local_20 * 4));
      local_18 = (FILE *)FUN_005ea9c0(local_2c0,&DAT_006c2d28);
      if (local_18 == (FILE *)0x0) {
LAB_006038d1:
        local_20 = local_20 + 1;
      }
      else {
        fclose(local_18);
        local_2c4 = FUN_0062ae50();
        do {
          local_2c4 = local_2c4 + -1;
          if (local_2c4 < 0) break;
          pcVar4 = local_2c0;
          iVar2 = FUN_0062ade0(local_2c4);
          iVar2 = strcmp((char *)(iVar2 + 0x19),pcVar4);
        } while (iVar2 != 0);
        if (local_2c4 < 0) {
          pvVar3 = operator_new(0x11c);
          local_8 = 0;
          if (pvVar3 == (void *)0x0) {
            local_558 = 0;
          }
          else {
            local_558 = FUN_0062af50();
          }
          local_8 = 0xffffffff;
          local_1c = local_558;
          FUN_0062b0a0(local_2c0,&DAT_006c2d28);
          if ((local_1c == -0x19) || (*(char *)(local_1c + 0x19) != DAT_00795f6c)) {
            FUN_0062aa70(local_1c);
          }
          else {
            FUN_0062aa20(local_1c);
          }
          if (DAT_00795fb4 != '\0') {
            sprintf(local_400,"Found %s\r\n",local_2c0);
            FUN_0062fde0(local_400);
          }
          goto LAB_006038d1;
        }
        local_20 = local_20 + 1;
      }
    }
  }
  if (DAT_00795f6c != '\0') {
    local_20 = 0;
    while (*(int *)(&DAT_007960e0 + local_20 * 4) != 0) {
      local_2c0[0] = DAT_00795f6c;
      local_2c0[1] = 0;
      strcat(local_2c0,":\\");
      strcat(local_2c0,*(char **)(&DAT_007960e0 + local_20 * 4));
      local_18 = (FILE *)FUN_005ea9c0(local_2c0,&DAT_006c2d28,uVar1);
      if (local_18 == (FILE *)0x0) {
LAB_00603aaa:
        local_20 = local_20 + 1;
      }
      else {
        fclose(local_18);
        local_404 = FUN_0062ae50();
        do {
          local_404 = local_404 + -1;
          if (local_404 < 0) break;
          pcVar4 = local_2c0;
          iVar2 = FUN_0062ade0(local_404);
          iVar2 = strcmp((char *)(iVar2 + 0x19),pcVar4);
        } while (iVar2 != 0);
        if (local_404 < 0) {
          pvVar3 = operator_new(0x11c);
          local_8 = 1;
          if (pvVar3 == (void *)0x0) {
            local_55c = 0;
          }
          else {
            local_55c = FUN_0062af50();
          }
          local_8 = 0xffffffff;
          local_1c = local_55c;
          FUN_0062b0a0(local_2c0,&DAT_006c2d28);
          FUN_0062aa20(local_1c);
          if (DAT_00795fb4 != '\0') {
            sprintf(local_540,"Found %s\r\n",local_2c0);
            FUN_0062fde0(local_540);
          }
          goto LAB_00603aaa;
        }
        local_20 = local_20 + 1;
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

