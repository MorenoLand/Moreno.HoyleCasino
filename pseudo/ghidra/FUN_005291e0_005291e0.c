// FUN_005291e0  005291e0

void FUN_005291e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 1) {
    uVar2 = 1;
    uVar1 = FUN_00529240(param_2);
    FUN_005299e0(param_1,0,1,uVar1,uVar2);
  }
  else {
    FUN_005299e0(param_1,0,0,1,1);
  }
  return;
}

