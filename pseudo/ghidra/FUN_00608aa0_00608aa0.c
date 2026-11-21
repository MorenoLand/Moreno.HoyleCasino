// FUN_00608aa0  00608aa0

int FUN_00608aa0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  iVar1 = FUN_006089e0(param_1);
  if (iVar1 == -1) {
    iVar1 = -1;
  }
  else {
    uVar3 = extraout_var;
    FUN_00609720(iVar1,1);
    alSourceStop(*(undefined4 *)(&DAT_00796b3c + iVar1 * 0x24),uVar3);
    alSourceRewind(*(undefined4 *)(&DAT_00796b3c + iVar1 * 0x24));
    alSourcei(*(undefined4 *)(&DAT_00796b3c + iVar1 * 0x24),0x1009,0);
    iVar2 = alGetError();
    if (iVar2 != 0) {
      FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x1e9);
    }
  }
  return iVar1;
}

