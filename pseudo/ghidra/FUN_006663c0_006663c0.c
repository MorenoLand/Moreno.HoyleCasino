// FUN_006663c0  006663c0

undefined4 FUN_006663c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPSTR _Str;
  char *pcVar1;
  undefined4 local_24;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_0068736b;
  local_14 = ExceptionList;
  local_c = DAT_00781870 ^ 0x701948;
  ExceptionList = &local_14;
  _Str = GetCommandLineA();
  pcVar1 = strstr(_Str,"-noexceptiondump");
  if (pcVar1 == (char *)0x0) {
    local_8 = 0;
    local_24 = FUN_006662c0(param_1,param_2,param_3,param_4);
  }
  else {
    local_24 = FUN_006662c0(param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_14;
  return local_24;
}

