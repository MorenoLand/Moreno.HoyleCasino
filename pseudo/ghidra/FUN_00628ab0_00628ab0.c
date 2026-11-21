// FUN_00628ab0  00628ab0

void __thiscall FUN_00628ab0(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == -1) {
    param_2 = (**(code **)(*param_1 + 0xec))(param_3);
  }
  if (param_2 != -1) {
    puVar1 = (undefined4 *)FUN_0060ca40(param_2);
    FUN_0060c890(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar2 = FUN_00615260();
  if (param_2 == iVar2) {
    iVar2 = (**(code **)(*param_1 + 0xb8))();
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0xc0))(0xffffffff,1);
    }
    else {
      iVar2 = FUN_00615260(1);
      (**(code **)(*param_1 + 0xc0))(iVar2 + -1);
    }
  }
  (**(code **)(*param_1 + 0xd0))();
  return;
}

