// FUN_006087f0  006087f0

int __thiscall FUN_006087f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_c;
  int local_8;
  
  if ((param_2 < 0) || (0xb < param_2)) {
    FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x172);
    local_8 = 0;
  }
  else {
    alGetSourcei(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24),0x1025,&local_c,param_1);
    alGetSourcei(*(undefined4 *)(&DAT_00796b3c + param_2 * 0x24),0x1026,&local_8);
    iVar1 = alGetError();
    if (iVar1 != 0) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x178);
    }
    local_8 = local_8 - local_c;
  }
  return local_8;
}

