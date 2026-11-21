// FUN_00608320  00608320

float10 __fastcall FUN_00608320(undefined4 param_1)

{
  int iVar1;
  float local_8;
  
  alGetListenerfv(0x100a,&local_8,param_1);
  iVar1 = alGetError();
  if (iVar1 != 0) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0xd6);
  }
  return (float10)local_8;
}

