// FUN_00675830  00675830

void FUN_00675830(undefined4 param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int local_64;
  char local_5c [52];
  int local_28;
  int local_24;
  int local_20;
  size_t local_1c;
  char local_18 [8];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  local_1c = strlen(param_3);
  bVar1 = false;
  local_28 = 0;
  local_c = 0;
  while ((local_c < (int)local_1c && (iVar2 = isdigit((int)param_3[local_c]), iVar2 != 0))) {
    local_c = local_c + 1;
  }
  memset(local_5c,0,0x32);
  while (local_c = local_c + 1, local_c < (int)local_1c) {
    iVar2 = isspace((int)param_3[local_c]);
    if (iVar2 == 0) {
      if (param_3[local_c] == '-') {
        bVar1 = true;
      }
      local_5c[local_8] = param_3[local_c];
      local_8 = local_8 + 1;
    }
    else {
      if (bVar1) {
        sscanf(local_5c,"%d-%d",&local_24,&local_20);
        for (local_64 = local_24; local_64 <= local_20; local_64 = local_64 + 1) {
          sprintf(local_18,"%d",local_64);
          local_28 = FUN_00607960(local_18,0);
          if (local_28 != 0) {
            FUN_006764e0(local_28);
          }
        }
      }
      else {
        sscanf(local_5c,"%d",&local_24);
        sprintf(local_18,"%d",local_24);
        local_28 = FUN_00607960(local_18,0);
        if (local_28 != 0) {
          FUN_006764e0(local_28);
        }
      }
      memset(local_5c,0,0x32);
      bVar1 = false;
    }
  }
  if (bVar1) {
    sscanf(local_5c,"%d-%d",&local_24,&local_20);
    for (local_64 = local_24; local_64 <= local_20; local_64 = local_64 + 1) {
      sprintf(local_18,"%d",local_64);
      local_28 = FUN_00607960(local_18,0);
      if (local_28 != 0) {
        FUN_006764e0(local_28);
      }
    }
  }
  else {
    sscanf(local_5c,"%d",&local_24);
    sprintf(local_18,"%d",local_24);
    local_28 = FUN_00607960(local_18,0);
    if (local_28 != 0) {
      FUN_006764e0(local_28);
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

