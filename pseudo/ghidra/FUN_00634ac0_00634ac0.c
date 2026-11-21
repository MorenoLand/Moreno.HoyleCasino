// FUN_00634ac0  00634ac0

undefined4 __fastcall FUN_00634ac0(int param_1)

{
  FILE *_File;
  undefined4 uVar1;
  void *pvVar2;
  int local_8;
  
  _File = (FILE *)FUN_00634870(&DAT_006c2d28);
  if (_File == (FILE *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x5d6);
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x90) == 0) {
      pvVar2 = operator_new(0x5f0);
      *(void **)(param_1 + 0x90) = pvVar2;
    }
    fseek(_File,5,0);
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      fread((void *)(local_8 * 0x98 + *(int *)(param_1 + 0x90)),0x98,1,_File);
    }
    fclose(_File);
    uVar1 = 1;
  }
  return uVar1;
}

