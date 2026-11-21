// FUN_006082d0  006082d0

void __fastcall FUN_006082d0(undefined4 param_1)

{
  int iVar1;
  
  alListenerfv(0x100a,&stack0x00000004,param_1);
  iVar1 = alGetError();
  if (iVar1 != 0) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0xce);
  }
  return;
}

