// FUN_00689f80  00689f80

void FUN_00689f80(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *extraout_var;
  undefined4 *puVar3;
  undefined1 local_53f;
  undefined1 local_53e;
  undefined1 local_53d;
  undefined1 *local_53c;
  undefined1 *local_534;
  undefined1 *local_52c;
  char local_520 [264];
  char local_418;
  undefined1 local_417 [1027];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006adf3f;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_00607820(param_1,param_2);
  local_8 = 0;
  *extraout_var = IniFile::vftable;
  local_52c = &local_53f;
  local_534 = &local_53e;
  local_53c = &local_53d;
  puVar3 = extraout_var;
  FUN_0068d000(uVar1,extraout_var,extraout_var + 0x84);
  local_8 = CONCAT31(local_8._1_3_,1);
  strcpy(local_520,(char *)(puVar3 + 2));
  FUN_005ea5b0(local_520);
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  strcat(&local_418,local_520);
  uVar2 = FUN_005ea9c0(&local_418,&DAT_006c2d28);
  puVar3[0x82] = uVar2;
  *(undefined1 *)(puVar3 + 0x83) = 0;
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

