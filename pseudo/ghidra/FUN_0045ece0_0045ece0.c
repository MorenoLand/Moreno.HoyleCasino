// FUN_0045ece0  0045ece0

undefined4 __fastcall FUN_0045ece0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = FUN_00630f40("SID_PAIGOWPOKER1",1,param_1,0);
  }
  else {
    uVar1 = FUN_00630f40("SID_PAIGOWPOKER",*(int *)(param_1 + 4),param_1,0);
  }
  return uVar1;
}

