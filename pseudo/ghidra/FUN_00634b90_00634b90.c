// FUN_00634b90  00634b90

void __fastcall FUN_00634b90(int *param_1)

{
  char cVar1;
  char local_14 [8];
  uint local_c;
  FILE *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*param_1 + 0xdc))();
  if ((cVar1 != '\0') && (param_1[0x24] != 0)) {
    local_8 = (FILE *)FUN_00634870(&DAT_006da58c);
    if (local_8 == (FILE *)0x0) {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x5f3);
    }
    else {
      strcpy(local_14,"RTOP");
      fwrite(local_14,1,5,local_8);
      fwrite((void *)param_1[0x24],0x98,10,local_8);
      fclose(local_8);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

