// FUN_00637130  00637130

void FUN_00637130(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  int local_c;
  
  iVar1 = FUN_00666c70(param_1,param_2);
  if (iVar1 == 0) {
    FUN_005e9f20(&DAT_006da634,"..\\casinoShell\\shell.cpp",0x929,extraout_var);
  }
  iVar2 = FUN_006667c0(param_1,param_2);
  for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
    FUN_006044b0(0x20534443,iVar2 + local_c,0);
    FUN_006044b0(0x2047474f,iVar2 + local_c,0);
  }
  return;
}

