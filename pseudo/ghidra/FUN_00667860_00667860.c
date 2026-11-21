// FUN_00667860  00667860

void FUN_00667860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined1 local_214 [256];
  char local_114 [256];
  uint local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  int *local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_006679a0(param_1,local_214,param_2,param_3,param_4,local_c);
  if (cVar1 == '\0') {
    FUN_005e9f20("false","..\\casinoShell\\characterlines.cpp",0x22d);
  }
  else {
    uVar3 = extraout_var;
    iVar2 = FUN_00666fb0(local_214);
    if (iVar2 == -1) {
      FUN_005e9f20("false","..\\casinoShell\\characterlines.cpp",0x231);
    }
    else {
      sprintf(local_114,"%s_%s",param_3,param_4,uVar3);
      local_8 = (int *)FUN_00666e40(local_114);
      if (*local_8 == -1) {
        FUN_005e9f20("false","..\\casinoShell\\characterlines.cpp",0x236);
      }
      else {
        local_10 = FUN_00666740(iVar2,*local_8,0);
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

