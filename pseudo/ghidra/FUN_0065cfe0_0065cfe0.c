// FUN_0065cfe0  0065cfe0

void __thiscall FUN_0065cfe0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00663d40(param_2);
  iVar1 = (**(code **)(*param_1 + 0xb8))();
  if (iVar1 == 0) {
    FUN_0065c820(2,0,&PTR_006b27f8,1);
  }
  else if (param_2 == 0) {
    uVar3 = 1;
    uVar2 = FUN_006639a0(0);
    FUN_0065c820(3,0,uVar2,uVar3);
  }
  else {
    uVar3 = 1;
    uVar2 = FUN_006639a0(param_2 + -1);
    FUN_0065c820(3,0,uVar2,uVar3);
  }
  return;
}

