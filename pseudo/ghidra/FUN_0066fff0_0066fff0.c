// FUN_0066fff0  0066fff0

undefined4 __thiscall FUN_0066fff0(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  FILE *pFVar2;
  undefined4 uVar3;
  int iVar4;
  int local_2c [2];
  __time64_t local_24;
  undefined1 local_1c;
  __time64_t local_14;
  undefined4 local_8;
  
  pFVar2 = (FILE *)FUN_0066fc60(&DAT_006da4f0);
  if (pFVar2 == (FILE *)0x0) {
    FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0xed);
    uVar3 = 0;
  }
  else {
    fseek(pFVar2,0,2);
    local_2c[0] = param_2;
    local_24 = _time64(&local_14);
    local_1c = param_4;
    fwrite(local_2c,0x18,1,pFVar2);
    fclose(pFVar2);
    pFVar2 = (FILE *)FUN_0066fab0(&DAT_006da4f0);
    if (pFVar2 == (FILE *)0x0) {
      FUN_005e9f20("false","..\\casinoShell\\rewards.cpp",0x101);
      uVar3 = 0;
    }
    else {
      FUN_00670520(param_2,param_4);
      fseek(pFVar2,5,0);
      fwrite((void *)(param_1 + 0xaf4),4,1,pFVar2);
      fwrite((void *)(param_1 + 0xaf8),4,1,pFVar2);
      cVar1 = FUN_00634560(param_2);
      if (cVar1 == '\0') {
        iVar4 = FUN_006344d0();
        param_2 = param_2 + -1000 + iVar4;
      }
      local_8 = FUN_006704e0(param_2);
      fseek(pFVar2,param_2 << 2,1);
      fwrite(&local_8,4,1,pFVar2);
      fclose(pFVar2);
      FUN_00634c70();
      uVar3 = 1;
    }
  }
  return uVar3;
}

