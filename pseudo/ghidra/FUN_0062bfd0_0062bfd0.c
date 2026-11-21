// FUN_0062bfd0  0062bfd0

void __thiscall
FUN_0062bfd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  FILE *_File;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      _File = (FILE *)FUN_005ea9c0(param_2,&DAT_006c2d28);
      if (_File == (FILE *)0x0) {
        sprintf(local_8c,"Error opening file: %s.\n",param_2);
        FUN_0062fde0(local_8c);
      }
      else {
        FUN_0062c0c0(_File,param_3,param_4,param_5);
        fclose(_File);
      }
    }
  }
  else {
    FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x22a);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

