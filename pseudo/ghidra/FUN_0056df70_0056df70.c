// FUN_0056df70  0056df70

void __thiscall FUN_0056df70(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + param_2;
  if (999999999 < *(uint *)(param_1 + 0xa0)) {
    uVar1 = FUN_00630f40("SID_ROADPIZZA",0);
    uVar1 = FUN_00630f40("SID_ROADPIZZA_MAXCREDITS",uVar1);
    FUN_0062ff10(uVar1);
    FUN_0056e6b0();
  }
  FUN_005709b0(*(undefined4 *)(param_1 + 0xa0));
  return;
}

