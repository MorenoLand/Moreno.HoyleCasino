// FUN_00634220  00634220

void __fastcall FUN_00634220(int param_1)

{
  void *pvVar1;
  FILE *_File;
  int iVar2;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  pvVar1 = operator_new(0x1bd50);
  *(void **)(param_1 + 0x8c) = pvVar1;
  _File = (FILE *)FUN_005ea9c0("data\\rewpl.rdf",&DAT_006d8524);
  if (_File != (FILE *)0x0) {
    fread(local_10,1,5,_File);
    iVar2 = strcmp("RWPL",local_10);
    if (iVar2 == 0) {
      fread((void *)(param_1 + 0x8c),0x17c,300,_File);
      fclose(_File);
    }
    else {
      FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x50b);
      fclose(_File);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

