// FUN_005cee20  005cee20

void __thiscall FUN_005cee20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *_Format;
  char local_ac [104];
  undefined8 local_44;
  undefined1 local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_44 = FUN_0064c8a0(param_3,0);
  FUN_005fa5b0(0,0,param_2,0x3c,0x192,0x23,0,0x9d,1,0x30,0xffffffff);
  FUN_0064c8d0(local_44,local_3c,0,1,0);
  _Format = (char *)FUN_00630f40("SID_CASINO_WON_FORMAT",local_3c);
  sprintf(local_ac,_Format);
  FUN_005fa5b0(0,1,local_ac,0x3c,0x192,0x23,0,0xc5,2,0x24,0xffffffff);
  if (*(int *)(param_1 + 0x17c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x17c) + 0xb0))(param_4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

