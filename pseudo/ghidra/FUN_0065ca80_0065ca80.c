// FUN_0065ca80  0065ca80

void __thiscall FUN_0065ca80(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *_Str1;
  int iVar3;
  char *_Str2;
  char local_20 [16];
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = (**(code **)(*DAT_0162ee84 + 0x31c))(param_1);
  FUN_0063a3e0(0xffffffff,0);
  puVar2 = (undefined4 *)FUN_0063aac0();
  *puVar2 = 2;
  for (local_c = 0; local_c < 100; local_c = local_c + 1) {
    sprintf(local_20,"user%d.log",local_c);
    cVar1 = FUN_0063ab10(local_20);
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*DAT_0162ee84 + 0x368))(local_8), cVar1 == '\0')) {
      _Str2 = param_2;
      _Str1 = (char *)FUN_0057a470();
      iVar3 = strcmp(_Str1,_Str2);
      if (iVar3 == 0) break;
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

