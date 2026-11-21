// FUN_005d0f00  005d0f00

void __fastcall FUN_005d0f00(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  FUN_005d0c30(&local_c,1);
  iVar1 = param_1[2];
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 <= iVar1) {
    FUN_005e9f20("GetCreditsBet() < GetMaxCreditsCanBetForThisMachine()",
                 "..\\Casino\\casinomachinestate.cpp",0xaa);
  }
  param_1[2] = param_1[2] + 1;
  if (param_1[1] == 0) {
    if (local_c == 0) {
      local_c = (-local_8 * param_1[3]) / 100;
      local_8 = (-local_8 * param_1[3]) % 100;
    }
    else {
      local_c = -param_1[3] * local_c;
      local_8 = -local_8;
    }
    FUN_005d1420(local_c,local_8);
  }
  else {
    FUN_005d0a20(param_1[1] + -1);
  }
  return;
}

