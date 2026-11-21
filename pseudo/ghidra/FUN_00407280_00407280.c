// FUN_00407280  00407280

void __thiscall FUN_00407280(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 local_1dc [4];
  undefined1 local_1d8 [464];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*param_1 + 0x100))(param_2,local_1dc);
  if (cVar1 != '\0') {
    FUN_00630f40(local_1d8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

