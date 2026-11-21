// FUN_005e97a0  005e97a0

void __thiscall FUN_005e97a0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_005e96b0(param_2);
  if (param_2 == 200) {
    iVar1 = FUN_005e9590();
    if (iVar1 != -1) {
      uVar2 = FUN_005e9640(iVar1);
      (**(code **)(*param_1 + 0x4c))(uVar2);
    }
  }
  return;
}

