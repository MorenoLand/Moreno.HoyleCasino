// FUN_006171a0  006171a0

void __fastcall FUN_006171a0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_2e8;
  char local_298 [20];
  undefined4 local_284;
  undefined4 local_280;
  char local_27c [20];
  undefined4 local_268;
  char *local_264;
  char *local_260;
  char *local_25c;
  char local_258 [264];
  undefined1 local_150 [268];
  uint local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  FILE *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab26a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = uVar1;
  pvVar2 = operator_new(800);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_2e8 = (undefined4 *)0x0;
  }
  else {
    local_2e8 = (undefined4 *)FUN_0061f3d0(uVar1);
  }
  local_8 = 0xffffffff;
  local_3c = local_2e8;
  local_24 = (FILE *)0x0;
  local_30 = 0;
  local_38 = (void *)0x0;
  local_34 = 0;
  local_11 = '\0';
  for (local_1c = 0; local_1c < 100; local_1c = local_1c + 1) {
    local_20 = 0;
    while ((local_20 < 100 &&
           (local_24 = (FILE *)FUN_00616c20(local_150,local_1c,local_20), local_24 != (FILE *)0x0)))
    {
      FUN_00617100(local_24,&local_40,&local_18,&local_38,&local_34);
      fclose(local_24);
      FUN_0061f650(local_38,local_40,local_18);
      operator_delete(local_38);
      local_11 = '\x01';
      local_20 = local_20 + 1;
    }
  }
  if (local_11 != '\0') {
    FUN_0061f850();
    local_2c = (undefined4 *)0x0;
    if (*(char *)(param_1 + 0x38) != '\0') {
      strcpy(local_258,(char *)(param_1 + 0x38));
      local_260 = strrchr(local_258,0x2e);
      local_25c = strrchr(local_258,0x5c);
      if (((local_25c != (char *)0x0) && (local_260 != (char *)0x0)) && (local_260 < local_25c)) {
        local_260 = (char *)0x0;
      }
      if (local_260 != (char *)0x0) {
        *local_260 = '\0';
      }
      strcat(local_258,".ini");
      local_2c = (undefined4 *)(**(code **)(*DAT_007960d8 + 0x20))(local_258,"exists");
      iVar3 = FUN_00607960("exists",0);
      if (iVar3 == 0) {
        if (local_2c != (undefined4 *)0x0) {
          (**(code **)*local_2c)(1);
        }
        local_2c = (undefined4 *)0x0;
      }
    }
    if ((local_2c == (undefined4 *)0x0) && (*(char *)(param_1 + 0x38) != '\0')) {
      strcpy(local_258,(char *)(param_1 + 0x38));
      local_264 = strrchr(local_258,0x5c);
      if (local_264 == (char *)0x0) {
        local_258[0] = '\0';
      }
      else {
        local_264[1] = '\0';
      }
      strcat(local_258,"TEX.ini");
      local_2c = (undefined4 *)(**(code **)(*DAT_007960d8 + 0x20))(local_258,"exists");
      iVar3 = FUN_00607960("exists",0);
      if (iVar3 == 0) {
        if (local_2c != (undefined4 *)0x0) {
          (**(code **)*local_2c)(1);
        }
        local_2c = (undefined4 *)0x0;
      }
    }
    if ((local_2c == (undefined4 *)0x0) && (*(int *)(param_1 + 0x34) != 0)) {
      sprintf(local_258,"debug\\%d.ini",*(undefined4 *)(param_1 + 0x34));
      FUN_005ea5b0(local_258);
      local_2c = (undefined4 *)(**(code **)(*DAT_007960d8 + 0x20))(local_258,"exists");
      iVar3 = FUN_00607960("exists",0);
      if (iVar3 == 0) {
        if (local_2c != (undefined4 *)0x0) {
          (**(code **)*local_2c)(1);
        }
        local_2c = (undefined4 *)0x0;
      }
    }
    if ((local_2c == (undefined4 *)0x0) && (*(int *)(param_1 + 0x34) != 0)) {
      sprintf(local_258,"debug\\TEX.ini");
      FUN_005ea5b0(local_258);
      local_2c = (undefined4 *)(**(code **)(*DAT_007960d8 + 0x20))(local_258,"exists");
      iVar3 = FUN_00607960("exists",0);
      if (iVar3 == 0) {
        if (local_2c != (undefined4 *)0x0) {
          (**(code **)*local_2c)(1);
        }
        local_2c = (undefined4 *)0x0;
      }
    }
    if (local_2c != (undefined4 *)0x0) {
      sprintf(local_258,"%d",*(undefined4 *)(param_1 + 0x34));
      FUN_006078d0(local_258);
    }
    for (local_1c = 0; local_1c < 100; local_1c = local_1c + 1) {
      local_20 = 0;
      while ((local_20 < 100 &&
             (local_24 = (FILE *)FUN_00616c20(local_150,local_1c,local_20), local_24 != (FILE *)0x0)
             )) {
        if ((local_20 == 0) && (local_1c != 0)) {
          FUN_006200e0();
        }
        FUN_00617100(local_24,&local_40,&local_18,&local_38,&local_34);
        fclose(local_24);
        local_268 = 4;
        if (local_2c != (undefined4 *)0x0) {
          sprintf(local_27c,"l%dc%d-mode",local_1c,local_20);
          local_268 = FUN_00607960(local_27c,local_268);
        }
        FUN_0061f8a0(local_38,local_40,local_18,local_268,0);
        operator_delete(local_38);
        if (local_2c != (undefined4 *)0x0) {
          sprintf(local_298,"l%dc%d-x",local_1c,local_20);
          local_284 = FUN_00607960(local_298,0);
          sprintf(local_298,"l%dc%d-y",local_1c,local_20);
          local_280 = FUN_00607960(local_298,0);
          FUN_00620050(local_284,local_280);
        }
        local_20 = local_20 + 1;
      }
      if (local_20 == 0) break;
    }
    if (local_2c != (undefined4 *)0x0) {
      if (local_2c != (undefined4 *)0x0) {
        (**(code **)*local_2c)(1);
      }
      local_2c = (undefined4 *)0x0;
    }
    if (*(int *)(param_1 + 0x158) != 0) {
      operator_delete(*(void **)(param_1 + 0x158));
    }
    uVar4 = FUN_00620540();
    *(undefined4 *)(param_1 + 0x14c) = uVar4;
    pvVar2 = operator_new(*(uint *)(param_1 + 0x14c));
    *(void **)(param_1 + 0x158) = pvVar2;
    FUN_006201c0(*(undefined4 *)(param_1 + 0x158));
    if (local_3c != (undefined4 *)0x0) {
      (**(code **)*local_3c)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_44 ^ (uint)&stack0xfffffffc);
  return;
}

