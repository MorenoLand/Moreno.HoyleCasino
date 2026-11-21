// FUN_00554eb0  00554eb0

void __thiscall FUN_00554eb0(int param_1,int param_2)

{
  char *_Format;
  undefined4 uVar1;
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    uVar1 = FUN_00630f40("SID_VIDEOPOKER_GAMEOVER");
    (**(code **)(**(int **)(param_1 + 0xb8) + 0xb4))(uVar1);
  }
  else {
    _Format = (char *)FUN_00630f40("SID_GENERIC_WON_COLON_FORMAT",param_2);
    sprintf(local_74,_Format);
    (**(code **)(**(int **)(param_1 + 0xb8) + 0xb4))(local_74);
  }
  (**(code **)(**(int **)(param_1 + 0xb8) + 0x74))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

