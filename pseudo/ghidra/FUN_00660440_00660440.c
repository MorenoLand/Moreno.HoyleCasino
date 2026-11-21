// FUN_00660440  00660440

void __fastcall FUN_00660440(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_005e4390(param_1);
  strcpy(local_8c,(char *)(iVar1 + 0x21));
  FUN_0065c820(*(undefined1 *)(iVar1 + 0x3a),*(undefined1 *)(iVar1 + 0x3b),local_8c,1);
  uVar2 = FUN_00665800(iVar1 + 0x21);
  FUN_0065c9c0(uVar2);
  uVar2 = what();
  FUN_005fb5a0(2,uVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

