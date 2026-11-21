// FUN_00674d40  00674d40

void FUN_00674d40(void)

{
  uint uVar1;
  undefined4 *extraout_var;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 local_417 [1027];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ad45e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_005e9e20(uVar1);
  local_8 = 0;
  *extraout_var = FMResourceManager::vftable;
  puVar2 = extraout_var;
  FUN_00676410();
  local_8._0_1_ = 1;
  FUN_00676410();
  local_8._0_1_ = 2;
  FUN_00676410();
  local_8._0_1_ = 3;
  FUN_00676410();
  local_8._0_1_ = 4;
  FUN_00676410();
  local_8._0_1_ = 5;
  FUN_00676410();
  local_8._0_1_ = 6;
  FUN_00676410();
  local_8._0_1_ = 7;
  FUN_00676410();
  local_8._0_1_ = 8;
  FUN_00676410();
  local_8._0_1_ = 9;
  FUN_00676410();
  local_8._0_1_ = 10;
  FUN_00676410();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  uVar3 = 0;
  memset(local_417,0,0x3ff);
  sprintf((char *)(puVar2 + 0x2f),"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,"facecreator.ini",uVar1,
          puVar2,uVar3);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  FUN_00675650();
  FUN_00675560(puVar2 + 7,&DAT_006e19b0);
  FUN_00675560(puVar2 + 0xb,&DAT_006e19a8);
  FUN_00675560(puVar2 + 0xf,&DAT_006e19a0);
  FUN_00675560(puVar2 + 0x13,&DAT_006e1998);
  FUN_00675560(puVar2 + 0x17,&DAT_006e1990);
  FUN_00675560(puVar2 + 0x1b,"MOUTH");
  FUN_00675560(puVar2 + 0x1f,"LBROW");
  FUN_00675560(puVar2 + 0x23,"RBROW");
  FUN_00675560(puVar2 + 0x27,"FACIALHAIR");
  FUN_00675560(puVar2 + 0x2b,"GLASSES");
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

