// FUN_00663d40  00663d40

void FUN_00663d40(undefined4 param_1)

{
  undefined4 *puVar1;
  char *_Dest;
  char local_114 [268];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  puVar1 = (undefined4 *)FUN_0060ca40(param_1);
  sprintf(local_114,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,puVar1 + 1);
  FUN_0060c890(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  remove(local_114);
  _Dest = strstr(local_114,".fac");
  if (_Dest != (char *)0x0) {
    strcpy(_Dest,".voc");
    remove(local_114);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

