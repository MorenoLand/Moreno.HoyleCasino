// FUN_0068a160  0068a160

void __thiscall FUN_0068a160(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char local_514 [264];
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_00607890(param_2,param_3);
  if (*(int *)(param_1 + 0x208) != 0) {
    fclose(*(FILE **)(param_1 + 0x208));
    *(undefined4 *)(param_1 + 0x208) = 0;
  }
  strcpy(local_514,(char *)(param_1 + 8));
  FUN_005ea5b0(local_514);
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  strcat(&local_40c,local_514);
  uVar1 = FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  *(undefined4 *)(param_1 + 0x208) = uVar1;
  *(undefined1 *)(param_1 + 0x20c) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

